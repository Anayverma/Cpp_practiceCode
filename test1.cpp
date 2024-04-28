#include <iostream>

using namespace std;

// Function to double the values of a 1D array and return it
int* doubleArrayValues(int arr[]) {
    // Allocate memory for a new array to store doubled values
    int doubledArr[3] ,*p=;
    cout<<*(arr+2);

    // Return the pointer to the new array
    return arr;
}

int main() {
    // Example usage of doubleArrayValues function
    int arrayToDouble[4] = {1, 2, 3, 4};

    // // Call function to double the values of arrayToDouble
    int* doubledArray = doubleArrayValues(arrayToDouble);

    // // Output the original array
    // cout << "Original Array: ";
    // for (int i = 0; i < 4; ++i) {
    //     cout << arrayToDouble[i] << " ";
    // }
    // cout << endl;

    // // Output the doubled array
    // cout << "Doubled Array: ";
    // for (int i = 0; i < 4; ++i) {
    //     cout << doubledArray[i] << " ";
    // }
    // cout << endl;

    // // Free the dynamically allocated memory to prevent memory leaks
    // delete[] doubledArray;

    int p={42};
    int *a=&p;
    // cout<<p;
    return 0;
}
