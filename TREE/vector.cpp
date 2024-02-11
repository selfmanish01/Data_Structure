#include <iostream>
#include <vector >
using namespace std;
int main()
{
    // dynamically vector creation
    // vector <int >*vp =new vector <int >();
    // statically representation of vector.
    vector<int> v;

    for (int i = 0; i < 100; i++)
    {
        v.push_back(i + 1);
        cout << "Capacity:" << v.capacity() << endl;
        cout << "Size :" << v.size() << endl;
       
    }
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    // v[1]=100;
    // cout << v[0] << endl;
    // cout << v[1] << endl;
    // cout << v[2] << endl;
}