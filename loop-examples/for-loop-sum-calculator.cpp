#include <iostream>
using namespace std;

int main()
{
    int x=1,sum,num;
        sum = 0;
        for (int x=1;x<4;x++)
    {
        cout <<"pls ent num"<<x <<endl;
        cin>>num;
        sum = num + sum;
    }
    
    cout<<"sum is :"<<sum <<endl;
    
    return 0;

}
