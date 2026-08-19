#include<iostream>
using namespace std;



void basicOperation(){
    int a = 4 ;
    int b = 6;
    cout<<"a & b: And "<<(a&b)<<endl;
    cout<<"a | b : Or "<<(a|b)<<endl;
    cout<<"~a : Not "<<(~a)<<endl;
    cout<<"a ^ b : Xor "<<(a^b)<<endl;

    // left and right shift

    cout<<"17>>1: "<<(17>>1)<<endl;
    cout<<"17>>2: "<<(17>>2)<<endl;
    cout<<"19<<1: "<<(19<<1)<<endl;
    cout<<"19<<2: "<<(19<<2)<<endl;

    // pre and post increment 
    int i = 7;
    cout<<(i++)<<endl;//7,i=8
    cout<<(++i)<<endl;//9
    cout<<(i--)<<endl;//9,i=8
    cout<<(--i)<<endl;//7
    // for loop playing

    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;

    int x = 1;
    // for(;;) {
    //     if(x<=n){
    //         cout<<x <<endl;
    //     }else{
    //         break;
    //     }
    //     x++;
    // }

// for(int a = 0, b= 1;a>=0 && b>=1;a--,b--){
//     cout<<a<<" "<<b<<endl;
// }

// print the sum of the number:
cout<<"Sum of n numbers :"<<endl;
int sum = 0;
for (int j = 1; j<=n;j++){
    sum+=j;
    

}
 cout<<sum<<endl;
   
}

int fibonacci(){
    int n;
    cout<<"enter the value of n:"<<endl;
    cin>>n;
    int a= 0;
    int b = 1;
     cout<<a<<" ";
       cout<<b<<" ";

    for(int i = 1; i<=n;i++){
      
        int next  = a + b;

        cout<<next<<" ";
        a= b;
        b= next;


    }
    cout<<endl;
    return 0;
}

void PrimeNum(){
    
}




int main(){
// basicOperation();
// fibonacci();

return 0;
}