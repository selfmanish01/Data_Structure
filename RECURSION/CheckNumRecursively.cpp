<<<<<<< HEAD
#include <iostream>
using namespace std;
bool present(int arr, int size,int x)
{
    if (size==0) return false;
 if (arr[size-1]==x) return true;
 
 return present(arr, size-1,x)

}
int main()
{
    int arr[100], size, x;
    cin >> size;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        cout << endl;
    }
    cin >> x;

    cout << present(arr, size,x) << endl;
=======
#include <iostream>
using namespace std;
bool present(int arr, int size,int x)
{
    if (size==0) return false;
 if (arr[size-1]==x) return true;
 
 return present(arr, size-1,x)

}
int main()
{
    int arr[100], size, x;
    cin >> size;
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
        cout << endl;
    }
    cin >> x;

    cout << present(arr, size,x) << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}