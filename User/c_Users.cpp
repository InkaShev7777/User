#include "c_Users.h"

c_Users::c_Users()
{
	this->mas = new c_User;
	this->size = 0;
}

void c_Users::Add(c_User& user)
{
	this->mas = (c_User*)realloc(this->mas, (size + 1) * sizeof(c_User));
	c_User* a = new c_User(user);
	this->mas[size] = *a;
	size++;
}

void c_Users::Save()
{
	FILE* pf;
	fopen_s(&pf, "file.txt", "wt");
	if (pf != nullptr)
	{
		for (int i = 0; i < size; i++)
		{
			fprintf(pf, "%s\t%s\t%i\t", this->mas[i].getName().c_str(), this->mas[i].getSurNmae().c_str(), mas[i].getAge());
		}
		fclose(pf);
		std::cout << "Ok!\n";
	}
	else
	{
		std::cout << "Error\n";
	}
	
}
