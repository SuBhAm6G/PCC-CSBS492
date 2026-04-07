// 3.	Write a program to check whether a given string is Palindrome or not.
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// bool isPalindrome(const string s){
//     int left = 0;
//     int right = s.length() - 1;
//     while(left<right){
//         if(s[left] != s[right]) return false;
//         left ++;
//         right --;
//     }
//     return true;
// }

bool isPalindrome(const string s){
    string t = s;
    reverse(t.begin(), t.end());
    return s == t;
}
int main(){
    string s;
    cout << "Enter a string: ";
    getline(cin, s);
    if (isPalindrome(s)) {
        cout << "\"" << s << "\" is a palindrome." << endl;
    } else {
        cout << "\"" << s << "\" is not a palindrome." << endl;
    }
    
    return 0;
}