#include<iostream>
using namespace std;


float sum = 0;
float x;
int main(){
    cout << "Enter x: ";
    cin >> x;
    while(x != 0){
        if(x > 0){
            sum += x;
        }else{
            ;
        }
        cout << "Enter x: ";
        cin >> x;
    }
    cout << "sum = " <<sum;
    return 0;

}



