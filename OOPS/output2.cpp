<<<<<<< HEAD
#include <iostream>
using namespace std;

class Student
{
public:
    const int rollNumber;
    int age;

    int &x;

    Student(int r, int a) : rollNumber(r), age(a)
    {
    }
};

int main()
{
    Student s1(100, 23);
    s1.x = age;
    cout << s1.rollNumber << " " << s1.age << " " << s1.x;
}

=======
#include <iostream>
using namespace std;

class Student
{
public:
    const int rollNumber;
    int age;

    int &x;

    Student(int r, int a) : rollNumber(r), age(a)
    {
    }
};

int main()
{
    Student s1(100, 23);
    s1.x = age;
    cout << s1.rollNumber << " " << s1.age << " " << s1.x;
}

>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
// will show error 