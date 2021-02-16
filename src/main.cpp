#include <iostream>
#include <ostream>
#include "ansiescapesequences.hpp"
using namespace std;
int main(){
  for(int i=0;i<100;i++){
    cout<<es::move(i,i);
    cout<<i;
  }
  cout<<flush;
}
