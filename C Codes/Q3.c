/*
Ques1) Given below a code that is supposed to implement binary search recursively. There is an sure shot error at line1 
and line2. You have to rewrite the correct code such that function implements binary search.
*/

#include<stdio.h>
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
    int mid = l + (r - l)/2;
    if (arr[mid] == x)
        return mid;
    if (arr[mid] > x)
        return binarySearch(arr, l, mid+1, x);  //line1
    else
        return binarySearch(arr, mid+1, x, r);  //line2
    }
    return -1;
}

// int main(void)
// {
// int arr[] = {2, 3, 4, 10, 40};
// int n = sizeof(arr)/ sizeof(arr[0]);
// int x = 10;
// int result = binarySearch(arr, 0, n-1, x);
// return 0;
// }