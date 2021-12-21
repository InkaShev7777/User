#pragma once
#include "c_User.h"
class c_Users :
    public c_User
{
    int size;
    c_User* mas;
public:
    c_Users();
    void Add(c_User& user);
    void Save();
};

