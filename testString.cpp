#include<iostream>
#include<string.h>
using namespace std;
class String          //Class
{
    char s[10];       //Data Member
    public :
    void input()    //Data Function
    {
        cout<<"Enter A String"<<endl;
        cin>>s;       //Taking Input
    }
    int operator==(String x)      //Operator (==) Overloaded Function
    {
        if(strcmp(s,x.s)==0)      //Comparing String
        return 1;
        else
        return 0;
    }

};
int main()
{
    String s1,s2;      //Object
    s1.input();        //Function Call
    s2.input();
    if(s1==s2)
    cout<<"Equal"<<endl;
    else
    cout<<"Not Equal"<<endl;
    return 0;
}
