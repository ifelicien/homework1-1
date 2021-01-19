// this program will take in two user input and display the int division, float division, and modulo of the numbers.

#include <iostream>
using namespace std;

int main() {
	int inputOne, inputTwo;

	cout << "please enter first number: ";
	cin >> inputOne; 

	cout << "Please enter second number: ";
	cin >> inputTwo;

	cout << "\n\n" << inputOne << "/" << inputTwo << " using integer division is: " << inputOne / inputTwo << endl;
	cout << inputOne << "/" << inputTwo << " using floating point division is: " << (double)inputOne / (double)inputTwo << endl;
	cout << inputOne << "%" << inputTwo << " using integer division is: " << inputOne % inputTwo << endl;

	return 0;
}