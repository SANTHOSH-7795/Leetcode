#include <iostream>
#include <conio.h>
using namespace std;
int main() {
    int a[50], n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cout << "The elements of the array before moving zero's to last: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    for (int i =0; i<n-1; i++) {
        if(a[i] == 0) {
            for (int j = i+1; j < n; j++) {
                if(a[j] != 0) {
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                    break;
                }
            }
        }
    }
    cout << "The elements of the array after moving zero's to last: ";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    return 0;
}