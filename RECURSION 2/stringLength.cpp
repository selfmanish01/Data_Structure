<<<<<<< HEAD
// i am calculating strinf lenght using recursion 

#include<iostream>
using namespace std;
int stringLength(char arr[] ){
  if(arr [0]=='\0'){
      return 0;
  }

  int smallLength = stringLength(arr + 1);
  return 1 + smallLength;
}
int main (){

    char arr [1000] ;
    cin >> arr;
    cout << stringLength(arr) << endl;


}
=======
// i am calculating strinf lenght using recursion 

#include<iostream>
using namespace std;
int stringLength(char arr[] ){
  if(arr [0]=='\0'){
      return 0;
  }

  int smallLength = stringLength(arr + 1);
  return 1 + smallLength;
}
int main (){

    char arr [1000] ;
    cin >> arr;
    cout << stringLength(arr) << endl;


}
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
