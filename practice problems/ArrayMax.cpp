#include <iostream>
using namespace std;
int findMinimum(int a[], int n){
    int mn = a[0];
    for (int i = 0; i < n; i++){
        mn = min(mn, a[i]);
    }
    return mn;
}
int findMaximum(int a[], int n){
    int mx = a[0];
    for (int i = 0; i < n; i++){
        mx = max(mx, a[i]);
    }
    return mx;
}
int main(){
    int n;
    cout << "Enter the size of the array = ";
    cin >> n;
    int arr[n], i, pos;
    cout << "\nEnter the " << n << " elements of the array = \n";
    for (i = 0; i < n; i++){
        cin >> arr[i];
    }
    cout << "\nThe " << n << " elements of the array are = ";
    for (i = 0; i < n; i++){
        cout << arr[i] << "\t";
    }
    int mn = findMinimum(arr, n);
    int mx = findMaximum(arr, n);
    cout << "\nThe Smallest element in the entered array is: " << mn<<endl;
    cout << "\nThe Largest element in the entered array is: " << mx <<endl;
    return 0;
}