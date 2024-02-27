<<<<<<< HEAD
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<string, int> mymap;
    mymap["abc"] = 1;
    mymap["abc1"] = 2;
    mymap["abc2"] = 3;
    mymap["abc3"] = 4;
    mymap["abc4"] = 5;
    mymap["abc5"] = 6;
    unordered_map<string, int>::iterator it = mymap.begin();
    while (it != mymap.end())
    {

        cout << " Key : " << it->first <<" && "<< " value : " << it->second << endl;
        it++;
    }
=======
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
    unordered_map<string, int> mymap;
    mymap["abc"] = 1;
    mymap["abc1"] = 2;
    mymap["abc2"] = 3;
    mymap["abc3"] = 4;
    mymap["abc4"] = 5;
    mymap["abc5"] = 6;
    unordered_map<string, int>::iterator it = mymap.begin();
    while (it != mymap.end())
    {

        cout << " Key : " << it->first <<" && "<< " value : " << it->second << endl;
        it++;
    }
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}