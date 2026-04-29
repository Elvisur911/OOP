#include <iostream>

using namespace std;
class car{
public:
string model;
string brand;
car(){
brand= "unknown";
model = "unknown";
}
car(string a, string b){
model = a;
brand = b;
}
};
int main(){
car v1;
car v2("Toyota", "Camry");
cout << v1.brand << " " << v1.model << "\n";
cout << v2.model << " " << v2.brand << "\n";
return 0;
}
