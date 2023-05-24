#include <iostream>
using namespace std;

class bubble
{
public:
    int i, j, size, t, a[20];
public:
    void bubble_sort();
    void print();
};

void bubble ::bubble_sort()
{
    cout << "Enter no of elements : ";
    cin >> size;
    cout << "Enter the elements to sort : ";
    for (int i = 0; i < size; i++ )
    {
        cin >> a[i] ;
    }
    for (j = 1; j < size - 1; j++)
    {
        for (i = 0; i < size-j; i++)
        {
            if (a[i] > a[i + 1])
            {
                t = a[i];
                a[i] = a[i + 1];
                a[i + 1] = t;
            }
        }
    }
}

void bubble ::print()
{
    cout << "The sorted array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << a[i] <<"\n";
    }
    cout<<"\n";
}

int main(){
    bubble obj;
    obj.bubble_sort();
    obj.print();
    return 0;
}