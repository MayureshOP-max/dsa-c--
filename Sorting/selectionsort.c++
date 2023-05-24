#include<iostream>
using namespace std;

class selection{
    public:
        int i,j,size,t,min,a[20];
        void selection_sort();
        void print();
};

void selection :: selection_sort(){
    cout<<"Enter the number of elemets to sort: ";
    cin>>size;
    cout<<"Enter the elements of array to sort: ";
    for(j=0;j<size;j++){
        min = a[j];
    }
}