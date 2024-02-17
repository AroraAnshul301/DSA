#include <bits/stdc++.h>
using namespace std;
int quickSort(int *arr, int low, int high)
{
    int pivot = arr[high];
    int i = low-1;
    int j = low;
    while (j<=high)
    {
        if (arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
        j++;
    }
    swap(arr[i+1], arr[high]);
    return (i+1);
}
void sort(int *arr, int low, int high)
{
    if (low < high)
    {

        int pivot = quickSort(arr,low,high);
        sort(arr, low, pivot - 1);
        sort(arr, pivot + 1, high);
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
