#include<iostream>
#include <cstdint>
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
    int n;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    bool isPrime = true;
    for(int i = 2;i<n-1;i++){
        if(n%i==0){
            isPrime = false;
            break;

        }
    }
    if(isPrime){
        cout<<"The number "<< n <<" is Prime Number"<<endl;

    }else{
        cout<<"The Number "<< n << " is not an prime Number"<<endl;
    }
}

void numberExtract(){
    int n;
    cout<<"Enter the value of n:"<<endl;
    cin>>n;
    int prod = 1;
    int sum  =0;
    while(n!=0){
        int digit=n%10;
        prod = prod * digit;
        sum = sum + digit;
        n= n/10;

    }

    cout<<"Product of the digits :"<< prod << endl;
    cout<<"Sum of the digits :"<< sum << endl;
   
}


/* 
Imp Questions
*/
// No of one ( 1 ): bit :

void numberOfOneBit(){

    // brian kernighan algo
   int n ;
   cout<<"Enter the value of n  : "<<endl;
   cin>>n;
   
   
   int count = 0;
   

   while(n){
    n &=(n- 1);
    count++;
   }
   cout<<"The number of one bits are : "<<count<<endl;
}
// -----------------------------------------

int reverseInteger(){
    int n;
    cout<<"Enter the value of n: "<<endl;
    cin>>n;
int x = n;
    // logic 
    int rev = 0;
    while (n){
int digit=n%10;
rev = rev*10+ digit;
n= n/10;
       
    }
    cout << "The reverse of : "<< x <<" is : "<<rev<< endl;
    return 0;
    
}


//----------------------------------------------

void ComplementNumber(){
    int n ;
    cout<<"Enter the value of n :"<<endl;
    cin>>n;
    int mask = 0;
    int temp = n;
    while(temp){
        mask = (mask << 1)|1;
        temp = temp>>1; 
    }
    int ans = mask ^ n;
    cout<< "The complement of : "<< n << " is : "<<ans<<endl;

}
//-------------------------------------

// complement of base 10 integer
void complementBaseTen(){
    
}

// ---------------------------------------------------------

int main(){
// basicOperation();
// fibonacci();
// PrimeNum();

// numberExtract();

// reverseInteger();

// ComplementNumber();




return 0;
}