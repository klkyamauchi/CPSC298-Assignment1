/* 
Problem 3 (employeepay):An employee is paid at a rate of $16.00per hour for regular 
hours worked in a week. Any hours over that are paid at the overtime rate of one and one-half 
times that. From the worker’s gross pay, 6% is withheld for Social Security tax, 14% is withheld 
for federalincome tax, 5% is withheld for state income tax, and $10 per week is withheld 
for medical insurance. 

Write a program that will read in the number of hours worked in a 
week as input and that will then output the worker’s gross pay, each withholding amount, 
and the net take-home pay for the week.
*/ 

#include <iostream>

using namespace std;

int main(int argc, char **argv) {

double payRate = 16.00;
int regularHours = 40; 
int hoursWorkedPerWeek; 
double grossPay;
double netPay;

cout << "Please enter the number of hours worked in a week." << endl;
cin >> hoursWorkedPerWeek; 

//calculate whether the employee worked overtime
if (hoursWorkedPerWeek > regularHours){
    int overtimeHours = hoursWorkedPerWeek - regularHours; 
    grossPay = (regularHours * payRate) + (overtimeHours * (payRate * 1.5)); 
} else {
    grossPay = regularHours * payRate; 
}

double socialSecurityTax = grossPay * 0.06;
double federalIncomeTax = grossPay * 0.14; 
double stateIncomeTax = grossPay * 0.05;
int medicalInsurancePayment = 10; 

cout << "Your gross pay: $" << grossPay << endl;
cout << "Social Security Tax: $" << socialSecurityTax << endl;
cout << "Federal Income Tax: $" << federalIncomeTax << endl;
cout << "State Income Tax: $" << stateIncomeTax << endl;
cout << "Medical Insurance Payment: $" << medicalInsurancePayment << endl; 

netPay = grossPay - (socialSecurityTax + federalIncomeTax + stateIncomeTax + medicalInsurancePayment); 

cout << "Your net take-home pay for the week is: $" << netPay << endl; 

return 0; 

}