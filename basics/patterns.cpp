#include<iostream>
using namespace std;




int squarePattern(){
    int n;
    cout<<"enter the value of n:"<< endl;
    cin>>n;
    int i= 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<< n-j+1 ;
            j++ ;// j= j+1;

        }
        cout<<endl; 
        i++;//i = i+1  
     }
     return 0;
  
    //  if cout = j
// 12345
// 12345
// 12345
// 12345
// 12345
// -------------------------
   // if cout = n-j+1
// 54321
// 54321
// 54321
// 54321
// 54321

}
// --------------------------------------------------------------

int countSquare(){
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    int i=1;
    int count = 1;
    while(i<=n){
        int j= 1;
        while(j<=n){
            cout<<count<<" ";
            j= j+1;
              count ++;
        }
        cout<<endl;
        i = i+1;
      

    }
    return 0;


// 1 2 3 4 5 
// 6 7 8 9 10 
// 11 12 13 14 15 
// 16 17 18 19 20 
// 21 22 23 24 25 
}

// --------------------------------------------------------------

int TrianglePattern(){
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    int row=1;
    while(row <= n){
        int col = 1;
        while(col<=row){
            cout<<"*";
            col ++;


        }
        cout<<endl;
        row++;

    }
    
 return 0;
// *
// **
// ***
// ****
// ***** 


    }
     // ------------------------------------------------------------------
// --------------------------------------------------------------

int TrianglePatternNum(){
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    int row=1;
    int count= 1;
    while(row <= n){
        int col = 1;
        while(col<=row){
            cout<<count<<" ";
            col ++;
            count = count +1;


        }
        cout<<endl;
        row++;

    }
    
 return 0;
    /// cout<< row
// 1
// 22
// 333
// 4444
// 55555
// ---------------------
  // cout << count
// 1 
// 2 3 
// 4 5 6 
// 7 8 9 10 
// 11 12 13 14 15 

// ---------------




}
// ------------------------------------------------------------------
   





int main(){

    // squarePattern();
    // countSquare();
    // TrianglePattern();
    // TrianglePatternNum();


return 0;
}