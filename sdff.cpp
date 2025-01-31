#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to print the array (permutation)
void printPermutation(vector<int>& arr) {
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
}

// Recursive function to generate permutations
void generatePermutations(vector<int>& arr, int k, int n) {
    if (k == n) { // Base case: if k reaches the end, print the permutation
        printPermutation(arr);
    } else {
        for (int i = k; i <= n; i++) {
            // Swap arr[k] and arr[i]
            swap(arr[k], arr[i]);
            
            // Generate permutations for the next index
            generatePermutations(arr, k + 1, n);
            
            // Backtrack: Restore the original array
            swap(arr[k], arr[i]);
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3}; // Example array
    int n = arr.size();
    cout << "Permutations of the array are:\n";
    generatePermutations(arr, 0, n - 1);