#include<iostream>
using namespace std;
void printReverse(int n){
    if(n==0)
        return;
    else{
        int r = n%10;
        cout<<r;
        printReverse(n/10);
    }
}
int main(){
    int n;
    cout<<"Enter the number whose reverse you want:";
    cin>>n;
    printReverse(n);
    return 0;
}