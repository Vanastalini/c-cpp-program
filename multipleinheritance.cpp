#include<iostream>
using namespace std;
class father{
  public:
     string carname= "audi";
};
class mother{
    public:
     string carname="bmw";
};
class daughter: public father , public mother{    
    public: 
     string carname="thar";
};

int main(){
    mother m;
    father f;
    daughter d;
    cout<<d.carname<<endl;
    cout<<d.mother:: carname<<endl;

}