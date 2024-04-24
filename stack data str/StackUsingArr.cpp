#include <iostream>
#include<climits>
using namespace std;
class StackUsingLL{
   private:
       int *data;
       int nextIndex;
       int capacity;
    
    public:
    StackUsingLL(int totalSize){
        data = new int[totalSize];
        nextIndex = 0;
        capacity = totalSize;
    }

    // push function
    void pushfun(int element){
        if(nextIndex== capacity){
            cout << "stack is full" << endl;
            return;
        }
        data[nextIndex] = capacity;
        nextIndex++;
        
    }




    // pop function
    int pop(){
        if(isEmpty()){
            cout << "stack is empty" << endl;
            return INT_MIN;
        }
        nextIndex--;
        return data[nextIndex];
    }
     


    // is empty function
    bool isEmpty(data)
    {
        if(nextIndex==0){
            return false;
        }else{
             return true;
            }
            
    }

    // size calculaiton fun
    int SizeofStack(){
        return nextIndex;
    }


    // top function
    int topElementofStack(){
        if(nextIndex==0){
            return -1;
        }
        return data[nextIndex-1];
    }
};


int main()
{
 
}