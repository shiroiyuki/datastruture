#include <iostream>
#include <cstring>
class String
{
public:
    String();
    String(char* const s);
    ~String();
    String& operator=(const String& s);
    String& operator=(const char* s);
    String operator+(const String& s);
    char& operator[](int const i);
    char* getdata()const;
private:
    char *data;
};
