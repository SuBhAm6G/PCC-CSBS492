// 2.	Write a program to check Prime numbers.
#include <iostream>
using namespace std;

bool isPrime(long long n){
    if(n == 1) return false;
    if(n == 2) return true;
    if(n % 2 == 0) return false;
    for (long long i = 3; i * i <= n; i++){
        if(n % i == 0) return false;
    }
    return true;
}

int main(){
    long long n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPrime(n)) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
    
    return 0;
}