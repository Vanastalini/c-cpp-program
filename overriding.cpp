#include<iostream>
using namespace std;

class father{
    public:
    string car="audi";
};

class son: public father{
    public:
    string car="bmw";
};
int main(){
    son s;
    cout<<s.car<<endl;
}