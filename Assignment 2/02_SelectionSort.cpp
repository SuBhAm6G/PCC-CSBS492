// Sort an array using selection sort.
#include <iostream>
#include <vector>
using namespace std;

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

int main(){
    vector<int> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter elements with a space: ";
    for(int i=0; i<n; i++){
        int num;
        cin >> num;
        nums.push_back(num);
    }
    cout << "Your original array: ";
    for(auto i: nums){
        cout << i << " ";
    }

    //Selection Sort
    for(int i=0; i<n; i++){
        int min_idx=i;
        for(int j=i+1; j<n; j++){
            if(nums[j]<nums[min_idx]) min_idx=j;
        }
        if(min_idx != i) swap(nums[i],nums[min_idx]);
    }
    cout << "\nSorted array: ";
    for(auto i: nums){
        cout << i << " ";
    }
    return 0;
}
