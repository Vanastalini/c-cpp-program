#include<iostream>
using namespace std;
void display(){
    cout<<"this method is overloading"<<endl;
}
void display(int){
    cout<<"this method is overloading number"<<endl;
}
int main(){
    display(2);
}