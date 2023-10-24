#include <iostream>
using namespace std;
int a=7;
void func();
int main(){
    ++a;
    cout<<a<<endl;
    func();
}
void func(){
    ++a;
    cout<<a;
}
