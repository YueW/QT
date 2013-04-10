//----------------------------------*-C++-*------------------------------------
//      版权所有 (C) 作者独立享有版权。
//      保留所有版权，未经授权，任何单位和个人不得擅自复制、使用本成果。
//-----------------------------------------------------------------------------
//      版本号 0.01
//-----------------------------------------------------------------------------
//	文件名: MsgHandler.h		类名：MsgHandler
//-----------------------------------------------------------------------------
//      编制说明  :
//-----------------------------------------------------------------------------
//	开发组:无名
//	创建人			创建时间
//	李立夏			2010-8-29
//-----------------------------------------------------------------------------
//	开发组:无名
//
//	修改人员			修改日期			修改内容
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
