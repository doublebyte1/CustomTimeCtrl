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
    checkTime->setVisible(m_bTime);
    showHasDateTime();
}

void CustomTimeCtrl::setHasTime ( bool bTime ){

    m_bTime=bTime;
    showHasDateTime();
}

void CustomTimeCtrl::showHasDateTime(){

    this->groupDate->setVisible(m_bDate);
    this->groupTime->setVisible(m_bTime);

    //horizontalLayout_2->addWidget(m_bDate?groupDate:groupTime);
    //horizontalLayout_2->removeWidget(m_bTime?groupDate:groupTime);

}
