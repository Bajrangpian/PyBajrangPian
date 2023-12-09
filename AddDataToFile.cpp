#include<iostream>

using namespace std;

void and_demo(){
    int math = 70;
    int eng = 80;
    if (math>=60 && eng>=75){
        cout<<"Pass \n";
    }else{
        cout<<"Fail \n";
    }
}

int main(){
    and_demo();
    return 0;
}