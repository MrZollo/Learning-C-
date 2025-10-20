#include <iostream>
using namespace std;

int main(){

    char grade;

    cout<<"**************************************************\n";
    cout<<"\tEnter your grade, A, B, C, D, F : "; cin>>grade;
    cout<<"\n**************************************************\n";
   

    switch (grade){

     case 'a':
     case 'A':
        cout<<"\tYou get grade "<<grade<<" Congratulation";
        break;
     case 'b':
     case 'B':
        cout<<"\tYou get grade "<<grade<<" Good";
        break;
     case 'c': 
     case 'C':
        cout<<"\tYou get grade "<<grade<<" Need more exercise";
        break;
     case 'd':
     case 'D':
        cout<<"\tYou get grade "<<grade<<" Need improvment";
        break;
     case 'f':
     case 'F':
        cout<<"\tYou get grade "<<grade<<" Try again";
        break;
     default:
        cout<<"\nIncorrect letter grade entered.\n";
        cout<<"Please enter a new grade: "; 
        goto again;
        break;  

    again:
     cout<<"\nEnter your grade, A, B, C, D, F : ";
     cin>>grade;

     switch (grade){

     case 'a':
     case 'A':
        cout<<"\n\tYou get grade "<<grade<<" Congratulation"<<endl;
        break;
     case 'b':
     case 'B':
        cout<<"\n\tYou get grade "<<grade<<" Good";
        break;
     case 'c': 
     case 'C':
        cout<<"\n\tYou get grade "<<grade<<" Need more exercise"<<endl;
        break;
     case 'd':
     case 'D':
        cout<<"\n\tYou get grade "<<grade<<" Need improvment"<<endl;
        break;
     case 'f':
     case 'F':
        cout<<"\n\tYou get grade "<<grade<<" Try again"<<endl;
        break;
     default:
        cout<<"\nIncorrect letter grade entered.\n";
        cout<<"Please enter a new grade: "<<endl; 
        goto again;
        break;}  

    return 0;
    }
}