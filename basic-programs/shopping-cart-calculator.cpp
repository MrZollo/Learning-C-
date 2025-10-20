#include <iostream>
using namespace std;

int main() {

	int numOfItems;
	float x=0, item_price, item_quantity, total, totalPrice;
	string item_code, item_name;

	cout<<"Please enter number of items :";
	cin>>numOfItems;
	
	do{
        cout<<"\nITEM "<<x+1<<endl;
		cout<<"Item Code          :";
		cin>>item_code;

		cin.ignore();
		cout<<"Item Name          :";
		getline(cin,item_name);
		
		cout<<"Item Price         :RM";
		cin>>item_price;

		cout<<"Item Quantity      :";
		cin>>item_quantity;
		
		total=item_price*item_quantity;
		cout<<"Total    :RM"<<total<<endl;
	
		++x;

        totalPrice+=total;
	} while (x<numOfItems);
	
	cout<<"Total Price           :RM"<<totalPrice      ;
	
	return 0;
} 