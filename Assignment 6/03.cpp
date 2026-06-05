// 3. Construct a C++ program to implement the inline function.
#include <bits/stdc++.h>
using namespace std;
inline int cube(int n) {return n*n*n;}
int main() {
    int n;
    cin >> n;
    cout << "without inline " << n*n*n << endl;
    cout << "with inline " << cube(n) << endl;

    return 0;
}
