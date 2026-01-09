#include<iostream>
using namespace std;
class father{
    public:
    string carname="bmw";
    int carnumber=12767;
    
};

class son: public father{
         
};
int main(){
   father f;
   cout<<f.carnumber<<endl;
   son s;
   cout<<s.carname<<endl;
  
}