#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 25, 30, 45, 50};
    int n = 5;
    int key = 30;

    int found = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        cout << "Element found at index: " << found;
    } else {
        cout << "Element not found";
    }

    return 0;
}
