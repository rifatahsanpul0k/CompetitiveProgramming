#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int> array, int n)
{
    int temp;
    for (int i = 0; i < array.size(); i++)
    {
        for (int j = i; j > 0; j--)
        {
            temp = array[j];
            if (temp < array[j - 1])
            {
                array[j] = array[j - 1];
                array[j - 1] = temp;
            }
            else
                continue;
        }
    }
    for (int n : array)
    {
        cout << n << " ";
    }
}

int main()
{
    // declared the size
    // n = size
    int n;
    cout << "Number of elements and the array" << endl;
    cin >> n;
    vector<int> array(n);
    // this loop is for getting the array input
    for (int i = 0; i < n; i++)
    {
        array[i] = rand() % 100;
    }
    for (int n : array)
    {
        cout << n << " ";
    }
    cout << "\n .........After Sorting.........\n";
    insertionSort(array, n);
}