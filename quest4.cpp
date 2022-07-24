#include<iostream>
using namespace std;
void printInReverseTheFirstNOddnumbers(int n,int count){
    if(count==0)
        return;
    else{
        printInReverseTheFirstNOddnumbers(n+2,--count);
        cout<<n<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the number of odd natural numbers:";
    cin>>n;
    int count = n;
    printInReverseTheFirstNOddnumbers(1,count); 
    return 0;
}