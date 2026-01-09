#include<iostream>
using namespace std;

class father{
  protected:
  string car="audi";
};
 
class mother : public father{
    public:
    void display(){
        cout<<car<<endl;
    }
};
int main(){
    mother m;
    
    m.display();
}