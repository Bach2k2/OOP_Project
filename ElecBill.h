#include <string>
#include <iostream>
#include <conio.h>
using namespace std;
class ElecBill
{
private:
    int elecNumber;
    double cost;
    string dueDate;
    string paymentDate;
    bool alreadyPayment;

public:
    ElecBill();
    void setElecNumber(int);
    int getElecNumber();
    void setDueDate(string);
    void setPaymentDate(string);
    double getCost();
    void calCost();
    void setAllBillInfo(int,string,string);
};