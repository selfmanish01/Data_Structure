#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;


int main()
{
    unordered_map<string, int> ourmap;
    ourmap["abc"] = 1;
    ourmap["abc1"] = 2;
    ourmap["abc2"] = 3;
    ourmap["abc3"] = 4;
    ourmap["abc4"] = 15;
    ourmap["abc5"] = 16;
    unordered_map<string, int>::iterator it = ourmap.begin();
    while (it!= ourmap.end()){
        cout << "Key: " << it->first << "Value:" << it->second << endl;
        it++;
    }

    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    vector<int>::iterator it1 = v.begin();
    while(it1!=v.end()){
        cout << *it1 << endl;
        it1++;
    }

    unordered_map<string, int>::iterator it2 = ourmap.find("abc");
    cout << "our map find is upside" << endl;
   // ourmap.erase(it2, it2 + 2); // it2, it2+1, it2+2, it2+3 wiill be deleted only ;
}