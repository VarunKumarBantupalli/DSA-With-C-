#include <iostream>
using namespace std;

int helper(int num, int count) {
    if (num <= 1) {
        return count;
    }
    num = num >> 1;
    count++;
    return helper(num, count);
}

int main() {
    int num = 2;
    cout << helper(num, 0);
    return 0;
}
