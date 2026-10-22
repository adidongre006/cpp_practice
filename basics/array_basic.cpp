#include<iostream>
#include<array>
#include <algorithm>
using namespace std;

// -----------------------  REVERSE ARRAY-----------------//
void REVERSE_ARRAY(int array[],int size){

    printf("REVERSE ARRAY:");
    int start = 0;
    int end = size -1;
    while(start<end){
        int temp = array[start];
        array[start] = array[end];
        array[end]= temp;

        start++;
        end--;

    }

//     REVERSE ARRAY:Printing the array
// 25 91 18 15 12 
// Printing arr DONE
}



// -----------------------  PRINt ARRAY-----------------//


void PrintARR(int arr[],int size){
    int n = size;
    cout<<"Printing the array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        
        }
        cout<<endl;

        cout<<"Printing arr DONE"<<endl;
cout<<endl;
}

// -----------------------  ADD THE ELEMENT IN THE ARRAY-----------------//

void INSERT_ELEMENT(int arr[],int size,int position,int value){
    int n = size;
    
    
    for(int i = n;i>position;i--){
        arr[i] = arr[i-1];
    }
    arr[position] = value;
    n++;

    // print the array
    PrintARR(arr,size);
}

// -----------------------  delete the element from the array -----------------//

void DELETE_ELEMENT(int arr[],int size,int position){
    int n = size;
    for(int i= position;i<n-1;i++){
        arr[i] = arr[i+1];

    }
    n = n-1;
    cout<<"Printing the array without the element at the position: "<<position<< endl;
    PrintARR(arr,n); // remove the element 9

}

// -----------------------  SEARCH  ELEMENT-----------------//

void SEARCH_ELEMENT(int arr[],int size,int target){
    int n = size;
    int index = -1;
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            index = i;
            break;
        }
    }
cout <<index<<endl;// element 7 at position 2
}


// -----------------------  BINARY SEARCH----------------


void BINARY_SEARCH(int arr[],int size,int element){
int n = size;
int* result = lower_bound(arr,arr+n,element);

// lower_bound(begin,end,element)// for understanding
if(result!= arr + n && *result == element){
    cout<<result - arr;
}else{
    cout<<"Not found"<<endl;
}

}









int main(){
    array<int,5> array1 = {1,6,7,8,9} ;
    int size = array1.size();
    PrintARR(array1.data(),size);

    // int position= 1;
    // int value = 5;

// INSERT_ELEMENT(array1.data(),size,position,value);

// DELETE_ELEMENT(array1.data(),size,4);// delete the element 9


// SEARCH_ELEMENT(array1.data(),size,7);// search the element 7




return 0;
}











// //  int size = 5;
    
//     int arr[3] ={5,17,8} ;
//     int arr1[15] ={5,17,8} ;

//     cout<<"The value at the index "<< 2 << " is "<<arr[2]<<endl; // actual value 
//     cout<<"The value at the index " << 5 << " is "<<arr[5]<<endl; // garbage value

//     for(int i :arr){
//         cout<<i<<" ";
// // 5 17 8 


//     }
//     cout<<endl;
//     for(int i :arr1){
//         cout<<i<<" ";
// // 5 17 8 0 0 0 0 0 0 0 0 0 0 0 0 

//     }
//     cout<<endl;

//     int arr2[5]={0}; // initializing all the location with 0
//     int arr3[5]={1}; // but not initializing all the location with 1

//     for(int i=0;i<5;i++){
//         cout<<arr2[i]<<" ";
//         // 0 0 0 0 0 

//     }
//     cout<<endl;

//     for(int i:arr3){
//         cout<<i<< " ";
//         // 1 0 0 0 0 
//     }
//     cout<<endl;




// int arr5[]={1,2,3,4,5};

// int size = sizeof(arr5)/sizeof(arr5[0]);
// PrintARR(arr5,size);

// REVERSE_ARRAY(arr5,size);
// PrintARR(arr5,size);

// array<int,5> arr6={12,15,18,91,25};
// int size6= arr6.size();
// // array<data_type,size> name_of_array;
// REVERSE_ARRAY(arr6.data(),size6);
// PrintARR(arr6.data(),size6);









