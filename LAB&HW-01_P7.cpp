// < Syed Faheel Aziz >
// CSCI 201: Lab-01_P7
#include <iostream> 
using namespace std;

int main()
{
    int l,w;
	int area ;
	int p ;
	
	cout<<"Input length of the rectangle: ";
	cin>>l;
	
	cout<<"Input width of the rectangle: ";
	cin>>w;
    
    area = l * w;
	cout<<"The Area of the Rectangle is: "<< area <<endl;
	
	
	p = 2 * ( l + w );
	cout<<"The Perimeter of the Rectangle is: "<< p <<endl;

    
	return 0;
}

