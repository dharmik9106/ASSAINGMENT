#include <iostream>
#include <vector>

using namespace std;

// Selection Sort
void selectionsort(vector<int> &arr, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallest])
            {
                smallest = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallest];
        arr[smallest] = temp;
    }
}

// Merge Function
void merge(vector<int> &arr, int start, int mid, int end)
{
    vector<int> temp;
    int i = start, j = mid + 1;

    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else
        {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while (i <= mid)
    {
        temp.push_back(arr[i]);
        i++;
    }

    while (j <= end)
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int k = 0; k < temp.size(); k++)
    {
        arr[start + k] = temp[k];
    }
}

// Merge Sort
void mergesort(vector<int> &arr, int start, int end)
{
    if (start < end)
    {
        int mid = start + (end - start) / 2;
        mergesort(arr, start, mid);
        mergesort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

// Linear Search
int linearsearch(vector<int> &arr, int value)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == value)
        {
            return i;
        }
    }
    return -1;
}

// Fixed Binary Search
int binarysearch(vector<int> &arr, int start, int end, int value)
{
    if (start <= end)
    {
        int mid = start + (end - start) / 2;

        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] < value)
        {
            return binarysearch(arr, mid + 1, end, value);
        }
        else
        {
            return binarysearch(arr, start, mid - 1, value);
        }
    }
    return -1; // ✅ Safe return when not found
}

// Display Array
void display(vector<int> &arr)
{
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;
}

// Main Program
int main()
{
    vector<int> arr;
    int n, choice, value;

    cout << "Enter number of elements: ";
    cin >> n;
    arr.resize(n);

    for (int i = 0; i < n; i++)
    {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    do
    {
        cout << endl
             << "---- MENU -----" << endl;
        cout << "1. Selection Sort" << endl;
        cout << "2. Merge Sort" << endl;
        cout << "3. Linear Search" << endl;
        cout << "4. Binary Search" << endl;
        cout << "5. Display Array" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            selectionsort(arr, arr.size());
            cout << "Array sorted using Selection Sort." << endl;
            break;
        case 2:
            mergesort(arr, 0, arr.size() - 1);
            cout << "Array sorted using Merge Sort." << endl;
            break;
        case 3:
        {
            cout << "Enter value to search: ";
            cin >> value;
            int idx = linearsearch(arr, value);
            if (idx == -1)
                cout << "No match found." << endl;
            else
                cout << value << " is located at index " << idx << endl;
            break;
        }
        case 4:
        {
            cout << "Enter value to search: ";
            cin >> value;
            int idx = binarysearch(arr, 0, arr.size() - 1, value);
            if (idx == -1)
                cout << "No match found." << endl;
            else
                cout << value << " is located at index " << idx << endl;
            break;
        }
        case 5:
            cout << "Current Array: ";
            display(arr);
            break;
        case 0:
            cout << "Exiting program." << endl;
            break;
        default:
            cout << "Enter valid choice!" << endl;
        }
    } while (choice != 0);

    return 0;
}
