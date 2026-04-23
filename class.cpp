#include <iostream>
#include <string>
using namespace std;
class myClass{
public:
int myNum;

string myString;
};
int main (){
myClass myObj;
myObj.myNum=222;
myObj.myString="Good Morning";

cout << myObj.myNum << "\n";
cout << myObj.myString;
return 0;
}
