// Person Info Struct with arrays.cpp : Defines the entry point for the console application.
//

// Person info.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

struct Person {
	char name[100];
	int age;
	long long salary;
};

int main()
{
	Person n[5];
	for (int i = 0; i < 2; i++) {
		cout << "Person details  " << (i + 1);
		cout << endl << "Your name is ";
		cin >> n[i].name, 100;
		cout << endl << "Your age is ";
		cin >> n[i].age;
		cout << endl << "Your salary is ";
		cin >> n[i].salary;
	}
	cout << endl << "Your details are below\n";
	for (int i = 0; i < 2; i++) {
		cout << "Person details " << (i + 1) << endl;

		cout << "Your name is " << n[i].name;
		cout << endl;
		cout << "Your age is " << n[i].age;
		cout << endl;
		cout << "Your salary is " << n[i].salary;
		cout << endl;
	}
	return 0;
}


