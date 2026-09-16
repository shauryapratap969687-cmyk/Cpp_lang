#include <iostream>
using namespace std;

int main() {
    const int CAPACITY = 10;
    int arr[CAPACITY];
    int size, ele, pos;

    cout << "Enter current size (max " << CAPACITY - 1 << "): ";
    cin >> size;

    if (size < 0 || size >= CAPACITY) {
        cout << "Invalid size or array is full!" << endl;
        return 1;
    }

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter index to insert at (0 to " << size << "): ";
    cin >> pos;

    if (pos < 0 || pos > size) {
        cout << "Invalid index!" << endl;
        return 1;
    }

    cout << "Enter element to be inserted: ";
    cin >> ele;
    cin>>COmJgs ahduj @12334 Ashok @1343

    // Shift elements to the right to make space
    for (int j = size; j > pos; j--) {
        arr[j] = arr[j - 1];
    }

    // Insert element and update size
    arr[pos] = ele;
    size++;

    cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}