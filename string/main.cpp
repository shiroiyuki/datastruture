#include "sString.hpp"
using namespace std;
String::String() {
}
String::String(char* const s) {
    data = s;
}
String::~String(){
    delete []data;
}
String& String::operator=(const String& s) {
    if(&s !=this) {
        delete []data;
        data = new char[strlen(s.data)+1];
        strcpy(data,s.data);
    }
    return *this;
}
String& String::operator=(const char* s) {
    delete []data;
    data = new char[strlen(s)+1];
    strcpy(data,s);
    return *this;
}
String String::operator+(const String& s) {
    char *temp = new char[strlen(data)+strlen(s.getdata())+1];
    strcpy(temp,data);
    strcat(temp,s.getdata());
    return String(temp);
}
char& String::operator[](int const i) {
    try{
    if(i > strlen(data) || i < 0) {
        throw "out of range";
    } else {
        return data[i];
    }
    return data[i];
    }
    catch(const char * msg){
        cout<<msg<<endl;
        return data[strlen(data)];
    }
}
char* String::getdata()const {
    return data;
}
std::ostream& operator<<(std::ostream& os,String const& s) {
    os<<s.getdata();
    return os;
};
int sizelen(const String& s){
    return strlen(s.getdata());
}
int main( ) {
    String a = "hi",b = "hello";
    a = b;
    b = "Jack";
    cout<<a<<endl;
    cout<<b<<endl;
    cout<< a<<endl;
    cout<< b<<endl;
    String c = a+b;
    cout<< c<<endl;
    cout<< sizelen(c)<<endl;
    return 0;
}
