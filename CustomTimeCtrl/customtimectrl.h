#ifndef CUSTOMTIMECTRL_H
#define CUSTOMTIMECTRL_H

#include <QtDesigner/QDesignerExportWidget>
#include <QtGui>
#include "ui_datetime.h"

//!  Custom Time Control class. 
/*!
  This class decouples the DateTime Data Type in two separate widgets, for date and time;
  It also has some description properties to tells us if it is an automatic DateTime widget
  and if the time is UTC;
*/

class QDESIGNER_WIDGET_EXPORT CustomTimeCtrl : public QWidget, public Ui::DateTime
{
    Q_OBJECT

public:
    CustomTimeCtrl(QWidget *parent = 0);
    ~CustomTimeCtrl();

    Q_PROPERTY(QDateTime dateTime READ dateTime WRITE setDateTime NOTIFY dateTimeChanged USER true)


    void setDateTime(const QDateTime &datetime);
    QDateTime dateTime();

    void                setIsDateTime(const bool bDate, const bool bTime, const bool bCheck);

    void                setIsUTC(const bool bUTC)
                            {m_bUTC=bUTC;}

    void                setIsAuto(const bool bAuto)
                            {m_bAuto=bAuto; emit isAuto(m_bAuto);}

    bool                getIsAuto(){return m_bAuto;}
    bool                getIsUTC(){return m_bUTC;}

    void                getIsDateTime(bool &bDate, bool &bTime)
                            {bDate=m_bDate; bTime=m_bTime;}

signals:
    void                isAuto(bool bAuto);
    void                isDateTime(bool bDateTime);

protected:
    void                showEvent ( QShowEvent * event );

private slots:
    void                setHasTime(bool bTime);

private:
    void                setFormatInfo();
    void                showHasDateTime();

    bool                m_bCheck;
    bool                m_bDate;
    bool                m_bTime;
    bool                m_bUTC;
    bool                m_bAuto;
};

#endif // CUSTOMTIMECTRL_H
