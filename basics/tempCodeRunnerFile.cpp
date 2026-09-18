#include<iostream>
using namespace std;





bool powerOFtwo(int n ){
    
return n> 0 && (n&(n-1))== 0;   
}


int main(){

    int testcase [] = {0,1,4,15,-8};
    for (int n : testcase){
        cout<<n<<(powerOFtwo(n) ? " True" : " False")<< endl;

    }
    

return 0;
}

