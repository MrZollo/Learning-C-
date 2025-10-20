#include <iostream>
using namespace std;

int main(){

    float purchase, price=11.00, total;
    cout<<"Enter quantities of magazine ";
    cin>>purchase;

    if (purchase >= 10){
        total=purchase*(0.9*price);
        cout<<"Total price your need to pay is RM "<<total;
    }
    else if (purchase >=7 && purchase < 10){
        total=purchase*(0.95*price);
        cout<<"Total price your need to pay is RM "<<total;
    }
    else {
        total=purchase*price;
        cout<<"Total price your need to pay is RM "<<total;
    }

return 0;

}