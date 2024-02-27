<<<<<<< HEAD
#include <iostream>
using namespace std;
// ccreate class
class student {
    public:
        char name[100];
        int rollno;
        int age;
};

int main (){
    // statically 
        student s1;
        student s2;
        s1.rollno = 25;
        s1.age = 10;
        cout << s1.rollno << endl;

        // dynamically
        student *s4 = new student;
        (*s4).rollno= 24;
        (*s4).age = 19;
        cout << s4->age << endl;
=======
#include <iostream>
using namespace std;
// ccreate class
class student {
    public:
        char name[100];
        int rollno;
        int age;
};

int main (){
    // statically 
        student s1;
        student s2;
        s1.rollno = 25;
        s1.age = 10;
        cout << s1.rollno << endl;

        // dynamically
        student *s4 = new student;
        (*s4).rollno= 24;
        (*s4).age = 19;
        cout << s4->age << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}