#include <iostream>

int getnum(){
int x;
std::cout<<" ENter number : ";
std::cin >>x;
return x;
}
int main(){
int num1 = getnum();
int num2 = getnum();
int result = num1 + num2;
for(int i=0; i<=2; i++)
std::cout<<"The sum is : "<<result;

}
