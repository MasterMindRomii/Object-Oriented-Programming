#include <iostream>
using namespace std;

class OnlineShoppingCart
{
public:
    string Itemname;
    float Price;
    int Quantity;

    void addItemToCart(string name, float price, int quantity)
    {
        Itemname = name;
        Price = price;
        Quantity = quantity;
    }

    void displayCartItems()
    {
        cout << "Item name is " << Itemname << " and Price Rs." << Price << " and Quantity is " << Quantity << endl;
    }
};

int main()
{
    OnlineShoppingCart Shopping[3];

    Shopping[0].addItemToCart("Soap", 89, 4);
    Shopping[1].addItemToCart("Biscuits", 100, 6);
    Shopping[2].addItemToCart("Apple", 800, 8);

    for (int i = 0; i < 3; i++)
    {
        Shopping[i].displayCartItems();
    }

    return 0;
}