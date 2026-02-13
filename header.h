#include<iostream>
#include<fstream>
using namespace std;
class STRING
{
        int size;
        char *ptr;
        public:

                 STRING();//default constructor
                 STRING(char *,int);//parameterized constructor
                 STRING(STRING &);//copy constructtor
                ~STRING();//destructor
                char* getdata();
                void operator=( const STRING &);//assignment operator
                STRING operator+(const  STRING &);//concentination
                char operator[](int );//index
                bool operator>(STRING &);//greater then
                bool operator<(STRING &);//less then
                bool operator>=(STRING &);//greater then equal to
                bool operator<=(STRING &);//less then equal to
                bool operator!=(STRING &);//not equal to
                bool operator==(STRING &);//

                friend ostream& operator <<(ostream&,const STRING &);
                friend istream& operator >>(istream&,STRING &);
                friend void strcpy(STRING &s1,const STRING &s2);
                friend void strncpy(STRING &s1,const STRING &s2,int n);
                friend int strcmp(const STRING &s1,const STRING &s2);
                friend int strncmp(const STRING &s1,const STRING &s2,int n);
                friend void strcat(STRING &s1,const STRING &s2);
                friend void strncat(STRING &s1,const STRING &s2,int n);
                friend void strrev(STRING &s1);
                friend void strupper(STRING &s1);
                friend void strlower(STRING &s1);
                friend char* strchr(STRING &s1,char ch);
                friend char* strrchr(STRING &s1,char ch);
                friend char * strstr(STRING &s1,STRING &z);
                friend int strlen(STRING &s1);

}; 
