class ElecBill
{
private:
    int elecNumber;
    double cost;

public:
    ElecBill();
    void setElecNumber(int);
    int getElecNumber();
    double getCost();
    void calCost(int);
};