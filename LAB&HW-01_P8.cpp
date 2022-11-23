// < Syed Faheel Aziz >
// CSCI 201: Lab-01_P8
#include <iostream> 
using namespace std;

int main()
{
    int num1,num2,num3,num4;
	int total;
	float avg;
	
	cout<<"Input 1st two numbers (separated by space) : ";
	cin>>num1>>num2;
	
	cout<<"Input last two numbers (separated by space) : ";
	cin>>num3>>num4;
    
    total = num1+num2+num3+num4;
	cout<<"The total of four numbers is: "<< total <<endl;
	
	
	avg = total/4;
	cout<<"The average of four numbers is: "<< avg <<endl;

    
	return 0;
}
