/*
    Problem Link - https://www.codingninjas.com/codestudio/problems/duplicate-in-array_893397?source=youtube&campaign=love_babbar_codestudio1
*/

#include <iostream>
#include <vector>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying vector : ";
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}

int findDuplicate(vector<int> &arr)
{
    int ans = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        ans ^= arr[i];
    }
    for (int i = 0; i < arr.size(); i++)
    {
        ans ^= i;
    }
    return ans;
}

int main()
{
    vector<int> vec;
    int size, element;
    cout << "Enter size of the vector : ";
    cin >> size;
    cout << "Enter vector : ";
    for (int i = 0; i < size; i++)
    {
        cin >> element;
        vec.push_back(element);
    }
    display(vec);
    cout << findDuplicate(vec);

    return 0;
}
/*
OUTPUT

Enter size of the vector : 5
Enter vector : 4 2 1 3 1
Displaying vector : 4 2 1 3 1
1
*/