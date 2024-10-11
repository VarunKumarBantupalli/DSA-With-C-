#include<iostream>
using namespace std;

class minheap {
public:
    int index;
    int arr[50];

    minheap() {
        index = 1;
    }

    int top() {
        return arr[1];
    }

    void push(int x) {
        arr[index] = x;
        int i = index;
        index++;
        
        while(i != 1) {
            int parent = i / 2;
            if(arr[i] < arr[parent]) {
                swap(arr[i], arr[parent]);
            } else {
                break;
            }
            i = parent;
        }
    }

    int size() {
        return index - 1;
    }

    void pop() {
        if (index == 1) return; // No elements to pop

        index--;
        arr[1] = arr[index]; // Move the last element to the root
        int i = 1;

        while (true) {
            int l = 2 * i;
            int r = 2 * i + 1;
            int smallest = i;

            if (l < index && arr[l] < arr[smallest]) {
                smallest = l;
            }
            if (r < index && arr[r] < arr[smallest]) {
                smallest = r;
            }
            if (smallest != i) {
                swap(arr[i], arr[smallest]);
                i = smallest;
            } else {
                break;
            }
        }
    }
};

int main() {
    minheap pq;
    pq.push(10);
    pq.push(20);
    cout << pq.size() << endl;
    pq.push(30);
    pq.push(3);
    pq.push(300);
    cout << pq.top() << endl;
    cout << pq.size() << endl;

    while (pq.size()) {
        cout << pq.top() << endl;
        pq.pop();
    }
}
