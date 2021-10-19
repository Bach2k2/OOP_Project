#include "QLKH.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    KhachHang kh1;
    KhachHang kh2;
    kh1.setAll("Nguyen Van A",18,"Da Nang");
    kh2.setAll("Le Van B",19,"Hai Phong");
    // kh1.print();
    // kh2.print();
    QLKH qli;
    qli.add(kh1);
    qli.add(kh2);
    qli.display();
    cout<<"\nNhap Khach hang can them: ";
    // vi du:
    KhachHang kh3;
    kh3.setAll("C",20,"Disney");
     system("pause");
    int index;
    cout<<"\nNhap vi tri: "<<endl;
    cin>>index;
    qli.insert(kh3,index);
    qli.display();
    return 0;
}