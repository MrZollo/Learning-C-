#include <iostream>
using namespace std;

int main(){

    int hours, rates=100, total;

    cout<<"Enter working hours for this week ";
    cin>>hours;

    if (hours >= 40){
        total=1.2*rates*hours;
        cout<<"Total price your need to pay is RM "<<total;
    }
    else if (hours >=20 && hours <=39){
        total=1.1*rates*hours;
        cout<<"Total price your need to pay is RM "<<total;
    }
    else {
        total=1.05*rates*hours;
        cout<<"Total price your need to pay is RM "<<total;
    }

return 0;
}