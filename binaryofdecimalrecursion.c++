#include<iostream>
using namespace std;

int t1 = 0, t2 = 1, nextTerm = 0, n;
void binary(){

     nextTerm = t1 + t2;

    if(nextTerm <= n) {
        cout << nextTerm << ", ";
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        binary();
    }else{
        return;
    }
}


int main(){

cout << "Enter a positive number: ";
    cin >> n;

    // displays the first two terms which is always 0 and 1
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", ";


    binary();
}