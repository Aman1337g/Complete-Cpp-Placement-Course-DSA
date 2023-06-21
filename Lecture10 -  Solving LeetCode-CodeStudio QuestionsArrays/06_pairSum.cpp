/*
    Problem Link - https://www.codingninjas.com/codestudio/problems/pair-sum_697295
*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    vector<vector<int>> ans;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            vector<int> temp;
            if (arr[i] + arr[j] == s)
            {
                temp.push_back(min(arr[i], arr[j]));
                temp.push_back(max(arr[i], arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> vec;
    int m, element, sum;
    cout << "Enter size of the vector : ";
    cin >> m;
    cout << "Enter sum : ";
    cin >> sum;
    cout << "Enter vector : ";
    for (int i = 0; i < m; i++)
    {
        cin >> element;
        vec.push_back(element);
    }
    vector<vector<int>> result = pairSum(vec, sum);
    for (const vector<int> &pair : result)
    {
        cout << pair[0] << " " << pair[1] << endl;
    }
    return 0;
}
/*
OUTPUT

Enter size of the vector : 5
Enter sum : 0
Enter vector : 2 -3 3 3 -2
-3 3
-3 3
-2 2
*/