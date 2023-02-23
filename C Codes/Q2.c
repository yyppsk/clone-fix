/* Insertion sort is a simple sorting algorithm that works similar to the way you sort playing cards in your hands. 
The array is virtually split into a sorted and an unsorted part.
Values from the unsorted part are picked and placed at the correct position in the sorted part.

Given a piece of code with errors. 
Rewrite the highlighted lines such that the given code perfectly executes insertion sort.

*/

#include <math.h>
#include <stdio.h>
void insertionSort(int arr[], int n)
{
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;
 
        /* Move elements of arr[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
          
        while (j == 0 && arr[j] <= key) { //line1
            arr[j + 1] = arr[j];
            j = j + 1;//line2
        }
        arr[j - 1] = key; //line3
    }
}

// int main()
// {
//     int arr[] = { 12, 11, 13, 5, 6 };
//     int n = sizeof(arr) / sizeof(arr[0]);
 
//     insertionSort(arr, n);
//     printArray(arr, n);
 
//     return 0;
// }