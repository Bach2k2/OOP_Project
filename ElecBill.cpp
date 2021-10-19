#include "ElecBill.h"
#include <iostream>
using namespace std;

ElecBill::ElecBill()
{
    this->elecNumber=0;
    this->cost=0;
}
void ElecBill::calCost(int elecNumber)
{//
    if (elecNumber>400) this->cost=(elecNumber-400)*2.976+100*2.834+100*2.536+100*2.014+50*1.734+50*1.678;
    else if(elecNumber>300) this->cost=(elecNumber-300)*2.834+100*2.536+100*2.014+50*1.734+50*1.678;
    else if(elecNumber>200) this->cost=(elecNumber-200)*2.536+100*2.014+50*1.734+50*1.678;
    else if(elecNumber>100) this->cost=(elecNumber-100)*2.014+50*1.734+50*1.678;
    else if(elecNumber>50) this->cost=(elecNumber-50)*1.734+50*1.678;
    else if(elecNumber>50) this->cost=(elecNumber-50)*1.678;
}
double ElecBill::getCost()
{
    return this->cost;
}
void ElecBill::setElecNumber(int elecNumber)
{
    this->elecNumber=elecNumber;
}