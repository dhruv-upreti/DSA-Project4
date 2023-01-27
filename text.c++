#include <iostream>
using namespace std;

int countGreater(int A[], int N) {
    int count = 1; // Initialize count as 1 for the first element
    int max = A[0]; // Set max as the first element
    for (int i = 1; i < N; i++) {
        if (A[i] > max) { // Check if current element is greater than max
            max = A[i]; // Update max
            count++; // Increment count
        }
    }
    return count;
}

int main() {
    int A[] = { 7, 4, 8, 2, 9 };
    int N = sizeof(A) / sizeof(A[0]);
    cout << countGreater(A, N) << endl;
    return 0;
}
