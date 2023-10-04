// to check wheather the array is sorted or not
#include<iostream>
using namespace std;

int main() {
    int arr[] = {5, 4, 2, 17, 0};
    int n = 5;
    bool flag = true;

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "Array is sorted." << endl;
    } else {
        cout << "Array is not sorted." << endl;
    }

    return 0;
}
