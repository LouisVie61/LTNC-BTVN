#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int left, int right, int target_value)
{
    if(left == right)
    {
        if(a[left] != target_value)
        {
            return -1;
        }
        else
            return left;
    }
    else
    {
        int mid = (left + right) / 2;
        if(a[mid] == target_value)
        {
            return mid;
        }
        else
        {
            if(target > a[mid])
            {
                return binarySearch(a, mid + 1, right, target_value);
            }
            else
            {
                return binarySearch(a, left, mid - 1, target_value);
            }
        }
    }
}

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8. 9, 10}
    for(auto it : arr)
    {
        cout << binarySearch(arr, 1, 10, it);
    }
}
