#include <iostream>
#include <string>
using namespace std;

class Printer{
    private:
    string _name;
    string _location;
    string _model;
    string _type;
    public:
    Printer(){
        cout<<"Printer default constructor"<<endl;
    }
    Printer(string name,string location,string model,string type):_name(name),_location(location), _model(model),
    _type(type){
        cout<<"Printer Overloading constructor"<<endl;
        }
    void Print(){
        cout<<"NAME:"<<_name<<endl;
        cout<<"Location:"<<_location<<endl;
        cout<<"Model:"<<_model<<endl;
        cout<<"Type:"<<_type<<endl;
    }
};
class Scanner{
    private:
    string _name;
    string _location;
    string _model;
    public:
    Scanner(){
        cout<<"Scanner default constructor"<<endl;
    }
    Scanner(string name,string location,string model):_name(name),_location(location), _model(model){
        cout<<"Scanner Overloading constructor"<<endl;
        }
        
    void Scan(){
        cout<<"NAME:"<<_name<<endl;
        cout<<"Location:"<<_location<<endl;
        cout<<"Model:"<<_model<<endl;
    }
};
int main(){
Printer p1;
Printer p2("BoschP1","First Floor","XYZ","ABC");
p2.Print();
Scanner s1;
Scanner s2("BoschS1","First Floor","UVW");
s2.Scan();

  return 0; 
}
