#include <iostream>
using namespace std;


void printArray(int arr[], int size, string name) {
    cout << name << ": ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}


void reverseArray(int original[], int reversed[], int size) {
    for (int i = 0; i < size; i++)
        reversed[i] = original[size - 1 - i];
}


bool isSymmetrical(int arr1[], int arr2[], int size) {
    for (int i = 0; i < size; i++)
        if (arr1[i] != arr2[i])
            return false;
    return true;
}


int maxArray(int arr[], int size) {
    int maxVal = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > maxVal)
            maxVal = arr[i];
    return maxVal;
}


int minArray(int arr[], int size) {
    int minVal = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] < minVal)
            minVal = arr[i];
    return minVal;
}


int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}


void countEvenOdd(int arr[], int size, int &evenCount, int &oddCount) {
    evenCount = 0; oddCount = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0)
            evenCount++;
        else
            oddCount++;
    }
}


void diffArrays(int arr1[], int arr2[], int diff[], int size) {
    for (int i = 0; i < size; i++)
        diff[i] = arr1[i] - arr2[i];
}


bool allUnique(int arr[], int size) {
    for (int i = 0; i < size; i++)
        for (int j = i + 1; j < size; j++)
            if (arr[i] == arr[j])
                return false;
    return true;
}


double averageArray(int arr[], int size) {
    return sumArray(arr, size) / (double)size;
}




int main() {
    int size = 5;
    int original[5] = {10, 20, 30, 40, 50};
    int reversed[5];
    int differences[5];

    
    printArray(original, size, "Original Array");

    
    reverseArray(original, reversed, size);
    printArray(reversed, size, "Reversed Array");

    
    if (isSymmetrical(original, reversed, size))
        cout << "Is the array  symmetrical? Yes" << endl;
    else
        cout << "Is the array  symmetrical? No" << endl;

    
    cout << "Maximum in Reversed Array: " << maxArray(reversed, size) << endl;

    
    cout << "Minimum in Original Array: " << minArray(original, size) << endl;

    
    cout << "Sum of Original Array: " << sumArray(original, size) << endl;
    cout << "Sum of Reversed Array: " << sumArray(reversed, size) << endl;

    
    int evenCount, oddCount;
    countEvenOdd(original, size, evenCount, oddCount);
    cout << "Even Count: " << evenCount << ", ";
    cout << "Odd Count: " << oddCount << endl;

    
    diffArrays(original, reversed, differences, size);
    printArray(differences, size, "Differences between Original and Reversed Array");

    
    if (allUnique(original, size))
        cout << "Are all elements in the Orginal unique? Yes" << endl;
    else
        cout << "Are all elements in the Orginal arrya unique? No" << endl;

    
    cout << "Average of Original Array: " << averageArray(original, size) << endl;

    
  

    return 0;
}
