
#include "dialog.h"
#include <QFileDialog>
#include <QBuffer>
#include <QtCore/QDebug>


Dialog::Dialog(QWidget *parent)
  : QDialog(parent), sharedMemory("shareMemory")
{
    ui.setupUi(this);
	socket = new QLocalSocket(this);
	connect(socket, SIGNAL(readyRead()), this, SLOT(loadFromSocket()));
	connect(socket, SIGNAL(error(QLocalSocket::LocalSocketError)),
		this, SLOT(displayError(QLocalSocket::LocalSocketError)));
    connect(ui.localSockPB, SIGNAL(clicked()), SLOT(connectToSocket()));
    connect(ui.shareMemPB,SIGNAL(clicked()),SLOT(loadFromMemory()));

}

void Dialog::connectToSocket()
{
	socket->abort();
	socket->connectToServer("image");

}

void Dialog::loadFromSocket()
{
	QDataStream in(socket);
	QImage image;
	in >> image;
	ui.imageLabel->setPixmap(QPixmap::fromImage(image));

}

void Dialog::loadFromMemory()
{
    if (!sharedMemory.attach())
    {
        ui.imageLabel->setText(tr("�޷����ӵ������ڴ�"));
        return;
    }

    QBuffer buffer;
    QDataStream in(&buffer);
    QImage image;

    sharedMemory.lock();
    buffer.setData((char*)sharedMemory.constData(), sharedMemory.size());
    buffer.open(QBuffer::ReadOnly);
    in >> image;
    sharedMemory.unlock();

    detach();
    ui.imageLabel->setPixmap(QPixmap::fromImage(image));
}

void Dialog::detach()
{
    if (!sharedMemory.detach())
    	ui.imageLabel->setText(tr("�޷����빲���ڴ档"));
}

void Dialog::displayError(QLocalSocket::LocalSocketError socketError)
{
	switch (socketError)
	{
		case QLocalSocket::ConnectionRefusedError:
			ui.imageLabel->setText(tr("���ӱ��ܾ���ʱ��"));
			break;
		case QLocalSocket::PeerClosedError:
			ui.imageLabel->setText(tr("�����socket���ӹرա�"));
			break;
		case QLocalSocket::ServerNotFoundError:
			ui.imageLabel->setText(tr("δ�ҵ���Ϊimage��local socket��"));
			break;
		case QLocalSocket::SocketAccessError:
			ui.imageLabel->setText(tr("local socket���ʴ���"));
			break;
		case QLocalSocket::SocketResourceError:
			ui.imageLabel->setText(tr("������Դ�ľ���"));
			break;
		case QLocalSocket::SocketTimeoutError:
			ui.imageLabel->setText(tr("socket��ʱ��"));
			break;
		case QLocalSocket::DatagramTooLargeError:
			ui.imageLabel->setText(tr("���ĳ�����"));
			break;
		case QLocalSocket::ConnectionError:
			ui.imageLabel->setText(tr("����ʧ�ܡ�"));
			break;
		case QLocalSocket::UnsupportedSocketOperationError:
			ui.imageLabel->setText(tr("local socket�Ƿ�������"));
			break;
		case QLocalSocket::UnknownSocketError:
			ui.imageLabel->setText(tr("�������Ͳ�����"));
			break;
		default:
			ui.imageLabel->setText(tr("local socket����%1.")	.arg(socket->errorString()));
	}

}
