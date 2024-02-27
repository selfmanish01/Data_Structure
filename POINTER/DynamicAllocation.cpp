<<<<<<< HEAD
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int **p = new int *[m];
    for (int i = 0; i < m; i++)
    {
        p[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        delete[] p[i];
    }
    delete[] p;
=======
#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int **p = new int *[m];
    for (int i = 0; i < m; i++)
    {
        p[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            cin >> p[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        delete[] p[i];
    }
    delete[] p;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}