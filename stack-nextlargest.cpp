#include <iostream>
#include <stack>
using namespace std;

int main() {
    stack<int> st;
    int arr[] = {3, 1, 2, 5, 4, 6, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans[n];
    
    // Initialize the last element's next greater element as -1
    ans[n-1] = -1;
    st.push(arr[n-1]);
    
    // Iterate from the second last element to the first element
    for (int i = n-2; i >= 0; i--) {
        // Pop elements from the stack until we find a greater element or stack becomes empty
        while (!st.empty() && st.top() <= arr[i]) {
            st.pop();
        }
        // If stack is not empty, then the top element is the next greater element
        if (!st.empty()) {
            ans[i] = st.top();
        } else {
            ans[i] = -1; // If stack is empty, then there is no greater element
        }
        // Push the current element onto the stack
        st.push(arr[i]);
    }
    
    // Output the result
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    
    return 0;
}
