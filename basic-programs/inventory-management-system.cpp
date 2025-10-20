#include <iostream>
#include <iomanip>
using namespace std;

int main(){ 

    int numOfitems;
    float x=0, itemprice, itemqua, total, sum, totalprice;
    string itemname, itemcode;

cout<<"Please enter number of items : ";
cin>>numOfitems;

    
while (x<numOfitems) {
    cout<<"\n\nITEM "<<x+1<< endl;
    cout<<"Item Code "<<setw(8)<<": ";
    cin>>itemcode;

    cin.ignore();
    cout<<"Item Name "<<setw(8)<<": ";
    getline(cin,itemname);

    cout<<"Item Price "<<setw(9)<<": RM";
    cin>>itemprice;

    cout<<"Item Quantity "<<setw(4)<<": ";
    cin>>itemqua;

    total=itemqua*itemprice;
    cout<<"Total"<<setw(11)<<": RM"<<total<<endl;

    ++x;

    totalprice += total;
    }

    cout<<"\nTotal Price"<<setw(13)<<": RM"<<totalprice;

return 0;

}  