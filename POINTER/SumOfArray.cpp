#include <iostream>
using namespace std;
int sum(int arr[],int size, int si=0){
    int ans = 0;
    for (int i=si;i<size;i++){
        
        ans=ans+arr[i];
    }
    return ans;
}


int main()
{
 
int arr[10]={4,6,8,3,9,2,1,9,4};
cout << sum( arr,10,3)<<endl;

}