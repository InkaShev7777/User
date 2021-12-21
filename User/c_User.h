#pragma once
#include <iostream>
#include<string>
class c_User
{
	long id;
	std::string name;
	std::string surname;
	int age;
public:
	int getAge();
	std::string getName();
	std::string getSurNmae();
	long getId();
	void setName(std::string name);
	void setSurName(std::string surname);
	void setAge(int age);
	c_User();
	c_User(std::string name, std::string surname, int age);
	friend std::ostream& operator <<(std::ostream& out, const c_User& user)
	{
		out << "Name: " << user.name << "\tSurname: " << user.surname << "\tAge: " << user.age << "ID: " << user.id << "\n";
		return out;
	}
	c_User(c_User& user)
	{
		this->name = user.name;
		this->surname = user.surname;
		this->age = user.age;
	}
};

