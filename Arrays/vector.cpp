#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v = {1, 2, 3, 4, 5, 6};

    // size operation
    //  cout << v.size() << endl;

    // capacity   (capacit >= size)
    //  cout<< v.capacity();

    // Resize operation
    // v.resize(10);
    // cout << v.size() << endl;

    // Add Elements
    // v.push_back(101);
    // cout<<v.size();

    // Insert
    //  v.insert(2,10);
    //  v.begin() - first element
    //  v.end() - last element

    // Delete element
    //  v.pop_back();
    //  v.erase(position);
    // v.erase(v.end()-2);
    //  v.clear() //delete all elements from vector

    // Looping through vector

    vector<int> v;

    // for loop
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin >> element;
        v.push_back(element);
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;

    v.insert(v.begin() + 2, 6);

    // for-each loop
    for (int ele : v)
    {
        cout << ele << " ";
    }
    cout << endl;

    v.erase(v.end()-2);

    // while loop
    int idx = 0;
    while (idx < v.size())
    {
        cout << v[idx++] << " ";
    }
    cout << endl;

    return 0;
}