#include <iostream>

using namespace std;

int main(){
	int unit;
	float bill =0;
	int categery,surcharge;
	cout << "Enter the unit";
	cin>>unit;
	
	if (unit<=50){
		categary = 1;
	}
	else if (unit<=150){
		categery = 2;
	}
	else if(unit <=250){
		categery = 3;
	}
	else if (unit>250){
		categery = 4;
	}
	
	
	switch(categery){
		case 1:
		bill = unit *0.50
		break;
		
		case 2:
		bill =(50*0.50)+ (unit-50) * 0.75;
		break;
		
		case 3:
		bill = (50*0.50)+(100*0.75)+(unit-150) * 1.20;
		break;
		
		case 4:(50*0.50) +(100*0.75)+(100*1.20)+ (unit-250) *1.50;
		break;
		
		default :
		cout << "Invalid";
	}
	surcharge = bill *0.20;
	tatal =bill+surcharge;
	
	cout <<"-----Electrasity bill-----------";
	cout<< "Base bill amount : Rs."<<bill<<endl;
	cout <<"Surchage amount (20%) = Rs. "<<surchage<<endl;
	cout <<"Total amount : Rs."<<total<<endl;
	return 0;
}