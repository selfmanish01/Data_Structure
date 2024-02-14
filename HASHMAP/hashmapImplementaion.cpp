#include <iostream>
#include <vector>
#include <list>

using namespace std;

class MyHashMap
{
private:
    vector<list<pair<int, int>>> buckets;
    int hash(int key)
    {
        return key % buckets.size();
    }

public:
    /** Initialize your data structure here. */
    MyHashMap()
    {
        // Initialize the number of buckets
        buckets.resize(1000);
    }

    /** value will always be non-negative. */
    void put(int key, int value)
    {
        int index = hash(key);
        for (auto &kvp : buckets[index])
        {
            if (kvp.first == key)
            {
                kvp.second = value;
                return;
            }
        }
        buckets[index].push_back({key, value});
    }

    /** Returns the value to which the specified key is mapped, or -1 if this map contains no mapping for the key */
    int get(int key)
    {
        int index = hash(key);
        for (auto &kvp : buckets[index])
        {
            if (kvp.first == key)
            {
                return kvp.second;
            }
        }
        return -1;
    }

    /** Removes the mapping of the specified value key if this map contains a mapping for the key */
    void remove(int key)
    {
        int index = hash(key);
        buckets[index].remove_if([key](const pair<int, int> &kvp)
                                 { return kvp.first == key; });
    }
};

int main()
{
    MyHashMap hashMap;
    hashMap.put(1, 1);
    hashMap.put(2, 2);
    cout << hashMap.get(1) << endl; // Output: 1
    cout << hashMap.get(3) << endl; // Output: -1
    hashMap.put(2, 1);
    cout << hashMap.get(2) << endl; // Output: 1
    hashMap.remove(2);
    cout << hashMap.get(2) << endl; // Output: -1
    return 0;
}
