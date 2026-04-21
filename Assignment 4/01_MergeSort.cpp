#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> &arr, int left, int mid, int right){
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> L(n1,0), R(n2,0);

    for(int i = 0; i < n1; i++) L[i] = arr[left+i];
    for(int j = 0; j < n2; j++) R[j] = arr[mid+1+j];

    int i = 0, j = 0, k = left;
    while(i < n1 && j < n2){
        if(L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }

    while(i < n1) arr[k++] = L[i++];
    while(j < n2) arr[k++] = R[j++];
}

void mergesort(vector <int> &arr, int left, int right){
    if(left < right){
        int mid = left + (right - left)/2;
        mergesort(arr, left, mid);
        mergesort(arr, mid+1, right);
        merge(arr, left, mid, right);
    }
}

int main(){
    int n;
    cout << "Enter the count of items: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid Input!" << endl;
        return 0;
    }
    vector<int> arr(n,0);
    cout << "Enter the items: ";
    for(int i = 0; i < n; i++) cin >> arr[i];

    mergesort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}
