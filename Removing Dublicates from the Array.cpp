Removing Dublicates from the array

#include <iostream>
using namespace std;

void removeDuplicates(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--; 
            }
        }
    }
    
    cout << "Array with duplicates removed: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    int n;
    cout << "Enter the size of the List: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the list: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    removeDuplicates(n, arr);

}
