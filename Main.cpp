#include "QLKH.h"
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    fstream input("C:\\Users\\DE\\Desktop\\KhachHang.txt");
    QLKH qli;
    int amount;
    input >> amount;
    if (input.is_open())
    {
        cout << "Mo thanh cong!!" << endl;
    }
    else
    {
        cout << "Mo that bai!!" << endl;
    }
    // while(!input.eof())	//khi chưa tới cuối file thì tiếp tục đọc
    // {
    // 	  KhachHang KH;
    //       KH.setAll(input);
    //       qli.add(KH);
    // }
    for (int i = 0; i < amount; i++)
    {
        KhachHang *KH=new KhachHang;
        KH->setAll(input);
        qli.add(*KH);
    }
    qli.display();
}