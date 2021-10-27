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
    // Xóa ở vị trí index
    void remove(int);
    // Xóa cái đầu tiên
    void removeFirst();
    void display();
};