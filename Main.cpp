#include "QLKH.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
    KhachHang kh1;
    KhachHang kh2;
    kh1.setAll("Lee Trung Bac",12,"Hai Trieu");
    kh2.setAll("Thuy Tien",11,"Hang Rong");
    // kh1.print();
    // kh2.print();
    QLKH qli;
    qli.add(kh1);
    qli.add(kh2);
    cout<<"\nNhap Khach hang can them: ";
    // vi du:
    KhachHang kh3;
    kh3.setAll("Donald duck",5,"Disney");
    int index;
    cout<<"\nNhap vi tri: "<<endl;
    cin>>index;
    qli.insert(kh3,index);
    qli.display();
    return 0;
}