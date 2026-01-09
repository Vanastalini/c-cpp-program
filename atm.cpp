#include<iostream>
using namespace std;
class atmcard{
   private:
   int pin_number;
   int amount;

   public:
   atmcard(int pin_number,int amount){
         this->pin_number=pin_number;
         this->amount=amount;
         cout<<pin_number<<endl;
         cout<<amount<<endl;
   }

};


int main(){
  atmcard(2005,1000);
};