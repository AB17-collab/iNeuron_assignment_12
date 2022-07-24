#include<iostream>
using namespace std;
void printTheFirstNEvenNaturalNumbers(int n,int count){
    if(count==0)
        return;
    else{
        cout<<n<<" ";
        printTheFirstNEvenNaturalNumbers(n+2,--count);
    }
}
int main(){
    int n;
    cout<<"Enter the number of odd natural numbers:";
    cin>>n;
    int count = n;
    printTheFirstNEvenNaturalNumbers(2,count); 
    return 0;
}