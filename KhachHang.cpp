#include "KhachHang.h"
#include <iostream>
#include <string>
using namespace std;
KhachHang::KhachHang()
{
    this->name="";
    this->age=0;
    this->adress="";
    this->pNext=nullptr;
}
string KhachHang::getName()
{
    return this->name;
}
int KhachHang::getAge()
{
    return this->age;
}
string KhachHang::getAdress()
{
    return this->adress;
}
void KhachHang::setAll(string name, int age, string adress)
{
   this->name=name;
   this->age=age;
   this->adress=adress;
}
void KhachHang::print()
{
    cout << "\nTen khach hang: " << this->name;
    cout << "\nTuoi: " << this->age;
    cout << "\nDia chi: " << this->adress;
}
void KhachHang::checkBill(ElecBill &bill) 
{
    cout<<"So tien dien: "<< bill.getCost()<<endl;
}

