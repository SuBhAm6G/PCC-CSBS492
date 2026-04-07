// 1.	Write a program to find Armstrong numbers 
#include <iostream>

long long power(int base, int power){
    long long result = 1;
    while(power --){
        result *= base;
    }
    return result;
}
bool isArmstrong(long long n){
    if (n < 0) return false;
    long long temp = n;
    int digits = 0;
    //count digits
    while(temp){
        digits ++;
        temp /= 10;
    }
    if(n==0) digits = 1;

    //sum of digits ^ power
    long long copy = n;
    long long sum = 0;
    while(copy){
        int rem = copy % 10;
        sum += power(rem,digits);
        copy = copy / 10;
    }
    return sum == n;
}

int main(){
    long long n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    if (isArmstrong(n)) {
        std::cout << n << " is an Armstrong number." << std::endl;
    } else {
        std::cout << n << " is not an Armstrong number." << std::endl;
    }
    
    return 0;
}

//O((log n)^2)
//O((log n)) possible using precompute