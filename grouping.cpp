#include<iostream>
using namespace std;

// int main()
// {
//     string input_str;
//     cout << "Enter a string.\n";
//     cin >> input_str;

//     int freq_array[200] = {0};

//     for (int i = 0; i < input_str.length(); ++i)
//     {
//         freq_array[input_str[i]]++;
//     }

//     cout << "Output: ";

//     for (int i = 0; i < 200; ++i)
//     {
//         while(freq_array[i])
//         {
//             cout << (char)i;
//             freq_array[i]--;
//             if(!freq_array[i])
//             {
//                 cout << " ";
//             }
//         }
//     }
//     return 0;
// }


int main()
{
    string input_str;
    cout << "Enter a string.\n";
    cin >> input_str;

    cout << "Output: ";
    for (int i = 0; i < input_str.length(); ++i)
    {
        if (i != 0 && input_str[i] != input_str[i - 1])
        {
            cout << " ";
        }
        cout << input_str[i];
    }

    return 0;
}