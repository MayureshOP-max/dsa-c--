#include<iostream>
using namespace std;

int b;

void table(int a){
    if(a<=10){
        cout<<a*b<<endl;
        table(a+1);
    }else{
        return;
    }
}

int main(){
    cout<< "enter the number you want table of: ";
    cin>>b;
    table(1);
}