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
long KhachHang::getCustomId()
{
    return this->customId;
}
long KhachHang::generateCustomId()
{
    static long s_id(100);
    s_id++;
    return s_id;
}
void KhachHang::setCustomId()
{
    this->customId=generateCustomId();
}
void KhachHang::setName(string name)
{
    this->name = name;
}
void KhachHang::setAge(int age)
{
    this->age = age;
}
void KhachHang::setAdress(string address)
{
    this->adress = address;
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
    checkBill(this->bill);
}
void KhachHang::checkBill(ElecBill &bill) 
{
    cout<<"\nSo tien dien: "<< bill.getCost()<<endl;
}



