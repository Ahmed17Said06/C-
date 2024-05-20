#include<iostream>
#include<stack>
using namespace std;

int reverse_num(int num)
{
    stack<int> s;
    while(num)
    {
        s.push(num % 10);
        num /= 10;
    }
    int tens = 1;
    while(!s.empty())
    {
        num = num + s.top() * tens;
        tens *= 10;
        s.pop();
    }

    return num;
}


int main()
{
    int num;
    cout << "Enter num: ";
    cin >> num;

    cout << "reversed: "<< reverse_num(num);
    
    return 0;
}