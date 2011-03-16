#ifndef CUSTOMTIMECTRL_H
#define CUSTOMTIMECTRL_H

#include <QDesignerExportWidget>
#include <QtGui/QWidget>
#include "ui_datetime.h"

class QDESIGNER_WIDGET_EXPORT CustomTimeCtrl : public QWidget, public Ui::DateTime
{
    Q_OBJECT

public:
    CustomTimeCtrl(QWidget *parent = 0);
    ~CustomTimeCtrl();

    void            setIsDateTime(const bool bDate, const bool bTime)
                            {m_bDate=bDate; m_bTime=bTime;}

protected:
    void            showEvent ( QShowEvent * event );

private slots:
    void            setHasTime(bool bTime);

private:
    void            setFormatInfo();
    void            showHasDateTime();

    bool            m_bDate;
    bool            m_bTime;

};

#endif // CUSTOMTIMECTRL_H
