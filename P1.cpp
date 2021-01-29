
/* Problem #1 (Cereal): A metric ton is 35,273.92 ounces. Write a program that will read 
the weight(console input)of a package of breakfast cereal in ounces and 
output the weight in metric tons as well as the number of boxes needed 
to yield one metric ton of cereal.
*/ 

#include <iostream>

using namespace std;

int main(int argc, char **argv) {

double metricTon = 35,273.92; 
double weightInOunces; 
double weightInTons; 
int numBoxes; 

//prompt user for weight
cout << "Enter the weight of a package of breakfast cereal (in ounces)." << endl; 
cin >> weightInOunces; 

//calculate weight in tons
weightInTons = weightInOunces / metricTon; 
cout << "The weight of your cereal is " << weightInTons << " metric tons." << endl;

//calculate number of boxes needed to yield one ton of cereal
numBoxes = metricTon / weightInOunces; 
cout << "The number of boxes needed to yield one ton of cereal is: " << numBoxes << " boxes." << endl;

return 0;

}