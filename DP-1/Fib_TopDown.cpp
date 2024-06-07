#include <iostream>
using namespace std;
int fibHelper(int n , int*ans){
    if(n<=1){
        return n;
    }
    if(ans[n]!=-1){
        return ans[n];
    }
    int a = fibHelper(n - 1, ans);
    int b = fibHelper(n - 2, ans);
    ans[n] = a + b;
    return ans[n];
}
int fib_Memo(int n){
    int *ans = new int[n + 1];
    for (int i = 0; i <= n;i++){
        ans[i] = -1;
    }
    return fibHelper(n, ans);
}

int main()
{
    int n;
    cin >> n;
    int result = fib_Memo(n);
    cout << result;
}