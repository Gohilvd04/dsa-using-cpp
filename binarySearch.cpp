#include <iostream>
using namespace std;
int rbin(int arr[], int low, int high, int key)
{
    if (low <= high)
    {
        int mid = (low + high) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            return rbin(arr, low, mid - 1, key);
        }
        else if (key > arr[mid])
        {
            return rbin(arr, mid + 1, high, key);
        }
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter size of array:";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"arr"<<i<<"=";
        cin >>arr[i];
    }
    int key;
    cin >> key;
    int result = rbin(arr, 0, n - 1, key);
    if (result == -1)
    {
        cout << "element is not found";
    }
    else
    {
        cout <<"element present in index no:"<< result;
    }

    return 0;
}