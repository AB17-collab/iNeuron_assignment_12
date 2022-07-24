#include<iostream>
using namespace std;
void printTheFirstNOddnumbers(int n,int count){
    if(count==0)
        return;
    else{
        cout<<n<<" ";
        printTheFirstNOddnumbers(n+2,--count);
    }
}
int main(){
    int n;
    cout<<"Enter the number of odd natural numbers:";
    cin>>n;
    int count = n;
    printTheFirstNOddnumbers(1,count); 
    return 0;
}