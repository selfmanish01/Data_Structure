<<<<<<< HEAD
#include <iostream>
using namespace std;
int firstIndex(int arr[], int size, int x, int currentindex=0)
{
  if (size == 0 || currentindex >= size)
    return -1;

  if (arr[currentindex] == x)
    return currentindex;

  return firstIndex(arr, size, x, currentindex + 1);
}

int main()
{
  

=======
#include <iostream>
using namespace std;
int firstIndex(int arr[], int size, int x, int currentindex=0)
{
  if (size == 0 || currentindex >= size)
    return -1;

  if (arr[currentindex] == x)
    return currentindex;

  return firstIndex(arr, size, x, currentindex + 1);
}

int main()
{
  

>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}