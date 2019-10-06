/*
Write a C++ program that takes a 3-digit number
and displays each of its digits separately 
between parentheses.
Example Input: 315
Output: (3)(1)(5)
*/
#include<iostream>
using namespace std;
int main()
{
	//1. Variable Declarations
	int num; //User input
	int units, tens, hundreds; //output
	//2.Prompt the user
	cout << "Please enter a 3-digit number: ";
	//3. Take the input
	cin >> num; 
	//4. Calculate the output
		//4.a. Claculate the units
		units = num % 10;
		//4.b.Calculate the tens
		tens = num / 10 % 10;
		//4.c. Calculate the hundreds
		hundreds = num / 100 % 10;
	//5. Display the output in the required format
	//Example Input: 315
	//Output: (hundreds)(tens)(units)
	cout << '(' << hundreds << ")(" << tens << ")(" << units << ")";
	
	
	return 0;
}
