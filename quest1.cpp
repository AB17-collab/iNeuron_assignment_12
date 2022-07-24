#include<iostream>
using namespace std;
void printTheFirstNnumbers(int n){
    if(n==1){
        cout<<n<<" ";
        return;
    }
    printTheFirstNnumbers(n-1);
    cout<<n<<" ";
}
int main(){
    int n;
    cout<<"Enter the number of natural numbers:";
    cin>>n;
    printTheFirstNnumbers(n); 
    return 0;
}