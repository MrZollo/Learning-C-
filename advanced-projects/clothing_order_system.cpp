#include <iostream>
using namespace std;

struct Order {
    string typeCloth;
    int quantity;
    float totalPrice;
};

void displayMenu();
float calcuPrice(int quantity, string codeType);
void displayOrder(const string & typeCloth, int quantity, float totalPrice);

void displayMenu(){

	cout<<"----------Types of Clothing to Booking----------"<<endl;
	cout<<"Types of Cloth"<<"         "<<"Price"<<"          "<<"Code Cloth"<<endl;
	cout<<"--------------"<<"         "<<"-----"<<"          "<<"----------"<<endl;
	cout<<"Baju Kurung Pesak"<<"     "<<"RM60.00"<<"         "<<"BKP"<<endl;
	cout<<"Baju Kurung Moden"<<"     "<<"RM80.00"<<"         "<<"BKM"<<endl;
	cout<<"Blouse"<<"                "<<"RM45.00"<<"         "<<"B"<<endl;
	cout<<"Long sleeve shirt"<<"     "<<"RM55.00"<<"         "<<"LSS"<<endl;
	cout<<"Short sleeve shirt"<<"    "<<"RM45.00"<<"         "<<"SSS"<<endl;
	cout<<"Pants"<<"                 "<<"RM60.00"<<"         "<<"P"<<endl;
	cout<<"Coat"<<"                  "<<"RM70.00"<<"         "<<"C"<<endl;
}

float calcuPrice(string codeType, int quantity){

	    float price;
		if (codeType == "BKP"){
			price = 60.00;
		}
		
		else if (codeType == "BKM"){
			price = 80.00;
		}
		
		else if (codeType == "B"){
			price = 45.00;
		}
		
		else if (codeType == "LSS"){
			price = 55.00;
		}
		
		else if (codeType == "SSS"){
			price = 45.00;
		}
		
		else if (codeType == "P"){
			price = 60.00;
		}
		
		else if (codeType == "C"){
			price = 70.00;
		}
		return quantity * price;
}

void displayOrder (const string & typeCloth, int quantity, float totalPrice){

    cout<<"Types of cloth Booking : "<<typeCloth;
    cout<<"Quantity : "<<quantity;
    cout<<"Price : RM"<<totalPrice;
}

int main(){

	string name, phoneNumber, typeCloth, codeType;
	int quantity, loopOrder = 0;
	float price, totalPrice, totalOrder = 0;
	char c;
	
	displayMenu();
	
	cout<<"\nEnter customer name : ";
	getline(cin,name);
	cout<<"Enter phone number : ";
	cin>>phoneNumber;
	
	const int maxOrder = 10;
	Order orders[maxOrder];
	
	do{
	    loopOrder++;
	    
		cout<<"Enter code of cloth to booking : ";
		cin>>codeType;
		cout<<"Enter Quantity : ";
		cin>>quantity;	
		
		if (codeType == "BKP"){
			typeCloth = "Baju Kurung Pesak";
		}
		
		else if (codeType == "BKM"){
			typeCloth = "Baju kurung Moden";
		}
		
		else if (codeType == "B"){
			typeCloth = "Blouse";
		}
		
		else if (codeType == "LSS"){
			typeCloth = "Long sleeve shirt";
		}
		
		else if (codeType == "SSS"){
			typeCloth = "Short sleeve Short";
		}
		
		else if (codeType == "P"){
			typeCloth = "Pants";
		}
		
		else if (codeType == "C"){
			typeCloth = "Coat";
		}
		
		else {
			cout << "Invalid types of cloth"<<endl;
		}
		
		 totalPrice = calcuPrice(codeType, quantity);
		 orders [loopOrder - 1].typeCloth = typeCloth;
		 orders [loopOrder - 1].quantity = quantity;
		 orders [loopOrder - 1].totalPrice = totalPrice;
		 
	cout<<"-------------- Order  Information --------------"<<endl;
	cout<<"Types of Cloth Booking : "<<typeCloth<<endl;
	cout<<"Quantity : "<<quantity<<endl;
	cout<<"Price : RM"<<totalPrice<<endl;
	cout<<"------------------------------------------------"<<endl;
	cout<<"Do you want to add booking ? (Y/N)";
	cin>>c;
	    
	totalOrder = totalOrder + totalPrice;
	
	}while (c == 'Y' || c == 'y');
	    
	cout<<"---------------- Summary  Order ----------------"<<endl;
    cout<<"Name : "<<name<<endl;
    cout<<"Phone Number : "<<phoneNumber<<endl;
    cout<<"Types of Cloth Order : "<<loopOrder<<endl;

    for (int i=0; i<loopOrder; i++){

        cout<<"Order list "<<(i+1)<<" : "<<orders[i].typeCloth<<endl;
    }
    cout<<"Total Price Order : RM"<<totalOrder<<endl;

return 0;

}