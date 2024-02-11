#include <iostream>
using namespace std;
// create class  getter and setter
class student
{
public:
    int age;

private:
    int rollno;

public:
    void getValue()
    {
        cout << rollno << "   " << age << endl;
    }

    void setValue(int a, int password)
    {
        if (password != 1234)
        {
            return;
        }
        if (a < 0)
        {

            return;
        }
        rollno = a;
    }
};

int main()
{
}