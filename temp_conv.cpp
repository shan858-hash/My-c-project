#include <iostream>

using namespace std;

int main(){
	
	double temp;
	char unit;
	
	cout << "******Temperature Conversion*********\n";
	cout << "F - Fahrenheit\n";
	cout << "C - Celcius\n";
	cout << "What unit would you like to convet to : ";
	cin >> unit;
	
	if(unit == 'F' || unit == 'f'){
		cout << "Enter the temperatur in celcius: ";
		cin >> temp;
		
		temp = (1.8 * temp)+32.0;
		cout << "temperature is :" << temp << "F\n";
	}
	
	else if(unit == 'C' || unit == 'c'){
		cout << "Enter the temperature in fahrenheit: ";
	   cin >> temp;
	   
	   temp = (temp - 32.0)/1.8;
	   cout << "Temperature is :" << temp << "C\n";
	}
	
	else {
		cout << "Please enter in only C or F \n";
	}
	
	cout << ".........................................................";
	return 0;
}