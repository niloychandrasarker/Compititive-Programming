#include<bits/stdc++.h>
using namespace std;

int main() 
{
    // Step a: Create an array with n elements
    int n;
    cout << "Enter the size of the array (n): ";
    cin >> n;

    int ar[20];

    cout << "Enter " << n << " elements for the array:" << endl;
    for (int i = 0; i < n; ++i) 
    {
        cin >> ar[i];
    }

    cout << "Original array: ";
    for (int i = 0; i < n; ++i) 
    {
        cout << ar[i] << " ";
    }
    cout << endl;

    // Step b: Insert an element at any position and print the updated arrray
    int element, position;
    cout << "Enter the element to insert: ";
    cin >> element;
    cout << "Enter the position to insert (1-based index): ";
    cin >> position;

    if (position >= 1 && position <= n + 1) 
    {
        for (int i = n; i >= position; i--) 
        {
            ar[i] = ar[i - 1];
        }
        ar[position - 1] = element;

        cout << "ar after inserting " << element << " at position " << position << ": ";
        for (int i = 0; i < n + 1; ++i) 
        {
            cout << ar[i] << " ";
        }
        cout << endl;
    } 
    else 
    {
        cout << "Invalid position to insert." << endl;
    }

    // Step c: Insert an element at the last index and print the array
    int last_element;
    cout << "Enter the element to insert at the last index: ";
    cin >> last_element;
    ar[n] = last_element;

    cout << "ar after inserting " << last_element << " at the last index: ";
    for (int i = 0; i < n + 1; ++i) 
    {
        cout << ar[i] << " ";
    }
    cout << endl;

    // Step d: Delete an element from any index
    int index;
    cout << "Enter the index to delete an element: ";
    cin >> index;

    if (index >= 0 && index < n + 1) 
    {
        int deleted_element = ar[index];
        for (int i = index; i < n; ++i) 
        {
            ar[i] = ar[i + 1];
        }

        cout << "Deleted element from index " << index << ": " << deleted_element << endl;

        // Step e: Print the updated ar and the data that was deleted
        cout << "Updated array: ";
        for (int i = 0; i < n; ++i) 
        {
            cout << ar[i] << " ";
        }

    } 
    else 
    {
        cout << "Invalid index to delete." << endl;
    }

    return 0;
}
