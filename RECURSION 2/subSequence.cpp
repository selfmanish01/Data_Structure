<<<<<<< HEAD
#include <iostream>
using namespace std;
int subseq(string input, string output[]){

if(input.empty()){
    output[0] = "";
    return 1;
};
string smallString = input.substr(1);

int smallOutputSize = subseq(smallString, output);
for (int i = 0; i < smallOutputSize;i++){
    output[i + smallOutputSize] = input[0] + output[i];
}
return 2 * smallOutputSize;
}
int main(){
    string input;
    cin >> input;
    string *output = new string[1000];

    int count = subseq(input, output);
    for (int i = 0; i < count; i++){
        cout << output[i] << endl;
    }
=======
#include <iostream>
using namespace std;
int subseq(string input, string output[]){

if(input.empty()){
    output[0] = "";
    return 1;
};
string smallString = input.substr(1);

int smallOutputSize = subseq(smallString, output);
for (int i = 0; i < smallOutputSize;i++){
    output[i + smallOutputSize] = input[0] + output[i];
}
return 2 * smallOutputSize;
}
int main(){
    string input;
    cin >> input;
    string *output = new string[1000];

    int count = subseq(input, output);
    for (int i = 0; i < count; i++){
        cout << output[i] << endl;
    }
>>>>>>> b25cd120fbac6c0218ddffafa97391e5b426c349
}