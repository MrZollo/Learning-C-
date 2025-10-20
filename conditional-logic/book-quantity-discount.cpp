#include <iostream>
using namespace std;

int main()
{
    int qty,price;
    cout<<" Enter Quantities of Book ";
    cin>>qty;

    cout<< " Enter Price of Book ";
    cin>>price;

    if (qty>=10)
    {
        cout<<" Nett Price "<<price*0.80;
    }
    else if (qty<=9 & qty>=5)
    {
        cout<<" Nett Price "<<price*0.9;
    }
    else if (qty>=2 & qty<5)
    {
        cout<<" Nett Price "<<price*0.95;
    }
     else if (qty == 1)
    {
        cout<<" No Discount ";
    }
    else
    {
        cout<<" Wrong Book Quantity ";
    }

    return 0;
}