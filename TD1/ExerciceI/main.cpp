#include "premier_header.hpp"
#include "my_classe.hpp"

/*
//q2
void fct_hello(string s)
{
    cout << s << endl;
}
*/

int main()
{
    //Exercice I
    cout << "Exercice I" << endl;

    //q1
    cout << "Hello World !" << endl;

    //q2 et q3
    fct_hello("Hello World !");

    //q4
    My_class c1;
    My_class c2("Hello World !");

    c1.print_my_element();
    c2.print_my_element();
    return 0;
}