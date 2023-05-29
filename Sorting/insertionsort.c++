#include<iostream>
using namespace std;

class InsertionSort{
    public:
        int i, j, value;
        void insertionsort();
        void print();
};

void InsertionSort :: insertionsort(int array[],int size){
    for(i=1;i<size;i++){
        value=array[i];
        for(j=i-1;j>=0 && a[j]>value;j--){
            array[j+1]=array[j];
        }
        array[j+1]=value;
    }
}
void InsertionSort :: print(int array[],int size){
    
}