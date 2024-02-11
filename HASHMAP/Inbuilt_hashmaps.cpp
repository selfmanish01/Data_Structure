#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;
int main()
{
    unordered_map<string, int> ourMap;
    // insert
    pair<string, int> p("abc", 1);
    ourMap.insert(p);
    ourMap["def"]=2;
    // find or access
    cout << ourMap["abc"] <<"   "<<ourMap["def"]<<endl;
    cout << ourMap.at("abc")<<endl;
   //  cout << ourMap.at("ghi")<<endl; showing out of range 

   cout << "size : "<<ourMap.size()<<endl;
   cout << ourMap["ghi"]<<endl;  // ]it put value of 0 khud se without providing
   cout << "size : "<< ourMap.size()<<endl;


   //check presence   only 0 or 1
   if (ourMap.count("ghi")>0){
    cout << " ghi is present"<<endl;
   }


   // erase
   ourMap.erase("ghi");
   cout << " Size : "<< ourMap.size()<<endl;

   if (ourMap.count("ghi")>0){
    cout << "ghi is present"<<endl;
   }
}