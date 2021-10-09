#include "ElecBill.h"
#include <string>
using namespace std;
class KhachHang
{
private:
    string name;
    int age;
    string adress;
    ElecBill bill;
public:
    KhachHang *pNext;
public:
    KhachHang();
    void setName(string);
    void setAge(int);
    void setaAdress(string);
    void setAll(string, int, string);
    string getName();
    int getAge();
    string getAdress();
    void print();
    void checkBill(ElecBill &);
};
