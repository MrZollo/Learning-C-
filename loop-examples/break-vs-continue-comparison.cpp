#include <iostream>
using namespace std;
int main()
{
    cout<<"The loop with 'break' produces output as : \n";
    for (int i=1; i<=10; i++)
    {
    if((i % 3) == 0)
        break;
    else
        cout<<i<<endl;
    }
    cout<<"The loop with 'continue' produces output as : \n";
    for (int i=1; i<=10; i++)
    {
        if((i%3) == 0)
            continue;
        else
            cout<<i<<endl;
    }
    return 0;
}