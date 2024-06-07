#include <iostream>
#include <string> // Include the string header for std::string

using namespace std;

bool VowelChar(char c)
{
    char lowerC = tolower(c); // Use a different variable name
    return (lowerC == 'a' || lowerC == 'e' || lowerC == 'i' || lowerC == 'o' || lowerC == 'u');
}

int VowelCount(const string &s)
{ // Pass the string by const reference
    int count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char f = s[i];
        if (VowelChar(f))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    string s;
    cout << "Enter a string: ";
    getline(cin, s); // Use std::getline to read a line into a string
    cout << "Number of vowels: " << VowelCount(s) << endl;
    return 0;
}
