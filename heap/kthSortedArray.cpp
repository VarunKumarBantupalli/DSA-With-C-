#include <iostream>
#include <queue>
#include <vector>
using namespace std;
int main()
{
    int arr[] = {6, 5, 3, 2, 10, 8, 9};
    int k = 3;
    int size = sizeof(arr) / 4;
    priority_queue<int, vector<int>, greater<int>> pq;
    vector<int> ans;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        pq.push(arr[i]);

        if (pq.size() > k)
        {
            ans[index++] = (pq.top());
            pq.pop();
        }
    }
    while (pq.size() > 0)
    {
        ans[index++] = (pq.top());
        pq.pop(); 
    } 
    for (int i = 0 ; i< ans.size() ;i++)
    {
        cout << ans[i] << " ";
    }
}