#include "KhachHang.h"
class QLKH
{
    private:
    KhachHang KH;
    public:
    KhachHang *pHead,*pTail;
    static int s_numNodes;
    public:
    QLKH();
    void add(KhachHang &);
    void insert(KhachHang &,int);
    int indexOf(KhachHang &);
    KhachHang& getCostumer(int);
    void edit(int);
    void remove(int);
    void display();
};