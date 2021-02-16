#include <string>
// https://qiita.com/PruneMazui/items/8a023347772620025ad6
using namespace std;

namespace es{
  //cursor moving
  string moveUp(int n){
    return "\e[" + to_string(n) + "A";
  }
  string moveDown(int n){
    return "\e[" + to_string(n) + "B";
  }
  string moveRight(int n){
    return "\e[" + to_string(n) + "C";
  }
  string moveLeft(int n){
    return "\e[" + to_string(n) + "D";
  }

  string moveDownLine(int n){
    return "\e[" + to_string(n) + "E";
  }
  string moveUpLine(int n){
    return "\e[" + to_string(n) + "F";
  }

  string moveCol(int n){
    return "\e[" + to_string(n) + "G";
  }
  string move(int line,int col){
    return "\e[" + to_string(line) + ";" + to_string(col) + "H";
  }
}
