#include "KhachHang.h"
#include <iostream>
using namespace std;
class QLKH
{
    private:
    KhachHang KH;
    public:
    KhachHang *pHead,*pTail;
    public:
    QLKH();
    void add(KhachHang &);
    void insert(KhachHang &,int);
    int indexOf(KhachHang &);
    void edit(KhachHang &);
    void remove(KhachHang &);
    void display();
};