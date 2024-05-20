#include <iostream>
using namespace std;

int main()
{
    string letters;
    int freq_array[200] = {0};
    cout << "Enter the string.\n";
    getline(cin,letters);
    for (int i = 0; i < letters.length(); ++i)
    {
        if (letters[i] >= 'a' && letters[i] <= 'z')
        {
            freq_array[letters[i]]++;
        }
    }

    for (int i = 'a'; i <= 'z'; i++)
    {
        if (freq_array[i] != 0)
        {
            cout << (char)i << ": " << freq_array[i] << "\n";
        }
    }
    return 0;
}