
///----------- Standard template Library ----------------
#include<vector>
#include<iostream>
using namespace std;












void PrintVector(vector<int> a){

    // modern for loop 
    for (int x : a){
        cout<<x<<" ";

        
    }

    cout<<endl;
      cout<<"size before adding the extra element : "<<a.size()<<endl;// 3
      cout<<"capacity before adding the extra element : "<<a.capacity()<<endl;//3
    a.push_back(40);// adding the element to the last 

    // traditional for loop 
    for(int x = 0; x<a.size(); x ++){
        int t = a[x];
        cout<<t<<" ";
    }
    cout<<endl;
    // basic function of vectors 

  
    // cout<<a[0]<<endl;
    
     cout<<"size after adding the extra element : "<<a.size()<<endl; // 4
      cout<<"capacity after adding the extra element : "<<a.capacity()<<endl;// 6 (double the memory size of original)
     cout<<"check is the vector is empty : "<<a.empty()<<endl; // 0
     cout<<" front / first element : "<<a.front()<<endl;//10
     cout<<" back / last element : "<<a.back()<<endl;// 40
     a.insert(a.begin(),100); // insert the element in the front most 
  a.pop_back(); // remove the 40
  
    //  cout<<" remove the last element : "<<<<endl;//  remove 40

    //  cout<<" add the element in the front  : "<<a.insert(a.begin(),100)<<endl;// add the 100 at the front most 
    //  cout<<"clear the  element : "<<a.clear()<<endl;//

    for (int i : a){
        cout<<i<< " ";
    }
    cout<<endl;
   


    a.clear(); // clear the vector 

 for (int i : a){
        cout<<i<< " ";
    }
    cout<<endl;
    cout<<"the final size of vector a : "<<a.size()<<endl; //
    cout<<"the final capicity of vector a : "<<a.capacity()<<endl; // the memory allocation remeins the constant

    // to clear + release storage 
    vector<int>().swap(a);
    cout<<"the final capicity of vector a : "<<a.capacity()<<endl;// clear the memory and and the elemrnts 

}



int main(){

    vector<int> a = {10,20,30};
    PrintVector(a);

return 0;
}