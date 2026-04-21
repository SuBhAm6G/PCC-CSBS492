#include <iostream>
#include <vector>
using namespace std;

int partition(vector<int> &arr, int low, int high){
    int pivot = arr[high];
    int i = low -1;
    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }

    swap(arr[i+1], arr[high]);
    return i + 1;
}

void quicksort(vector<int> &arr, int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);

        quicksort(arr, low, pi-1);
        quicksort(arr, pi+1, high);

    }
}

int main(){
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    if(n <= 0){
        cout << "Invalid input!" << endl;
        return 0;
    }
    vector<int> arr(n);

    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    quicksort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int x : arr)
        cout << x << " ";

    return 0;
}