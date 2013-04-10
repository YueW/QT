

#include <QtGui>
#include "imageshow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc,argv);
	QTextCodec::setCodecForTr(QTextCodec::codecForName("gb2312"));
    ImagesWgt imageView;
    imageView.show();
    return app.exec();
}

