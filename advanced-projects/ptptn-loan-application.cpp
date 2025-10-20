#include <iostream>
using namespace std;

int main(){
    // variables declare
    int institut, levelz, loanType;
    char YesNo;
    string institusi, institusi1="Universiti Awam, Politeknik & Kolej Komuniti",institusi2="IPTS",
    dipint="Integrasi/Diploma",dipdip="Diploma",
    ijazah="Ijazah Sarjana Muda (Sains)", jenisloan, levelp, loanAmount;

do{
cout << "\n**************************************************\n";
cout << "\t       PTPTN LOAN APPLICATION\n";
cout << "**************************************************\n";

do{
YesNo = 'n';
cout<<"1. Universiti Awam, Politeknik & Kolej Komuniti\n";
cout<<"2. IPTS\n";
cout<<"Select your Institution : ";
cin>>institut;

switch (institut){
    case -2147483648 ... 0:
    case 3 ... 2147483647:
        cout<<"\nInvalid number, Please select 1 or 2 only\n";
        cout<<"Do you want to continue (Y/N) ? : ";
        cin>>YesNo;
        break;

    default:
        YesNo = 'n' || YesNo == 'N';
        continue; // Exit the loop and end the program
}
}while (YesNo == 'y' || YesNo == 'Y');

do{
switch (institut){
    case 1 :
        YesNo = 'n' || YesNo == 'N';
        cout<<"\n1. Integrasi/Diploma\n";
        cout<<"2. Ijazah Sarjana Muda (Sains)\n";
        cout<<"Select your Level : ";
        cin>>levelz;
        if (levelz > 2)
        {
            cout<<"\nInvalid number, Please select 1 or 2 only\n";
            cout<<"Do you want to continue (Y/N) ? : ";
            cin>>YesNo;
        }
        break;

    case 2 :
        YesNo = 'n' || YesNo == 'N';
        cout<<"\n1. Diploma\n";
        cout<<"2. Ijazah Sarjana Muda (Sains)\n";
        cout<<"Select your Level : ";
        cin>>levelz;
        if (levelz >2)
        {
            cout<<"\nInvalid number, Please select 1 or 2 only\n";
            cout<<"Do you want to continue (Y/N) ? : ";
            cin>>YesNo;
        }
        break;
        
    default:
        YesNo = 'n' || YesNo == 'N';
        cout<<"\nInvalid number, Please select 1 or 2 only\n";
        cout<<"Do you want to continue (Y/N) ? : ";
        cin>>YesNo;
        continue; // Exit the loop and end the program
        }

}while (YesNo == 'y' || YesNo == 'Y');

do{
YesNo = 'n' || YesNo == 'N';
cout<<"\n1. Maximum\n";
cout<<"2. 75%\n";
cout<<"3. 50%\n";
cout<<"Choose type of loan: ";
cin>>loanType;

if (institut == 1) { // Loan type & loan amount operations
        switch (levelz) {
            case 1:
                institusi=institusi1;
                levelp=dipint;
                if (loanType == 1) {
                    jenisloan="Maximum";
                    loanAmount = "4,750";
                } else if (loanType == 2) {
                    jenisloan="75%";
                    loanAmount = "3,560";
                } else if (loanType == 3) {
                    jenisloan="50%";
                    loanAmount = "2,380";
                } else {
                    cout<<"\nInvalid number, Please select 1 to 3 only\n";
                    cout<<"Do you want to continue (Y/N) ? : ";
                    cin>>YesNo;
                }
                continue; // Exit the loop and end the program
            case 2:
                institusi=institusi1;
                levelp=ijazah;
                if (loanType == 1) {
                    jenisloan="Maximum";
                    loanAmount = "6,650";
                } else if (loanType == 2) {
                    jenisloan="75%";
                    loanAmount = "4,990";
                } else if (loanType == 3) {
                    jenisloan="50%";
                    loanAmount = "3,330";
                } else {
                    cout<<"\nInvalid number, Please select 1 to 3 only\n";
                    cout<<"Do you want to continue (Y/N) ? : ";
                    cin>>YesNo;
                }
                continue; // Exit the loop and end the program
        }
    }
else if (institut == 2) {
        switch (levelz) {
            case 1:
                institusi=institusi2;
                levelp=dipdip;
                if (loanType == 1) {
                    jenisloan="Maximum";
                    loanAmount = "6,800";
                } else if (loanType == 2) {
                    jenisloan="75%";
                    loanAmount = "5,100";
                } else if (loanType == 3) {
                    jenisloan="50%";
                    loanAmount = "3,400";
                } else {
                    cout<<"\nInvalid number, Please select 1 to 3 only\n";
                    cout<<"Do you want to continue (Y/N) ? : ";
                    cin>>YesNo;
                }
                continue; // Exit the loop and end the program
            case 2:
                institusi=institusi2;
                levelp=ijazah;
                if (loanType == 1) {
                    jenisloan="Maximum";
                    loanAmount = "14,030";
                } else if (loanType == 2) {
                    jenisloan="75%";
                    loanAmount = "10,520";
                } else if (loanType == 3) {
                    jenisloan="50%";
                    loanAmount = "7,010";
                } else {
                    cout<<"\nInvalid number, Please select 1 to 3 only\n";
                    cout<<"Do you want to continue (Y/N) ? : ";
                    cin>>YesNo;
                }
                continue; // Exit the loop and end the program
        }
    }

} while (YesNo == 'y' || YesNo == 'Y');

// Display Output
cout<<"\n**************************************************\n";
cout<<"Institutions    : "<<institusi<<endl;
cout<<"Education Level : "<<levelp<<endl;
cout<<"Type of Loan    : "<<jenisloan<<endl;
cout<<"Loan Amount     : RM "<<loanAmount;
cout<<"\n**************************************************\n";

// Display End of Program
cout<<"End of Program, Do you want to continue (Y/N) ? ";
cin>>YesNo; // Exit the loop and end the program

} while (YesNo == 'y' || YesNo == 'Y');
return 0;
} 





















































































































//This code write by Zulhairy Yussof, COPYRIGHTED