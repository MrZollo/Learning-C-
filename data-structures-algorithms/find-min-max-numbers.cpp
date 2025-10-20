#include <iostream>
using namespace std;

int main(){

    int x=0, compare, numbers, min=INT_MAX, max=INT_MIN;
    cout<<"Please enter number to compare : ";
    cin>>compare;

    cout<<"\nPlease enter "<<compare<<" number(s)s."<<endl;

for (int x=0; x<compare; ++x) {
    cout<<"Number "<<x+1<<" : ";
    cin>>numbers;

    if (numbers < min) {
            min = numbers;
        }
    if (numbers > max) {
            max = numbers;
        }
 }

    cout<<"Maximum Number is "<<max<<endl; 
    cout<<"Minimum Number is "<<min; 

return 0;
}