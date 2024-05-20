#include<iostream>
using namespace std;

int main()
{
    string str;
    // cout << (int)'0' << " " << (int)'1';
    cout << "Input: \n";
    cin >> str;
    int output = 0;

    for(int i = 0; i < str.length(); ++i)
    {
        output = (output * 10) + (str[i] - '0');
    }
    cout << "Output: " << output << " " << 3 * output;
    return 0;
}