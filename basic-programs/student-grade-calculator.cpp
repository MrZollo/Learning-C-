#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    //declare variables
    string name,regNumber,clas;
    float quiz1,quiz2,quiz3,quiz4,test,sum;
    double avg;


    cout<<"**************************************************\n";
    cout<<"\tDFC20113 - Programming Fundamentals\n";
    cout<<"**************************************************\n";
    
    //input entered from user
    cout<<"Name : ";
    getline(cin,name);
    cout<<"Registration Number : ";
    cin>>regNumber;
    cout<<"Class : ";
    cin>>clas;
    cout<<"\nEnter marks for each assesment : \n";
    cout<<"Quiz 1 : ";
    cin>>quiz1;
    cout<<"Quiz 2 : ";
    cin>>quiz2;
    cout<<"Quiz 3 : ";
    cin>>quiz3;
    cout<<"Quiz 4 : ";
    cin>>quiz4;
    cout<<"Theory Test : ";
    cin>>test;
    
    //calculate total marks and average marks
    sum=quiz1+quiz2+quiz3+quiz4+test;
    avg=sum/5;
    
    //display output
    cout<<"\n**************************************************";
    cout<<"\nName"<<setw(18)<<": "<<name<<endl;
    cout<<"Registration Number : "<<regNumber<<endl;
    cout<<"Class"<<setw(17)<<": "<<clas<<endl;
    cout<<"Total marks"<<setw(11)<<": "<<fixed<<setprecision(1)<<sum<<endl;
    cout<<"Average marks"<<setw(9)<<": "<<fixed<<setprecision(2)<<avg<<endl;
    cout<<"**************************************************\n";
    
    return 0;
}
