#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

struct Studnt {
    string idNum, name, gender, program, departm, sponsor;
    float gpa, cgpa;
}; // Declarations are statements

int main(){
    Studnt student[5];
    cout<<fixed<<setprecision(2);

    for(int i=3; i<5; ++i){
        cout<<"-------------------------------";
        cout<<"\nEnter The Student Details Below "<<endl;
        cout<<"-------------------------------";
        cout<<"\nStudent Record : "<<i+1<<endl;
        cout<<"Student ID Number : ";
        cin>>student[i].idNum;

        cout<<"Student Name : ";
        cin.ignore();
        getline(cin, student[i].name);  // Read line

        cout<<"Student Gender : ";
        cin>>student[i].gender;

        cout<<"Student Programme : ";
        cin>>student[i].program;

        cout<<"Student Department : ";
        cin>>student[i].departm;

        cout<<"Student Sponsorship : ";
        cin>>student[i].sponsor;

        cout<<"Student GPA : ";
        cin>>student[i].gpa;

        cout<<"Student CGPA : ";
        cin>>student[i].cgpa;
        
        cout<<"-------------------------------"<<endl;
        cout<<"------Student Information------"<<endl;
        cout<<" ID Number"<<setw(7)<<": "<<student[i].idNum<<endl;
        cout<<" Name"<<setw(12)<<": "<<student[i].name<<endl;
        cout<<" Gender"<<setw(10)<<": "<<student[i].gender<<endl;
        cout<<" Programme"<<setw(7)<<": "<<student[i].program<<endl;
        cout<<" Department"<<setw(6)<<": "<<student[i].departm<<endl;
        cout<<" Sponsorship"<<setw(5)<<": "<<student[i].sponsor<<endl;
        cout<<" GPA"<<setw(13)<<": "<<student[i].gpa<<endl;
        cout<<" CGPA"<<setw(12)<<": "<<student[i].cgpa<<endl;
    }
    return 0;
}

