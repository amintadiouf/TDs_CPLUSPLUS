#include "my_classe.hpp"

My_class::My_class(){
    text = "Valeur par defaut"; 
}

My_class::My_class(const string l)
{
    text = l;
}

void My_class::print_my_element() const
{
    cout << text << endl;
}