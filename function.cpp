 // if(x)-f(x+1) = 2x+1 and f(6)=12, what is teh value of f(5)?
#include <iostream>
using namespace std;

int fn1(int x){
    if (x+1 == 6) {//we are given the function f(x+1) =12;
        return 12;
    }
    return 0; 
}
int final_ans(int x){
    int val_from_function__1 = fn1(x);
    int ans = ((2*5)-5+val_from_function__1);//f(X)=2x+1+f(x+1);
    cout<<"The ans of the function f(5)= "<<ans<<endl;
    return 0;
}
int main() {
    final_ans(5);
    return 0;
}