#include<iostream>
#include <chrono>
using namespace std;

int main(){
    auto start = chrono::high_resolution_clock::now();
    long long sum = 0;
    for(long long i = 0; i<100000000;i++){
             
        sum +=i;
    }
    auto end = chrono::high_resolution_clock::now();

    auto duration = chrono::duration_cast<chrono::milliseconds>(end-start);
    cout<< "Sum: "<<sum<<endl;
    cout<< "Execution time: "<<duration.count()<<" milliseconds "<<endl;


return 0;
}
