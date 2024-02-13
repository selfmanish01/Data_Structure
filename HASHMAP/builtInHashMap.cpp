#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main(){
    unordered_map<string, int> mymap;
    // both way of insertion is correct;
    pair<string, int> p("key", 1);
    mymap.insert(p);
    mymap["key2"] = 2;
}