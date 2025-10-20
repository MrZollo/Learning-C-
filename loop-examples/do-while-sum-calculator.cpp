#include <iostream>
using namespace std;

int main()

{
    int x=1,sum,num;
    
    do
    
    {
    cout <<"pls ent num"<<x <<endl;
    cin>>num;
    x++;
    sum = num + sum;
    } 
    
    while (x<4);
    
    cout<<"sum is :"<<sum;
    
    return 0;

}
