#include<iostream>
using namespace std;

void msg(int a){
    if(a<=5){
        cout<<"Helloo"<<endl;
        msg(a+1);
    }else{
        return;
    }
}

int main(){
    msg(1);
    return 0;
}