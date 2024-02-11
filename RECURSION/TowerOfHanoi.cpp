#include <iostream>
using namespace std;
  
void towerofhanoi(int n,char a,char b,char c){

    if(n==1){
        cout <<"from"<<a<<"to"<<b<<endl;
        return;
    }
    towerofhanoi(n - 1, a, c, b);                                                 
    cout << "Moved disk " << n << " from " << a << " to " << b << endl; 
    towerofhanoi(n - 1, c, b, a);                                                 
}


int main()
{
    char a,b,c;
 towerofhanoi(3,a,b,c);
}