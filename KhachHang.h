#include "ElecBill.h"
#include <fstream>
class KhachHang
{
private:
    long customId;
    string name;
    int age;
    string adress;
    ElecBill bill;
public:
    KhachHang *pNext;
public:
    KhachHang();
    void setCustomId();
    void setName(string);
    void setAge(int);
    void setAdress(string);
    void setAll(fstream &);

    long generateCustomId();
    long getCustomId();
    string getName();
    int getAge();
    string getAdress();
    void print();
    void checkBill(ElecBill &);
};

