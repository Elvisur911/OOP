#include <iostream>

using namespace std;

class Car{
public:

string brand;
string model;
int year;

Car(string x, string y, int z){
brand = x;
model = y;
year = z;
}
};
 
int main(){
Car defn1("BMW", "M5 Competition", 2025);
Car defn2("Audi", "RS7", 2020);

cout << defn1.brand << " " << defn1.model << " " << defn1.year << "\n";

cout << defn2.brand << " " << defn2.model << " " << defn2.year << "\n";
return 0;
}
