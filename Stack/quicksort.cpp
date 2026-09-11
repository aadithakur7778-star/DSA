//quicksort code
#include <bits/stdc++.h>
using namespace std;
int partition(int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = low - 1;
    for (int j = low; j < high; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
          //  swap(arr[i], arr[j]);
          int temp = arr[i];
          arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    // place the pivot in the correct position
    //swap(arr[i + 1], arr[high]);
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    return i + 1;
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        //sort left partition
        quickSort(arr, low, pi - 1);
        //sort right partition
        quickSort(arr, pi + 1, high);
    }
}
int main()
{
    int n,arr[100];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    quickSort(arr, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}