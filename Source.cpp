/* Devun Schneider
   CS140
   HW1
   Write a program that reads two 
   integers and determines and prints if the first 
   is a multiple of the second.
*/ 

#include <iostream>

using namespace std;

int main()
{
	int num1, num2;

	cout << "Enter two integers: ";
	cin >> num1 >> num2;

	if (num1 % num2 == 0)
		cout << num1 << " is a multiple of " << num2 << endl;

	if (num1 % num2 != 0)
		cout << num1 << " is not a multiple of " << num2 << endl;

	return 0;
}