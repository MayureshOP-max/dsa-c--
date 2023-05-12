#include<iostream>
using namespace std;


void search(int arr[],int size,int x){
    int i;
    for(i=0;i<size;i++){
        if(arr[i]==x){
            cout<<"DATA is present at"<<i;
        }else{
            cout<<"data is not present";
        }
    }
};

int main(){
    int arr[]={2,5,8,4,6,9};
    search();
}