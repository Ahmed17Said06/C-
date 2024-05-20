#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

void all_words_prefix1(vector<string> &input, int Q)
{
    map<string, vector<string>> prefix;

    for(string str : input)
    {
        string pre_str;
        for (int i = 0; i < (int) str.size(); ++i)
        {
            pre_str += str[i];
            prefix[pre_str].push_back(str);
        }
    }

    while(Q--)
    {
        string query;
        cout << "Enter your query: ";
        cin >> query;

        int size = prefix[query].size();

        if(prefix[query].empty())
        {
            cout << "no matches. \n";
            continue;
        }

        for (string output : prefix[query])
        {
            cout<< output << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int n;
    vector<string> input;

    cout << "Enter N: \n";
    cin >> n;
    cout << "Enter the strings.\n";

    for (int i = 0; i < n; i++)
    {
        string temp;
        cin >> temp;
        input.push_back(temp);
    }
    int q;
    cout << "Enter the number of quiries: \n";
    cin >> q;

    all_words_prefix1(input, q);

    return 0;
}