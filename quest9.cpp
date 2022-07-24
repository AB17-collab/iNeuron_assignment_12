#include<iostream>
using namespace std;
void findOctalOfBinary(int n){
    if(n==0) return;
    else{
        int r = n%8;
        findOctalOfBinary(n/8);
        cout<<r;
    }
}
int main(){
    int n;
    cout<<"Enter the number whose octal you want:";
    cin>>n;
    cout<<"The Octal number is:";
    findOctalOfBinary(n);
    return 0;
}