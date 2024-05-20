#include<iostream>
using namespace std;

string reverse_str(const string & str)
{
    string reversed;

    for (int i = 0; i < str.length(); ++i)
    {
        reversed += str [str.length() - 1 - i];
    }
    return reversed; 
}

int main ()
{


    string str;
    cout << "Enter a string.\n";

    getline(cin, str);

    cout << reverse_str(str);

    return 0;
}