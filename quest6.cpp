#include<iostream>
using namespace std;
void printInReverseTheFirstNevenNaturalNumbers(int n,int count){
    if(count==0)
        return;
    else{
        printInReverseTheFirstNevenNaturalNumbers(n+2,--count);
        cout<<n<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the number of odd natural numbers:";
    cin>>n;
    int count = n;
    printInReverseTheFirstNevenNaturalNumbers(2,count); 
    return 0;
}