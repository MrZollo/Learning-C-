#include <iostream>
using namespace std;

int main() {

    int sum=0, item=0;

while (item<5) {
    item++;

if(item==2) 
continue;

sum+=item; }

cout<<"The sum is "<<sum;

return 0;

}