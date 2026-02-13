
#include<cstring>
#include"header.h"

int main()
{

        char str[100],str1[100];
        cout<<"enter the string:"<<endl;
        cin>>str;
        cout<<"enter the string1:"<<endl;
        cin>>str1;

        STRING s1(str,strlen(str)+1);
        STRING s2(str1,strlen(str1)+1);
        STRING s3,s4;
        //////// = oveerloaded ////////////
        s3=s1;
        cout<<"s3:"<<s3<<endl;
        //////// + overloaded ///////////
        s4=s1+s2;
        cout<<"s4:"<<s4<<endl;
        ///////// [] overloaded //////////
        for(int i=0;s1[i];i++)
        {
                cout<<s1[i]<<" ";

        }
        cout<<endl;
        ////////// > overloaded //////////
        if(s4>s1)
        {
                cout<<"> overloaded true"<<endl;
        }
        else
        {
                cout<<"> overloaded flase"<<endl;
        }
        ////////// < overloaded //////////
        if(s1<s4)
        {
                cout<<"< overloaded true"<<endl;
        }
        else
        {
                cout<<"< overloaded flase"<<endl;
        }
        ////////// >= overloaded //////////
        if(s1>=s4)
        {
                cout<<">= overloaded true"<<endl;
        }
        else
        {
                cout<<">= overloaded flase"<<endl;
        }
        ////////// <= overloaded //////////
        if(s1<=s4)
        {
                cout<<"<= overloaded true"<<endl;
        }
        else
        {
                cout<<"<= overloaded flase"<<endl;
        }
        ////////// != overloaded //////////
        if(s1!=s2)
        {
                cout<<"!= overloaded true"<<endl;
        }
        else
        {
                cout<<"!= overloaded flase"<<endl;
        }
        ////////// == overloaded //////////
        if(s1==s2)
        {
                cout<<"== overloaded true"<<endl;
        }
        else
        {
                cout<<"== overloaded flase"<<endl;
        }
        //////////// strlen ///////////////
        cout<<"STRLEN"<<endl;
        cout<<"length of s1:"<<strlen(s1)<<endl;
        //////////// strstr ///////////////
        STRING s5(str,strlen(str)+1);
        STRING s6(str1,strlen(str1)+1);
        char *p;
        p=strstr(s5,s6);
        cout<<"STRSTR: ";
        if(p)
        {
                cout<<"substring found :"<<p<<endl;
        }
        else
        {
                cout<<"substring not fond:"<<endl;
        }
        //////////////// strchr /////////
        char ch ,*q;
        cout<<"STRCHR: "<<endl;
        cout<<"enter the character:"<<endl;
        cin>>ch;
        q=strchr(s1,ch);

        if(q)
        {

                cout<<ch<<" "<< "is found in"<<" "<< s1<<" "<<"at"<<" "<<q-s1.getdata()<<endl;
        }
        else
        {
                cout<<ch<<" "<<"is no found in "<<" "<<s1<<endl;
        }
        ////////// strrchr ///////////////
        char *r,ch1;
        cout<<"STRRCHR: "<<endl;
        cout<<"enter the character:"<<endl;
        cin>>ch1;
        r=strrchr(s2,ch1);

        if(r)
        {

                cout<<ch1<<" is found in "<<s2<<" "<<"at"<<" "<<r-s2.getdata()<<endl;
        }
        else
        {
                cout<<ch1<<" "<<"is no found in "<<" "<<s2<<endl;
        }
        ////////// strcmp ////////////
        cout<<"STRCMP: "<<strcmp(s1,s2)<<endl;
        ////////// strncmp ///////////////
        cout<<"STRNCMP: "<<strncmp(s1,s2,2)<<endl;
        ///////// strcat ////////////////////
        strcat(s1,s2);
        cout<<"STRCAT: "<<s1<<endl;
        /////////// strncat ///////////////////
        strncat(s1,s2,3);
        cout<<"STRNCAT: "<<s1<<endl;
        ////////// strrev //////////////////
        strrev(s2);
        cout<<"STRREV: "<<s2<<endl;
        ////////// strupper /////////////
        strupper(s1);
        cout<<"STRUPPER: "<<s1<<endl;
        ///////////// strlower ///////////
        strlower(s1);
        cout<<"STRLOWER: "<<s1<<endl;

}
