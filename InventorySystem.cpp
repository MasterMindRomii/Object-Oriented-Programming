#include <iostream>
using namespace std;

class Product
{
public:
    int Product_id;
    string name;
    float price;
    int quantity;

    // Method to add stock quantity
    void add_Stock(int Quantity_to_Add)
    {
        cout << "Added Quantity New Stock: " << Quantity_to_Add << endl;
        quantity += Quantity_to_Add; // Increase the quantity by the provided amount
    }

    // Method to sell a certain quantity of the product
    void Sell(int Quantity_Sold)
    {
        cout << "Sold Quantity is: " << Quantity_Sold << endl;
        if (quantity >= Quantity_Sold)
        {
            quantity -= Quantity_Sold; // Reduce the quantity by the sold amount if available
        }
        else
        {
            cout << "Insufficient quantity to sell!" << endl; // Display a message for insufficient quantity
        }
    }

    // Method to display product details
    void display()
    {
        cout << "The Product Id is: " << Product_id << endl;
        cout << "The Product Name is: " << name << endl;
        cout << "The Product Price is: Rs. " << price << endl;
        cout << "The Product Quantity is: " << quantity << endl;
    }
};

int main()
{
    Product P1;

    // Setting initial values for the product P1
    P1.Product_id = 101;
    P1.name = "Romi Gupta";
    P1.price = 876;
    P1.quantity = 56;

    P1.add_Stock(40); // Adding 40 units of stock
    P1.Sell(23);      // Selling 23 units
    P1.display();     // Displaying product details

    return 0;
}
