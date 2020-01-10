#include <iostream>
#include<string>
using namespace std;

//Write compress() here.
string conpress(string x){
    int l = x.size();
    int i = 0;
    string sum = "";
    while(i<l){
        sum = sum + x[i];
        i += 3;
    }
    return sum;
}


int main()
{
    string a = conpress("ABCDEFGHIJKLMN");
    string b = conpress("123456");
    string c = conpress("HelloWorld");
    string d = conpress("BNK48");
    string e = conpress("COMPROG261102");
    string f = conpress("A");
    string g = conpress("AB");
    string h = conpress("ABC");
    string i = conpress("ABCD");
    
    cout << a << "\n" << b << "\n" << c << "\n" << d << "\n" << e << "\n" << f << "\n" << g << "\n" << h << "\n" << i << "\n";

}
