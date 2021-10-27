#include "QLKH.h"
#include <iostream>
#include <conio.h>
using namespace std;
int QLKH::s_numNodes = 0;
QLKH::QLKH()
{
    this->pHead = nullptr;
    this->pTail = nullptr;
}
void QLKH::display()
{
    KhachHang *p = pHead;
    while (p != nullptr)
    {
        p->print();
        p = p->pNext;
    }
}
// Thêm vào sau
void QLKH::add(KhachHang &KH)
{
    if (this->pHead == nullptr)
    {
        this->pHead = &KH;
        this->pTail = this->pHead;
    }
    else
    {
        this->pTail->pNext = &KH;
        this->pTail = &KH;
    }
    s_numNodes++;
}

void QLKH::insert(KhachHang &KH, int index)
{
    int count = 1;
    KhachHang *p = pHead;
    KhachHang *before;
    while (count < index)
    {
        before = p;
        p = p->pNext;
        count++;
    }
    KhachHang *insertElement = &KH;
    insertElement->pNext = p;
    // Nếu thêm vào vị trí đầu, tức là pHead==p
    if (pHead == p)
    {
        pHead = insertElement;
    }
    else
    {
        before->pNext = insertElement;
    }
    s_numNodes++;
}

void QLKH::edit(int index)
{
    KhachHang *khachHang = &getCostumer(index);
    string choice;
    do
    {
        cout << "Which information do you want to edit? " << endl;
        fflush(stdin);
        cin >> choice;
        if (choice == "name")
        {
            cout << "Enter new name: " << endl;
            string name;
            do
            {
                cin >> name;
                khachHang->setName(name);
                if (name == "")
                    cout << "Please enter a name.";
            } while (name == "");
        }
        else if (choice == "age")
        {
            cout << "Enter new age: " << endl;
            int age;
            do
            {
                cin >> age;
                khachHang->setAge(age);
            } while (age < 0);
        }
        else if (choice == "adress")
        {
            cout << "Enter new address:" << endl;
            string adress;
            do
            {
                cin >> adress;
                khachHang->setAdress(adress);
                if (adress == "")
                    cout << "Please enter a valid address";
            } while (adress == "");
        }
        else
        {
            char anotherChoice;
            cout << "Do you want to cancle editting? Press 'Esc' to quit " << endl;
            anotherChoice = getch();
            if (anotherChoice == 27)
            {
                break;
            }
        }
    } while (true);
}

int QLKH::indexOf(KhachHang &KH)
{
    int count = 0;
    KhachHang *p = pHead;
    KhachHang *temp = &KH;
    while (p != nullptr && p != temp)
    {
        p = p->pNext;
        count++;
    }
    return count;
}

KhachHang &QLKH::getCostumer(int index)
{
    KhachHang *p = pHead;
    for (int i = 0; i < index; i++)
        p = p->pNext;
    return *p;
}
void QLKH::remove(int index)
{
    if (index == 0)
    {
        removeFirst();
    }
    else
    {
        if (pHead != nullptr)
        {
            KhachHang *temp = pHead;
            for (int i = 0; i < index - 1; i++)
                temp = temp->pNext;
            KhachHang *after = temp->pNext;
            KhachHang *holder = after->pNext;
            temp->pNext = holder;
            delete after;
            s_numNodes--;
        }
    }
}
void QLKH::removeFirst()
{
    KhachHang *temp;
    if (pHead != nullptr)
    {
        temp = pHead;
        pHead = temp->pNext;
        delete temp;
        s_numNodes--;
    }
}