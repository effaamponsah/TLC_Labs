#include <iostream>

using namespace std;

int main(){
  int x = 2;

  cout << (x << 2) <<endl;

  cout << ++(++x) <<endl;

  x*=6;
  cout << x <<endl;

  int a, b, c;

  c = b = a = 3;
  
  float y {5.4};
  int u = static_cast<int>(y);

  cout << u <<endl;
  
  //const_cast<int>(y);
 // cout << u <<endl;  
}
