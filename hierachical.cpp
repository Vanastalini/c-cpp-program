#include<iostream>
using namespace std;
 
class father{
   public:
   string Bike="Duke";
};
class son: public father{

};
 
class grandson: public son{

};

class granddaughter: public son{

};
int main(){
    granddaughter gd;
    cout<<gd.Bike<<endl;
    grandson gs;
    cout<<gs.Bike<<endl;
}