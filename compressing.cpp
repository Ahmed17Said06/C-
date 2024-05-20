#include<iostream>
using namespace std;

int main()
{
    string letters;
    cout << "Input: \n";
    getline(cin, letters);
    letters += "$"; // SO IMPORTANT TO AVOID SPECIAL HANDLING FOR LAST GROUP.
    int counter = 0;
    cout <<"Output: ";
    for (int i = 0; i < letters.length(); ++i)
    {
        if (i != 0 && letters[i] != letters[i - 1])
        {
            cout << letters[i - 1] << counter;
            if (i != (letters.length() - 1))
            {
                cout << "_";
            }
            counter = 0;
        }
        counter++;
    }
    return 0;
}