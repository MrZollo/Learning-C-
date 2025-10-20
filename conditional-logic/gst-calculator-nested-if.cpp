#include <iostream>
using namespace std;

int main(){

    int price;
    float gst;

    cout<<"\nEnter a price RM: ";
    cin>>price;
    cout<<"Enter GST amount: ";
    cin>>gst;

    if (price>=90)
        cout<<"My price is RM: "<<price + 0.2 * gst;
    else if (price < 90 && price >= 80)
        cout<<"My price is RM: "<<price + 0.15 * gst;
    else if (price < 80 && price >= 70)
        cout<<"My price is RM: "<<price + 0.1 * gst;
    else if (price < 70 && price >= 60)
        cout<<"My price is RM: "<<price + 0.08 * gst;
    else if (price < 60 && price >= 50)
        cout<<"My price is RM: "<<price + 0.01 * gst;
    else
        cout<<"Wrong Input";

    return 0;
}

