<<<<<<< HEAD
#include <iostream>
using namespace std;
template <typename T>
class queueUsingArray {

    T * data;
    int firstIndex;
    int nextIndex;
    int capacity;
    int size;
    // access identifier 
    public:
    queueUsingArray(int s){
        data = new T[s];
        firstIndex = -1;
        nextIndex = 0;
        capacity = s;
        size = 0;

    }
    int getSize(){
        return size;

    }
    bool isEmpty(){
        return size == 0;
    }
    T front(){
        if (firstIndex==-1){
            cout << " Queue is empty" << endl;
            return 0;
        }
        return data[firstIndex];
    }

    void enqueue(int element){
       if(size== capacity){
           cout << " The queue is full" << endl;
           return ;
       }

       data[nextIndex] = element;
       nextIndex= (nextIndex+1)%capacity;
       if (firstIndex==-1){
           firstIndex = 0;
       }
       size++;
    }

    T dequeue(){
     if(size==0){
         cout << " The queue is empthy " << endl;
         return 0;
     }

     int temp = data[firstIndex];
     size--;
     // nextIndex++;
     firstIndex = (firstIndex+1)%capacity;
     if(size==0){
         firstIndex = -1;
         nextIndex = 0;
     }
     return temp;
    }


};

int main(){
    queueUsingArray<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout << q.front() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.getSize() << endl;
    cout << q.isEmpty() << endl;
=======
#include <iostream>
using namespace std;
template <typename T>
class queueUsingArray {

    T * data;
    int firstIndex;
    int nextIndex;
    int capacity;
    int size;
    // access identifier 
    public:
    queueUsingArray(int s){
        data = new T[s];
        firstIndex = -1;
        nextIndex = 0;
        capacity = s;
        size = 0;

    }
    int getSize(){
        return size;

    }
    bool isEmpty(){
        return size == 0;
    }
    T front(){
        if (firstIndex==-1){
            cout << " Queue is empty" << endl;
            return 0;
        }
        return data[firstIndex];
    }

    void enqueue(int element){
       if(size== capacity){
           cout << " The queue is full" << endl;
           return ;
       }

       data[nextIndex] = element;
       nextIndex= (nextIndex+1)%capacity;
       if (firstIndex==-1){
           firstIndex = 0;
       }
       size++;
    }

    T dequeue(){
     if(size==0){
         cout << " The queue is empthy " << endl;
         return 0;
     }

     int temp = data[firstIndex];
     size--;
     // nextIndex++;
     firstIndex = (firstIndex+1)%capacity;
     if(size==0){
         firstIndex = -1;
         nextIndex = 0;
     }
     return temp;
    }


};

int main(){
    queueUsingArray<int> q(5);
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout << q.front() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.getSize() << endl;
    cout << q.isEmpty() << endl;
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}