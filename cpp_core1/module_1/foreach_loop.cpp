#include <iostream>
#include <vector>
using namespace std;

/*************************************
 * This Shows how to us a for loop in a
 * foreach configuration.
 **************************************/
int main()
{
    // example 1: array
    int arr[] = {1, 2, 3, 4, 5};
    cout << "The elements in the arr are: ";
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    // example 2: using auto
    int array[] = {1, 4, 7, 4, 8, 4};
    cout << "The elements in the array are: ";
    for (auto var : array)
    {
        cout << var << " ";
    }
    cout << endl;

    // example 3: using vectors
    vector<int> vec = {11, 22, 33, 44, 55, 66};
    cout << "The elements in the vec are: ";
    for (auto var : vec)
    {
        cout << var << " ";
    }
    cout << endl;

    return 0;
}