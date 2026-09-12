#include<iostream>
#include <cmath>
using namespace std;


//--------------------- --------------

void decimalToBinary(){
   long int n;
    cout<<"Enter the value of n: "<< endl;

    cin>>n;
   long int ans = 0;
    int i = 0;

    while(n!=0){
        int bit = n&1;
        ans = (bit * pow(10,i) )+ ans;  
        // ans = ans *10 + bit; wrong method to add the bits <--
        n = n>>1;
     
        i++;

    }
    cout<<"The Answer is :"<<ans<<endl;


}
//--------------------- --------------

void binaryToDecimal(){
    long int n;
    cout<<"Enter the value of n: "<< endl;

    cin>>n;
   long int ans = 0;
   int i = 0;
   while(n!=0){
    int digit = n %10;
    if(digit == 1){
ans = ans +  pow(2,i);

    }
   n = n /10;
    i++;
   }
    cout<<"The Answer is : "<<ans<<endl;
   
}


int main(){
decimalToBinary();
// binaryToDecimal();

return 0;
}