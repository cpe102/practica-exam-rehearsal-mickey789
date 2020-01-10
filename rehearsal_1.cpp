#include<iostream>
#include<string>
using namespace std;


string N;
float G;

int main(){
    cout << "What is your name?: ";
    cin >> N;
    cout << "What is your GPA?: ";
    cin >> G;
    if(G >= 3.50){
        cout << N << " InW Jrim Jrim!!!";
    }else{
        cout << "Try harder, " << N <<"!!!";
    }
    return 0;

}


