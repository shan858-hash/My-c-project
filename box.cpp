#include <iostream>

using namespace std;
int main(){
	double height, width,depth, volume; 

	cout << " Enter the Height : ";
	cin >> height;
	
	cout << " Enter the Width : ";
	cin >> width;
	
	cout << " Enter the Depth : ";
	cin >> depth;
	
	volume = height*depth*width;
	cout << "The volume is " << volume << endl;

	return 0;
}