#include <iostream>

using namespace std;
class employee{
private:
int salary;

public:
void setSalary(int s){
salary = s;
}
int getSalary(){
return salary;
}
};
int main () {
employee myObj;
myObj.setSalary(456000);

cout << myObj.getSalary() << "\n";

return 0;
}
