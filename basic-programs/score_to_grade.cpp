#include <iostream>
using namespace std;

int main(){

    int score;

    cout<<"Enter your score: ";
    cin>>score;

    switch(score){
     case 80 ... 100:
        cout<<"You got an A";
        break;
     case 50 ... 79:
        cout<<"You got an B";
        break;
     case 0 ... 49:
        cout<<"You got an F";
        break;
     default:
        cout<<"BAD VALUE";
        break;
    }

return 0;

}