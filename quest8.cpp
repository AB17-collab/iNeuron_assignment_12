#include<iostream>
using namespace std;
void convertFromDecimalToBinary(int n,int i){
    if(i==0){
        int k=n>>i;
        if(k&1)
            cout<<1;
        else
            cout<<0;
    }
    else{
        int k=n>>i;
        if(k&1)
            cout<<1;
        else
            cout<<0;

        convertFromDecimalToBinary(n,--i);
    }
}
int main(){
    int n;
    cout<<"Enter the decimal number whose binary you want:";
    cin>>n;
    convertFromDecimalToBinary(n,31); 
    return 0;
}