#include <iostream>
using namespace std;

int  result(char arr[]){
if (arr[0]=='\0')
    return 0;
int length = 1 + result(arr + 1);
return length;
}

void removeX(char arr[]){
    if(arr[0]=='\0'){
        return;
    }
    // first emlement is not x
    if(arr[0]!='x'){
        removeX(arr + 1);
        // forst element is x
    }else{
        int i = 1;
        for (; arr[i] != '\0';i++){
            arr[i - 1] = arr[i];

        }
        arr[i - 1] = arr[i];
        removeX(arr);
    }
}


int main(){
    char arr[1000];
    cin >> arr;
    cout << result(arr) << endl;
    removeX(arr);
    cout << result(arr) << endl;
}