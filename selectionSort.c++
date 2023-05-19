#include<iostream>
using namespace std;

class sort{
    public:
        int i,j,n,t,size,min,pos;
        int arr[20];
        
    public:
        void selction_sort();
        void print();

};

void sort :: selction_sort(){
    cout<<"\n\t How many elements to enter: ";
    cin>>size;
    cout<<"\n\t Enter the number: ";
    for(int i=0; i<size; i++)
    {
        cin>>arr[i];
    }
    for(j=0;j<n;j++){
        min = arr[j];
        pos = j;
        for(i=j+1; i<n; i++){
            if(min>arr[i]){
                min=arr[i];
                pos=i;
            }
        }
        arr[pos]=arr[j];
        arr[j]=min;

    }
}

void sort :: print(){
    cout << "\n\t The elements are: ";
    for(int i=0;i<size;i++){
        cout<< " "<<arr[i];
    }    
    cout<<"\n";
}

int main(){
    sort obj;
    obj.selction_sort();
    cout << "\n\t The sorted elements are: ";
    obj.print();
    return 0;
}