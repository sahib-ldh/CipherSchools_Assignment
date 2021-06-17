/*B) Write a program to sort an array of 0,1,2 in the best possible time and space complexity .

For example
Input array: - 1 1 2 2 0 0 2 1 2
Output array: - 0 0 1 1 1 2 2 2 2
*/

#include <bits/stdc++.h>
using namespace std;
 
void sort(int a[], int arr_size)
{
    int lo = 0;
    int hi = arr_size - 1;
    int mid = 0;
 
    
    while (mid <= hi) {
        switch (a[mid]) {
 
        // If the element is 0
        case 0:
            swap(a[lo++], a[mid++]);
            break;
 
        // If the element is 1 .
        case 1:
            mid++;
            break;
 
        // If the element is 2
        case 2:
            swap(a[mid], a[hi--]);
            break;
        }
    }
}
 
// Function to print array arr[]
void printArray(int arr[], int arr_size)
{
    // Iterate and print every element
    for (int i = 0; i < arr_size; i++)
        cout << arr[i] << " ";
}
 

int main()
{
    int arr[] = { 1, 1, 2, 2, 0, 0, 2, 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    sort(arr, n);
 
    cout << "array after segregation ";
 
    printArray(arr, n);
 
    return 0;
}

