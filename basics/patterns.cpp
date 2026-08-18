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
  // --------------------------------------------------------------

int TrianglePatternCount(){
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    int row=1;
    while(row <= n){
        int col = 1;
        while(col<=row){
            cout<<row-col+1;
            col ++;


        }
        cout<<endl;
        row++;

    }
    
 return 0;
// 1
// 21
// 321
// 4321
// 54321


    }
     // ------------------------------------------------------------------ 
  // --------------------------------------------------------------

void SquareString(){
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    int row=1;
    // char ch = "A"; " ": create an const char
    // ' ' : creates the normal char
    char start = 'A';
    while(row <= n){
        int col = 1;
        while(col<=n){
            // char ch = 'A' + col -1 ;
            cout<<start << " ";
            col ++;
            start++;


        }
        cout<<endl;
        row++;

    }
    
//  return 0;
     // cout: 'A' + row -1;

// A A A A A 
// B B B B B 
// C C C C C 
// D D D D D 
// E E E E E 
  //---------------
    // cout : 'A' + col -1;
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
// A B C D E 
 // -------- ---------: start= 'A'
//   cout<< start;
//   start = start +1;
// A B C D E 
// F G H I J 
// K L M N O 
// P Q R S T 
// U V W X Y 
//------------------------


    }
     // ------------------------------------------------------------------ 

 // --------------------------------------------------------------

void SquareStringTricky(){
    int n;
    cout<<"enter the value of n :"<<endl;
    cin>>n;
    int row=1;
     // row + col -1 --->> A;
    //  row + col - 1 + A = 1+A;

    // row + col - 1 + A -1 = 1+A-1
    // A + row +col -2 = A;

    char start = 'A';
    while(row <= n){
        int col = 1;
        while(col<=n){
            
           char ch = 'A' + row +col - 2 ;
           cout<< ch << " ";
            col ++;
            


        }
        cout<<endl;
        row++;

    }
// A B C D E 
// B C D E F 
// C D E F G 
// D E F G H 
// E F G H I 


}
void TriangleStrig(){
    int n ;
    cout<<"Enter the value of n"<< endl;
    cin >> n;
    int row = 1;
    while(row<=n){
        int col = 1;
        char value = 'A';
        while(col<=row){
            // char ch = 'A'+ row - 1;
            cout<<value << " ";
            col++;
            value++;

        }
        cout<< endl;
        row ++;

    }
    // cout << char ch = A + row -1;

// A 
// B B 
// C C C 
// D D D D 
// E E E E E 

//-------------------------
// cout << value = A ; val++;
// A 
// A B 
// A B C 
// A B C D 
// A B C D E 
//-----------------------------------------------

}
void TriangleReverse(){
    int n ;
    cout<<"Enter the value of n"<< endl;
    cin >> n;
    int row = 1;
    
    while(row<=n){
        int space = n- row;
        int col = 1;
        //space print karlo
        while(space){
            cout<<" ";
            space--;
        }
        // star print karlo
       
        while(col<=row){
          
            cout<<row;// "*"
            col++;
          

        }
        cout<< endl;
        row ++;

    }
   

///      cout: "*"
//     *
//    **
//   ***
//  ****
// *****
///-------------------
// cout:row

//     1
//    22
//   333
//  4444
// 55555
// 

// --------------------------------------------


}
//-------------------------------------------
void TriangleReverse1(){
    int n ;
    cout<<"Enter the value of n"<< endl;
    cin >> n;
    int row = n;
    
    while(row>=1){
        int col = 1;
        while(col<=row){
            cout<<"*"<<" ";
            col++;

        }
        cout<<endl;
        row--;


     
    }
   

// * * * * * 
// * * * * 
// * * * 
// * * 
// * 





}
//-------------------------------------------
void TriangleReverse2(){
    int n ;
    cout<<"Enter the value of n"<< endl;
    cin >> n;
    int row = 1;
    
    while(row<=n){
        // space print karo
        int space = n-row;
        while(space){
            cout<<" ";
            space--;

        }
        int col = 1;
        while(col<=row){
            cout<<"*";
            col++;
        }
        cout<<endl;
        row++;


     
    }
   

//     *
//    **
//   ***
//  ****
// *****




}
//-------------------------------------------
void TriangleReverse3(){
    int n ;
    cout<<"Enter the value of n"<< endl;
    cin >> n;
    int row = 1;
    
    while(row<=n){
        // space print karo
        int space = row - 1;
        while(space){
            cout<<" ";
            space--;

        }
        int col = n - 1;
        while(col>=row){
            cout<<row;// // "*"
            col--;
        }
        cout<<endl;
        row++;


     
    }
//    cout : star *

// ****
//  ***
//   **
//    *
// ----------------
// cout : row
// 1111
//  222
//   33
//    4



}
//-------------------------------------------
//-------------------------------------------
void TriangleTricky1(){
    int n ;
    cout<<"Enter the value of n"<< endl;
    cin >> n;
    int row = 1;
    

   while(row<=n){
     // priint space (1st triangle)
    int space = n-row;
    while(space){
        cout<<" ";
        space--;

    }
    /// print 2nd triangle 
    int col = 1;

    while(col<=row){
        cout<<col;
        col++;
    }
    // 3rd triangle
    int start= row-1;
    while(start){
        cout<<start;
        start--;

    }
    cout<<endl;
   row++;
   }
   
   ///
//     1
//    121
//   12321
//  1234321
// 123454321






}
//-------------------------------------------
void TriangleTricky1(){
    int n ;
    cout<<"Enter the value of n"<< endl;
    cin >> n;
    int row = n;
    

   while(row >=1 ){
    // 1st triangle
    int col=1;

    while(col<=row){
        cout<<col;
        col++;


    }
    // 2nd triangle
    int second= n-1;
    
    cout<<endl;
    row--;


   }




}
//-------------------------------------------


int main(){

    // squarePattern();
    // countSquare();
    // TrianglePattern();
    // TrianglePatternNum();
    // TrianglePatternCount();
    // SquareString();
    //  SquareStringTricky();
    // TriangleStrig();
    // TriangleReverse();
    // TriangleReverse1();
    // TriangleReverse2();
    // TriangleReverse3();
    // TriangleTricky1();
    TriangleTricky2();
    


return 0;
}