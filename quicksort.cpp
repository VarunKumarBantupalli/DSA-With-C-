#include <iostream>
#include <vector>
using namespace std;

void quickSort(int start, vector<int>& a, int end) {
    if (start >= end) {
        return;
    }
    int pivot = a[start];
    int count = start;
    for (int i = start + 1; i <= end; i++) {
        if (a[i] < pivot) {
            count++;
            swap(a[count], a[i]);
        }
    }
    swap(a[start], a[count]);
    quickSort(start, a, count - 1);
    quickSort(count + 1, a, end);
}

int main() {
    vector<int> a = {5, 1, 8, 2, 7, 6, 3, 4};
    int start = 0;
    int end = a.size() - 1;
    quickSort(start, a, end);
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}
