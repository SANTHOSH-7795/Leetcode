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
    cout << "The elements of the array are: ";
    for (int i = 0; i < n; i++) { 
        cout << a[i] << " ";
    }
    int k;
    cout << "\nEnter the number: \n";
    cin >> k;
    for(int i = 0; i < n-1; i++) {
        for (int j = i + 1; j < n; j++) {
            if(a[i] + a[j] == k) {
                cout << "The pair is: (" << i << ", " << j << ")" << endl;
            }
        }
    }
    return 0;
}