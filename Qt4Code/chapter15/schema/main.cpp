

#include <QtGui>
#include "mainwindow.h"

//! [0]
int main(int argc, char* argv[])
{
    Q_INIT_RESOURCE(schema);
    QApplication app(argc, argv);
	QTextCodec::setCodecForTr(QTextCodec::codecForName("gb18030"));
    MainWindow* const window = new MainWindow;
    window->show();
    return app.exec();
}
//! [0]
