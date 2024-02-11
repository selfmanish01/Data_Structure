#include <iostream>
using namespace std;
double gsum(int k)
{
   
    if (k == 0){
        return 1.0;
    };
    double currentNum = 1.0 / (1 << k);
    return currentNum + gsum(k - 1);
}
int main()
{
    int k=4;
    double sum=gsum(k);
    cout << sum << endl;
}

// if (k == 0)
//     return 1;
// firstTerm = 1;
// ratio = 0.5;

// return firstTerm + gsum(firstTerm, ratio, k - 1);



//answer nhi aya 
