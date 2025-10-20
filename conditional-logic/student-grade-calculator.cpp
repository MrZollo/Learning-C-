#include <iostream>
using namespace std;

int main(){

    int score;

    cout<<"\nEnter your score: ";
    cin>>score;

    if (score>=80)
        cout<<"You got an A";
    else if (score<79 && score >=50)
        cout<<"You got an B";
    else if (score <49 && score >=0)
        cout<<"You got an F";
    else
        cout<<"BAD VALUE";

    return 0;
}

