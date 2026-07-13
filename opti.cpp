#include <iostream>

using namespace std;

int main() {

    int n = 5;
    int arr[] = {2, 2, 0, 4, 8};

    for (int i = 0; i < n - 1; i++) {

        if (arr[i] != 0 && arr[i] == arr[i + 1]) {
            arr[i] = 2 * arr[i];
            arr[i + 1] = 0;
        }
    }

    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    while (index < n) {
        arr[index] = 0;
        index++;
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}