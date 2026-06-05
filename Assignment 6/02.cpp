// 2. Construct a C++ program to implement new and delete operator.
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++) cout << &arr[i] << " ";

    return 0;
}
