#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
using namespace std;

vector<string> findPossibleWords(string s)
{
    unordered_map<int, string> NumtoWord = {
        {2, "abc"},
        {3, "def"},
        {4, "ghi"},
        {5, "jkl"},
        {6, "mno"},
        {7, "pqrs"},
        {8, "tuv"},
        {9, "wxyz"}};

    vector<string> result;
    result.push_back("");

    if (s.size() == 0)
    {
        return {};
    }

    int i = 0;
    while (i < s.size())
    {
        char digit = s[i];
        vector<string> temp;

        int j = 0;
        while (j < NumtoWord[digit - '0'].size())
        {
            char letter = NumtoWord[digit - '0'][j];

            int k = 0;
            while (k < result.size())
            {
                temp.push_back(result[k] + letter);
                k++;
            }

            j++;
        }

        result = temp;
        i++;
    }

    return result;
}

int main()
{
    // Example usage
    string input;
    cin >> input;
    vector<string> result = findPossibleWords(input);

    int idx = 0;
    while (idx < result.size())
    {
        cout << result[idx] << " ";
        idx++;
    }

    return 0;
}
