#include "QLKH.h"
#include <iostream>
using namespace std;
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
}