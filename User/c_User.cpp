#include "c_User.h"
#include<iostream>
#include<string>
int c_User::getAge()
{
	return this->age;
}
std::string c_User::getName()
{
	return std::string(this->name);
}
std::string c_User::getSurNmae()
{
	return std::string(this->surname);
}
long c_User::getId()
{
	return this->id;
}
void c_User::setName(std::string name)
{
	this->name = name;
}
void c_User::setSurName(std::string surname)
{
	this->surname = surname;
}
void c_User::setAge(int age)
{
	this->age = age;
}
c_User::c_User()
{
	this->name = "";
	this->surname = "";
	this->age = 0;
	this->id = 0;
}

c_User::c_User(std::string name, std::string surname, int age)
{
	this->name = name;
	this->surname = surname;
	this->age = age;
}
