#include<iostream>
using namespace std;
class father{
    public:
    string bikename="duke";
};
class son :public father{
    
};

class grandson :public son{
       
};

int main(){
    grandson g;
    cout<<"Bikename:"<<g.bikename<<endl;
}