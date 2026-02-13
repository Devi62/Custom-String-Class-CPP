#include"header.h"
////////////// strlen //////////
int strlen(STRING &s1)
{
        int i=0;
        for(i=0;s1.ptr[i];i++);
        return i;
}

////////// strstsr /////////////
char* strstr(STRING &s1,STRING &s2)
{
        int i=0,j=0;
        for(i=0;s1.ptr[i]!='\0';i++)
        {
                for(j=0;s2.ptr[j]!='\0';j++)            {
                        if(s1.ptr[i+j]!=s2.ptr[j])
                        {
                                break;
                        }
                }
                if(s2.ptr[j]=='\0')
                {
                        return &s1.ptr[i];
                }
        }
}
///////////// strchr //////////////
char* strchr(STRING &s1,char ch)
{
        int i=0;
        for(i=0;s1.ptr[i]!='\0';i++)
        {
                if(s1.ptr[i]==ch)
                {
                        return s1.ptr+i;
                }
        }
        return 0;
}
//////////// strrchr /////////////////
char* strrchr(STRING &s1,char ch)
{
        int i=0,j=0;
        for(i=0;s1.ptr[i];i++);
        for(j=i-1;s1.ptr[j];j--)
        {
                if(s1.ptr[j]==ch)
                {
                        return s1.ptr+j;
                }

        }
        return 0;

}
/////////////// strcmp //////////////
int strcmp(const STRING &s1,const STRING &s2)
{
        int i=0;
        for(i=0;s1.ptr[i] && s2.ptr[i];i++)
        {
                if(s1.ptr[i]!=s2.ptr[i])
                {
                        return s1.ptr[i]-s2.ptr[i];
                }
        }
        return  s1.ptr[i]-s2.ptr[i];
}
///////////// strncmp ////////////////
int strncmp(const STRING &s1,const STRING &s2,int n)
{
        int i;
        for(i=0;i<n && s1.ptr[i] && s2.ptr[i];i++)
        {
                if(s1.ptr[i]!=s2.ptr[i])
                {
                        return s1.ptr[i]-s2.ptr[i];
                }
        }
         return s1.ptr[i]-s2.ptr[i];
}
///////////// strcat /////////////////////
void strcat(STRING &s1, const STRING &s2)
{
        int i=0,j=0;
        for(i=0;s1.ptr[i];i++);
        for(j=0;s2.ptr[j];j++,i++)
        {
                s1.ptr[i]=s2.ptr[j];
        }
        s1.ptr[i]='\0';
}
//////////////// strncat ////////////////
void strncat(STRING &s1, const STRING &s2,int n)
{
        int i=0,j=0;
        for(i=0;s1.ptr[i];i++);
        for(j=0;j<n && s2.ptr[j];j++,i++)
        {
                s1.ptr[i]=s2.ptr[j];
        }
        s1.ptr[i]='\0';
}
///////////// strcpy /////////////////
void strcpy(STRING &s1, const STRING &s2)
{
        int i=0;
        for(i=0;s2.ptr[i];i++)
        {
                s1.ptr[i]=s2.ptr[i];
        }
        s1.ptr[i]='\0';
}
/////////////// strncpy //////////////////
void strncpy(STRING &s1,const STRING &s2, int n)
{
        int i=0;
        for(i=0; i<n && s2.ptr[i];i++)
        {
                s1.ptr[i]=s2.ptr[i];
        }
        s1.ptr[i]='\0';
}
///////////// strrev /////////////////
void strrev(STRING &s1)
{
        int i=0,j;
        char t;
        for(i=0;s1.ptr[i];i++);
        for(i=i-1,j=0;j<i;j++,i--)
        {
                t=s1.ptr[j];
                s1.ptr[j]=s1.ptr[i];
                s1.ptr[i]=t;
        }
}
/////////////  strupper /////////////
void strupper(STRING &s1)
{
        for(int i=0;s1.ptr[i];i++)
        {
                if(s1.ptr[i]>='a' && s1.ptr[i]<='z')
                {
                        s1.ptr[i]=s1.ptr[i]-32;
                }
        }
}
////////////// strlower ///////////////////
void strlower(STRING &s1)
{
        for(int i=0;s1.ptr[i];i++)
        {
                if(s1.ptr[i]>='A' && s1.ptr[i]<='Z')
                {
                        s1.ptr[i]=s1.ptr[i]+32;
                }
        }
}
/////////////////// ostream << ///////////////
ostream& operator<<(ostream &out,const STRING &s)
{
    out<<s.ptr;
    return out;
}
////////////// istream >> /////////////////////
istream & operator >>(istream &in,STRING &t)
{
fstream fout;
fout.open("storage",ios::in|ios::out|ios::trunc);
int i=0,c=0;
char ch;
ch=getchar();
while(ch!='\n')
{
fout<<ch;
ch=getchar();
c++;
}
fout.seekg(0);
//delete []t.s;
t.ptr=new char[c+1];
i=0;
while((ch=fout.get())!=EOF)
{
t.ptr[i++]=ch;
}
fout.close();
return in;
}

