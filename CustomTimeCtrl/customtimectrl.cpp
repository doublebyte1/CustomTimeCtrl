#include "customtimectrl.h"

CustomTimeCtrl::CustomTimeCtrl(QWidget *parent)
    : QWidget(parent)
{
    m_bDate=true;
    m_bTime=true;
    setupUi(this);
    checkTime->setChecked(true);//Default
    setFormatInfo();
}

CustomTimeCtrl::~CustomTimeCtrl()
{
}

void CustomTimeCtrl::setFormatInfo()
{
    this->lbDateFormat->setText(tr("Format: ")+ this->dateEdit->displayFormat());
    this->lbTimeFormat->setText(tr("Format: ")+ this->timeEdit->displayFormat());
}

void CustomTimeCtrl::showEvent ( QShowEvent * event ){
    //Showing the form with no time option!
    //checkTime->setVisible(m_bTime);
    showHasDateTime();
}

void CustomTimeCtrl::setHasTime ( bool bTime ){

    m_bTime=bTime;
    emit isDateTime(bTime);
    showHasDateTime();
}

void CustomTimeCtrl::showHasDateTime(){

    this->groupDate->setVisible(m_bDate);
    this->groupTime->setVisible(m_bTime);
}

QDateTime CustomTimeCtrl::dateTime()
{
    return QDateTime(dateEdit->date(),timeEdit->time(),m_bUTC? Qt::UTC: Qt::LocalTime);//TODO: read timespec from variable
}
 
void CustomTimeCtrl::setDateTime(const QDateTime& datetime)
{
    this->dateEdit->setDate(datetime.date());
    this->timeEdit->setTime(datetime.time());
}

void CustomTimeCtrl::setIsDateTime(const bool bDate, const bool bTime)
{
    m_bDate=bDate;
    m_bTime=bTime;
    checkTime->setChecked(m_bDate && m_bTime);
    groupHasTime->setVisible(m_bDate);
}