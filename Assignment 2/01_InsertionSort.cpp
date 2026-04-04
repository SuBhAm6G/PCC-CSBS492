// Sort an array using insertion sort.
#include <iostream>
#include <vector>
using namespace std;

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

    //Insertion Sort
    for(int i=1; i<n; i++){
        int key=nums[i];
        int j=i-1;
        while(j>=0 && nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        nums[j+1]=key;
    }

    cout << "\nSorted array: ";
    for(auto i: nums){
        cout << i << " ";
    }
    return 0;
}