#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int findMostFrequentElement(vector<int> &arr)
{
    unordered_map<int, int> freqMap;
    for (int i = 0; i < arr.size();i++){
        if(freqMap.count(arr[i])==0){
            freqMap[arr[i]]++;
        } else{
            freqMap[arr[i]]++;
        }
      
    }
}
    // int maxFreq = 0;
    // int mostFrequentElement = arr[0];

    // for (int num : arr)
    // for (int i = 0; i < arr.size();i++){
    //         int num = arr[i];
        
    //         freqMap[num]++;
    //         if (freqMap[num] > maxFreq || (freqMap[num] == maxFreq && num < mostFrequentElement))
    //         {
    //             maxFreq = freqMap[num];
    //             mostFrequentElement = num;
    //         }
    // }

    // return mostFrequentElement;


int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; i++)
    {
        cin >> arr[i];
    }

    int result = findMostFrequentElement(arr);
    cout << result << endl;

    return 0;
}
