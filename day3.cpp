/*So we are given 8 balls and we have to find the odd one!*/
#include<iostream>
using namespace std;

int odd(){
    int ball1 = 0,ball2 = 0,ball3 = 0,ball4 = 0,ball5 = 0,ball6 = 0,ball7 = 0,ball8 = 0;
    int H_B;
    cout<<"Whis ball is the odd one: ";
    cin>>H_B;
    int balls[8]={ball1,ball2,ball3,ball4,ball5,ball6,ball7,ball8};
    balls[H_B-1]=1;

    //1st use
    int left,right;
    left = balls[0]+balls[1]+balls[2];
    right = balls[3]+balls[4]+balls[5];//keep ball 7 and 8

    if(left == right){
        // 2nd use
        int left2_0,right2_0;
        left2_0=balls[6];
        right2_0=balls[7];

        if(left2_0>right2_0){
            cout<<"The odd ball is: ball7"<<endl;
        }
        else{
            cout<<"The odd ball is: ball8"<<endl;
        }
    }
    else if (left>right)
    {
        if(balls[0]==balls[1]){
            cout<<"The odd ball is: ball3"<<endl;
        }
        if(balls[0]>balls[1]){
            cout<<"The odd ball is: ball1"<<endl;
        }
        if(balls[0]<balls[1]){
            cout<<"The odd ball is: ball2"<<endl;
        }
    }
    else if (left<right){
        if(balls[3]==balls[4]){
            cout<<"The odd ball is: ball6"<<endl;
        }
        else if (balls[3]>balls[4])
        {
            cout<<"The odd ball is: ball4"<<endl;
        }
        else if (balls[3]<balls[4])
        {
            cout<<"The odd ball is: ball5"<<endl;
        }
        
    }
    return 0;
}
int main(){
    odd();
    
}