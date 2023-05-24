#include <iostream>
using namespace std;

class selection
{
public:
    int i, j, min, pos;

public:
    void selection_sort(int array[], int size);
    void print(int array[], int size);
};

void selection ::selection_sort(int array[], int size)
{
    for (j = 0; j < size; j++)
    {
        min = array[j];
        pos = j;
        for (i = j + 1; i < size; i++)
        {
            if (min > array[i])
            {
                min = array[i];
                pos = i;
            }
        }
        array[pos] = array[j];
        array[j] = min;
    }
}

void selection ::print(int array[], int size)
{
    cout << "The sorted array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << "   " << array[i];
    }
    cout << "\n";
}

int main()
{
    selection obj;
    int array[20];
    int size;
    cout << "\n\t How many elementys to insert the data :- ";
    cin >> size;
    cout << "\n\t Enter the number :- ";
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    cout << "\n\t The array is before sorting elements are = ";
    obj.print(array, size);
    obj.selection_sort(array, size);
    cout << "\n\t The array is after sorting elements are = ";
    obj.print(array, size);
    return 0;
}