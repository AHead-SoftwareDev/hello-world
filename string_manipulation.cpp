/*-----------------------------------------------------------------------
Date:  2019 Mar 08 
Author:  AHead 
 
Course: Pluralsight "Learn How to Progam with C++" by Kate Gregory
 
Exercise: String Manipulation 
 
Problem Description: Write a program that asks the user for two strings 
and tells them which is longer. 
 
------------------------------------------------------------------------*/
#include<iostream>
#include<string>

using namespace std;

int main(int argc, char *argv[]) {

	cout << "This program will ask you for two strings and then tell you "
		<< "which one is longer." << endl;

	string string1, string2;
	char y_n = 'n';
	bool first_run = true;

	do {
		//cin stores a line feed after execution.  ignore() removes the
		//line feed. This occurs after the program is first run.
		if (first_run) { first_run = false; } else { cin.ignore(); }
		cout << "Please enter your first string: ";
		getline(cin, string1);

		cout << "Please enter your second string: ";
		getline(cin, string2);

		cout << "\nThe strings you entered are: \"" << string1 
			<< "\" and \"" << string2 << "\"\n"; 

		int string1_length = string1.length();
		int string2_length = string2.length();

		cout << "\nThe length of \"" << string1 << "\" is: " 
			<< string1_length;
		cout << "\nThe length of \"" << string2 << "\" is: " 
			<< string2_length;

		cout << "\n\nMy dear Watson, I deduce that the string \"";
		if (string1_length > string2_length) {
			cout << string1 << "\" is longer than the string \"" << string2 
				<< "\".\n";
		} else if (string1_length < string2_length) {
			cout << string2 << "\" is longer than the string \"" << string1 
				<< "\".\n";
		} else if (string1_length == string2_length) {
			cout << string1 << "\" is the same length as the string \"" 
				<< string2 << "\".\n";
		}

		cout << "Yours truly, Sherlock Holmes\n";

		cout << "\nCompare another two strings (y or n)? ";
		cin >> y_n;

	} while (y_n == 'y');
}

