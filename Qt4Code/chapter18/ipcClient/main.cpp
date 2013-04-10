
#include <QApplication>
#include <QtCore>
#include "dialog.h"

//! [0]
int main(int argc, char *argv[])
{
    QApplication application(argc, argv);
	QTextCodec::setCodecForTr(QTextCodec::codecForName("gb18030"));
    Dialog dialog;
    dialog.show();
    return application.exec();
}
//! [0]

