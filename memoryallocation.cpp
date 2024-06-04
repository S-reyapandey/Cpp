#include <iostream>
using namespace std;

class Shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void) { counter = 0; }
    void setPrice(void);
    void displayprice(void);
};
void Shop ::setPrice(void)
{
    cout << "Enter Id of your item no" << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop ::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id " << itemId[i] << "=" << itemPrice[i] << endl;
    }
}
int main()
{

    Shop dukaan;
    dukaan.initCounter();
    dukaan.setPrice();
    dukaan.setPrice();
    // dukaan.setPrice();
    dukaan.displayprice();
    return 0;
}