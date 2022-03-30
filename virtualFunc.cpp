#include <iostream>
using namespace std;

class AbstractStudent{
virtual void gotPromotedNextClass()=0;
};

 class Student:AbstractStudent {

 string Name;
 int Age;
  public:
int ID;
void setName(string name){
Name=name;
}
string getName(){
return Name;
}
void setAge(int age){
Age=age;
}
int getAge(){
return Age;
}

Student (string name,int age,int id){
Name=name;
Age=age;
ID=id;}


 void showStudent (){
 cout << "Name: "<< Name<<"\n Age: "<<Age<<endl;}

void gotPromotedNextClass(){
if(Age>30)
cout<<"Got Promoted \n"<<endl;
else cout << " \n Not Promoted \n";
}
 };
int main (){

Student s1= Student("Salam",25,445);

Student s2= Student("Ralam",565,4);

s1.showStudent();
s1.gotPromotedNextClass();
s2.showStudent();
s2.gotPromotedNextClass();
}
