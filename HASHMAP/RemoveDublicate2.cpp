#include <iostream>
#include<unordered_map>
#include<vector>
using namespace std;
  vector<int>RemoveDublicate(int *arr,int size){
      vector<int> result;
      unordered_map<int, bool> myMap;
      for (int i = 0; i < size; i++){
        if (myMap.count(arr[i])>0){
            continue;
        }
        myMap[arr[i]] = true;
        result.push_back(arr[i]);
      }
      return result;
  }
int main()
{
    int arr[] = {1, 2, 2, 35, 6, 7, 6, 8, 9, 8, 97, 97, 10};
    vector<int> output = RemoveDublicate(arr, 13);
    for (int i = 0; i < output.size();i++){
        cout << output[i] << endl;
    }
    return 0;
}