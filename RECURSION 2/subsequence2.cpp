#include <iostream>
using namespace std;
int subsequence( string s, string output[] ){
if ( s.empty()){
    output[0] = "";
    return 1;
}
string smallString = s.substr(1);
int smallSize = subsequence(smallString, output);
for (int i = 0; i < smallSize;i++){
    output[i + smallSize] = s[0] + output[i];
}
return 2 * smallSize;
}



int main(){
    string s;
    cin >> s;
    string *output = new string[1000];
    int count = subsequence( s, output);

    for (int i = 0; i < count;i++){
        cout << output[i] << endl;
    }
}