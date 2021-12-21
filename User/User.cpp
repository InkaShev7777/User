#include <iostream>
#include<string>
#include "c_User.h";
#include"c_Users.h";
using namespace std;
int main()
{
	string name;
	string surname;
	int age;
	cout << "Vvedite name: ";
	cin >> name;
	cout << "Vvedite Surname: ";
	cin >> surname;
	cout << "Vvedite age: ";
	cin >> age;
	c_User* user = new c_User(name, surname, age);
	//cout << user();
	c_Users users;
	users.Add(*user);
	users.Save();


}

