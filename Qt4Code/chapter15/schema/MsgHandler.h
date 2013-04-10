//----------------------------------*-C++-*------------------------------------
//      ��Ȩ���� (C) ���߶������а�Ȩ��
//      �������а�Ȩ��δ����Ȩ���κε�λ�͸��˲������Ը��ơ�ʹ�ñ��ɹ���
//-----------------------------------------------------------------------------
//      �汾�� 0.01
//-----------------------------------------------------------------------------
//	�ļ���: MsgHandler.h		������MsgHandler
//-----------------------------------------------------------------------------
//      ����˵��  :
//-----------------------------------------------------------------------------
//	������:����
//	������			����ʱ��
//	������			2010-8-29
//-----------------------------------------------------------------------------
//	������:����
//
//	�޸���Ա			�޸�����			�޸�����
//
//
//-----------------------------------------------------------------------------


#ifndef MSGHANDLER_H_
#define MSGHANDLER_H_

#include <QAbstractMessageHandler>

class MsgHandler : public QAbstractMessageHandler
{
    public:
    	MsgHandler()
            : QAbstractMessageHandler(0)
        {
        }

        QString statusMessage() const
        {
            return m_description;
        }

        int line() const
        {
            return m_sourceLocation.line();
        }

        int column() const
        {
            return m_sourceLocation.column();
        }

    protected:
        virtual void handleMessage(QtMsgType type, const QString &description,
                                   const QUrl &identifier, const QSourceLocation &sourceLocation)
        {
            Q_UNUSED(type);
            Q_UNUSED(identifier);

            m_description = description;
            m_sourceLocation = sourceLocation;
        }

    private:
        QString m_description;
        QSourceLocation m_sourceLocation;
};

#endif /* MSGHANDLER_H_ */
