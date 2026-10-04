#ifndef MY_CLASSE_HPP
#define MY_CLASSE_HPP

#include <iostream>
#include <string>

using namespace std;

class My_class
{
private:
    string text;

public:
    My_class();
    My_class(string);
    void print_my_element() const;
};
#endif