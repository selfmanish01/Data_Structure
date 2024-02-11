#include <iostream>
using namespace std;
  int sumOfarray( int array[],int n){
  if(n==0) return 0;

  return array[n-1]+ sumOfarray[array,n-1];

  }
int main()
{
    int n;
 int array[1000];
  for (int i=0;i<n;i++){
    cin>>array[i];
  }
    
cout << sumOfarray(array,6)<<endl;

}