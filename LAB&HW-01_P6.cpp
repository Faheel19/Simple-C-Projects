// < Syed Faheel Aziz >
// CSCI 201: Lab-01_P6
#include <iostream> 
using namespace std;

int main()
{
    int a, b, temp;
	
	cout<<"Input 1st number: ";
	cin>>a;
	
	cout<<"Input 2st number: ";
	cin>>b;
    
	cout << "Before swapping" << endl;
    cout << "a = " << a << ", b = " << b << endl;

    temp = a;
    a = b;
    b = temp;

    cout<<"After swapping the 1st number is: " << a <<endl;
	cout<<"After swapping the 2st number is: " << b <<endl;
    
	return 0;
}


