# My-c-project
# 🧮 Simple Calculator in C++ 
#include <iostream>

using namespace std;

int main(){
	double num1,num2;
	char op;
	cout << "simple calculator\n";
	cout << ".................\n";
	cout << "enter first number:";
	cin >> num1;
	 
	cout << "enter operator (+,-,*,/):";
	cin >> op;
	
	cout << "enter second number:";
	cin  >> num2;
	  
	switch(op){
		case'+':
		cout << "result" << num1+num2 <<endl;
	     break;
	
		case'-':
		cout << "result"<< num1-num2 << endl;
		break;
		
		case'*':
		cout<< "result" << num1*num2 <<endl;
		break;
		
		case'/':
		if (num2 != 0)
		cout << "result" << num1/num2 <<endl;
	else
		cout << "erro: Division by zero is not allowed.\n";
	break;
	default:
	   cout << "invalied opperator !" << endl;

	}
	
	
	
	
	return 0;
}
