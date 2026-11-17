#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

struct Product
{
    string name;
    int quantity;
    float price;
};

int main()
{
    vector<Product> inventory;
    list<string> restocking;

    int n;

    cout << "Enter number of products: ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        Product p;

        cout << "Enter product name: ";
        cin >> ws;
        getline(cin, p.name);

        cout << "Enter quantity: ";
        cin >> p.quantity;

        cout << "Enter price: ";
        cin >> p.price;

        inventory.push_back(p);

        if (p.quantity <= 5)
        {
            restocking.push_back(p.name);
        }
    }

    cout << "\n--- Complete Inventory ---\n";

    for (int i = 0; i < inventory.size(); i++)
    {
        cout << "Product: " << inventory[i].name << endl;
        cout << "Quantity: " << inventory[i].quantity << endl;
        cout << "Price Rs: " << inventory[i].price << endl;
    }

    cout << "\n--- Products Requiring Restocking ---\n";

    if (restocking.empty())
    {
        cout << "No products require restocking.\n";
    }
    else
    {
        for (list<string>::iterator it = restocking.begin();
             it != restocking.end(); it++)
        {
            cout << *it << endl;
        }
    }

    return 0;
}
