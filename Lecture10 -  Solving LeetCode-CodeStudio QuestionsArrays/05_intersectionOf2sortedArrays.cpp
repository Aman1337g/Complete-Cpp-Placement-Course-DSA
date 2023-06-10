/*
    Problem Link - https://www.codingninjas.com/codestudio/problems/intersection-of-2-arrays_1082149?source=youtube&campaign=love_babbar_codestudio1&leftPanelTab=0
*/

#include <bits/stdc++.h>
#include <vector>
using namespace std;

void display(vector<int> vec)
{
    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec[i] << " ";
    }
    cout << "\n";
}
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    vector<int> ans;
    int i = 0, j = 0;
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] == arr2[j])
        {
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
        else
        {
            j++;
        }
    }
    return ans;
}

int main()
{
    vector<int> vec1;
    vector<int> vec2;
    int m, n, element;
    cout << "Enter size of the vector1 : ";
    cin >> n;
    cout << "Enter vector1 : ";
    for (int i = 0; i < n; i++)
    {
        cin >> element;
        vec1.push_back(element);
    }
    cout << "Entered vector1 : ";
    display(vec1);

    cout << "Enter size of the vector2 : ";
    cin >> m;
    cout << "Enter vector2 : ";
    for (int i = 0; i < m; i++)
    {
        cin >> element;
        vec2.push_back(element);
    }
    cout << "Entered vector2 : ";
    display(vec2);

    vector<int> ans;
    ans = findArrayIntersection(vec1, n, vec2, m);
    cout << "Intersection array : ";
    if (ans.size() != 0)
    {
        display(ans);
    }
    else
        cout << -1;

    return 0;
}
/*
OUTPUT

Enter size of the vector1 : 3
Enter vector1 : 1 3 5
Entered vector1 : 1 3 5
Enter size of the vector2 : 4
Enter vector2 : 1 2 3 4
Entered vector2 : 1 2 3 4
Intersection array : 1 3
*/