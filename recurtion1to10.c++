#include<iostream>
using namespace std;

//from 1 to 10
void count(int a){
    if(a<=10){
        cout<<a<<endl;
        count(a+1);
    }else{
        return;
    }
}

//from 10 to 1 normally

void countReverse(int b){
    if(b>=0){
        cout<<b<<endl;
        countReverse(b-1);
    }else{
        return;
    }
}



int main(){
    count(1);
    countReverse(10);
}