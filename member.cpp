#include"header.h"
#include<cstring>


//////////defaut constructor//////
STRING::STRING()
{
        size=0;
        ptr=NULL;
}

////////parameterized constructor////
STRING::STRING(char *p,int s)
{
        size=s;
        ptr=new char[size];
        strcpy(ptr,p);
}
////////copy constructor////////
STRING::STRING(STRING &s)
{
        size=s.size;
        ptr=new char[size];
        strcpy(ptr,s.ptr);
}

/////////////destructor/////////////
STRING::~STRING()
{
        delete[]ptr;

}
char* STRING:: getdata()
{
        return ptr;
}
////////////opeerator=////////////
void  STRING:: operator=(const STRING &s)
{
        delete[]ptr;
        size=s.size;
        ptr=new char[size];
        strcpy(ptr,s.ptr);
}
///////////operator+//////////////
STRING STRING:: operator+( const STRING &s)
{
        STRING temp;
        temp.size=size+s.size;
        temp.ptr=new char[temp.size];
        strcpy(temp.ptr,ptr);
        strcat(temp.ptr,s.ptr);
        return temp;
}
///////////operator[]/////////////
char  STRING:: operator[](int index)
{
        if(index<0 || index>=size-1)
        {
                return 0;

        }
        else
        {
                return ptr[index];
        }
}
/////////////operator>////////////
bool  STRING:: operator>( STRING &s)
{
        if(strcmp(ptr,s.ptr)>0)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}
/////////////operator<////////////
bool  STRING:: operator<( STRING &s)
{
        if(strcmp(ptr,s.ptr)<0)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}
/////////////operator>=////////////
bool  STRING:: operator>=( STRING &s)
{
        if(strcmp(ptr,s.ptr)>=0)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}
/////////////operator<=////////////
bool  STRING:: operator<=( STRING &s)
{
        if(strcmp(ptr,s.ptr)<=0)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}
/////////////operator!=////////////
bool  STRING:: operator!=( STRING &s)
{
        if(strcmp(ptr,s.ptr)!=0)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}

/////////////operator==////////////
bool  STRING:: operator==( STRING &s)
{
        if(strcmp(ptr,s.ptr)==0)
        {
                return 1;
        }
        else
        {
                return 0;
        }
}
