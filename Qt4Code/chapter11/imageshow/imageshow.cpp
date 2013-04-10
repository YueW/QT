

#include "imageshow.h"
#include "math.h"


const int imageSize = 100;
QImage scale(const QString &imageFileName)
{
    QImage image(imageFileName);
    return image.scaled(QSize(imageSize, imageSize), Qt::IgnoreAspectRatio, Qt::SmoothTransformation);
}

ImagesWgt::ImagesWgt(QWidget *parent)
: QWidget(parent)
{
    setWindowTitle(tr("Õº∆¨‰Ø¿¿"));
    resize(800, 600);
    progress = new QProgressBar();

    imageWatcher = new QFutureWatcher<QImage>(this);
    connect(imageWatcher, SIGNAL(progressRangeChanged(int,int)), progress, SLOT(setRange(int,int)));
    connect(imageWatcher, SIGNAL(progressValueChanged(int)), progress, SLOT(setValue(int)));
    connect(imageWatcher, SIGNAL(resultReadyAt(int)), this,SLOT(showImage(int)));
    connect(imageWatcher, SIGNAL(finished()), this,SLOT(finished()));

    cancel = new QPushButton(tr("»°œ˚"));
    cancel->setEnabled(false);
    connect(cancel, SIGNAL(clicked()), imageWatcher, SLOT(cancel()));

    pause = new QPushButton(tr("‘›Õ£/ª÷∏¥"));
    pause->setEnabled(false);
    connect(pause, SIGNAL(clicked()), imageWatcher, SLOT(togglePaused()));

    open = new QPushButton(tr("¥Úø™"));
    connect(open, SIGNAL(clicked()), SLOT(openFiles()));

    QHBoxLayout *buttonLayout = new QHBoxLayout();
    buttonLayout->addWidget(open);
    buttonLayout->addWidget(cancel);
    buttonLayout->addWidget(pause);
    buttonLayout->addStretch();

    imagesLayout = new QGridLayout();
    mainLayout = new QVBoxLayout();
    mainLayout->addLayout(buttonLayout);
    mainLayout->addLayout(imagesLayout);
    mainLayout->addStretch();
    mainLayout->addWidget(progress);
    setLayout(mainLayout);
}

ImagesWgt::~ImagesWgt()
{
    imageWatcher->cancel();
    imageWatcher->waitForFinished();
}

void ImagesWgt::openFiles()
{
    // Cancel and wait if we are already loading images.
    if (imageWatcher->isRunning()) {
        imageWatcher->cancel();
        imageWatcher->waitForFinished();
    }

    // Show a file open dialog at QDesktopServices::PicturesLocation.
    QStringList files = QFileDialog::getOpenFileNames(this, tr("—°‘ÒÕº∆¨"),
                            QDesktopServices::storageLocation(QDesktopServices::PicturesLocation),
                            "*.jpg *.png");

    if (files.count() == 0)
        return;

    // Do a simple layout.
    qDeleteAll(labels);
    labels.clear();

    int dim = sqrt(qreal(files.count())) + 1;
    for (int i = 0; i < dim; ++i) {
        for (int j = 0; j < dim; ++j) {
            QLabel *imageLabel = new QLabel;
            imageLabel->setFixedSize(imageSize,imageSize);
            imagesLayout->addWidget(imageLabel,i,j);
            labels.append(imageLabel);
        }
    }

    // Use mapped to run the thread safe scale function on the files.
    imageWatcher->setFuture(QtConcurrent::mapped(files, scale));

    open->setEnabled(false);
    cancel->setEnabled(true);
    pause->setEnabled(true);
}

void ImagesWgt::showImage(int num)
{
    labels[num]->setPixmap(QPixmap::fromImage(imageWatcher->resultAt(num)));
}

void ImagesWgt::finished()
{
    open->setEnabled(true);
    cancel->setEnabled(false);
    pause->setEnabled(false);
}


