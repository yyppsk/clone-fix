'''
An Armstrong number is one whose sum of digits raised to the power three equals the number itself
complete the following code such that it checks whether the number is Armstrong or not.

For example : 3^3 + 7^3 + 1^3 = 371

'''

def binary_search(arr, l, r, x):
    if r >= l:
        mid = l + (r - l)//2
        if arr[mid] == x:
            return mid
        elif arr[mid] > x:
            return binary_search(arr, l, mid-1, x)
        else:
            return binary_search(arr, mid+1, r, x)
    else:
        return -1


#arr = [2, 3, 4, 10, 40]
#n = len(arr)
#x = 10
#result = binary_search(arr, 0, n-1, x)
