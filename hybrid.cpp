#include<iostream>
using namespace std;
class grandfather{
    public:
    string carname="thar";
};
class grandmother{
    public:
    string carname="bmw";
};
class father :public grandfather,grandmother{

};
class grandson :public father{

};
class granddaughter: public father{

};

int main(){
    granddaughter gd;
    cout<<gd.grandfather::carname<<endl;
}