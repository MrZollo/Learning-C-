#include <iostream>
using namespace std;

string StaffName, StaffID, StaffGender;
float CalculateBonus(float&, float&);
void StafData(string&a, string&b, string&c);
void DisplayBonus(float, float);
void BannerBonus();
void BannerSumSalary();

int main(){

    float TotalSales, Bonus, BasicSalary;
    BannerBonus();

    StafData(StaffName, StaffID, StaffGender);
    Bonus=CalculateBonus(TotalSales, BasicSalary);
    BannerSumSalary();

    DisplayBonus(Bonus, BasicSalary);
    return 0;
}

void StafData(string&a, string&b, string&c){
    cout<<"Enter Staff Name                : ";
    getline(cin>>ws, StaffName);
    cout<<"Enter Staff ID                  : ";
    getline(cin>>ws, StaffID);
    cout<<"Enter Staff Gender (Male/Female): ";
    getline(cin>>ws, StaffGender);
}

float CalculateBonus(float &a, float &b){
    float BasicSalary, Bonus;
    cout<<"Enter Your Basic Salary         : ";
    cin>>b;
    cout<<"Enter Your Total Sales          : ";
    cin>>a;

    if(a>=1000 && a<=2000)
        Bonus=a*0.05;
    else if(a>=2001 && a<=3000)
        Bonus=a*0.07;
    else if(a>3000)
        Bonus=a*0.10;
    else
        Bonus=0;
    return Bonus;
}

void DisplayBonus(float a, float b){
    cout<<"Staff Name                       : "<<StaffName<<endl;
    cout<<"Staff ID                         : "<<StaffID<<endl;
    cout<<"Gender                           : "<<StaffGender<<endl;
    cout<<"Basic Salary                     : RM"<<b<<endl;
    cout<<"Bonus                            : RM"<<a<<endl;
    cout<<"Total Salary This Month          : RM"<<a+b<<endl;
}

void BannerBonus(){
    cout<<"\t----------------------------------------\n";
    cout<<"\tYEAR END BONUS FOR CELCOMEDIGI EMPLOYEES\n";
    cout<<"\t-----------------------------------------\n\n";
}

void BannerSumSalary(){
    cout<<"\n\t----------------------------------------\n";
    cout<<"\tYOUR TOTAL SALARY THIS MONTH, THANK YOU\n";
    cout<<"\t-----------------------------------------\n\n";
}
