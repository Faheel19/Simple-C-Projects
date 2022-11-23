// < Syed Faheel Aziz >
// CSCI 201: Lab-01_P2
#include <cstdlib>
#include <iostream> //Comment out the statement
#include <iomanip>
using namespace std;
const double PI = 3.14159265;
int main ()
{
double radius, volume; //Remove the semicolon at the end of the statement // Mis-spell volume in the declaration as “volme”
cout << "Enter the radius of a sphere: "; //Remove the semicolon at the end of the statement
cin >> radius;
volume = 4.0/3.0 * PI * radius * radius * radius;
cout << "The spheres volume is: " << volume << endl;
return 0;
}
