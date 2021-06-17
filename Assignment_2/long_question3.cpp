#include <bits/stdc++.h>
using namespace std;

class member{
 
  char name[20], address[40];
   long long number;
   int age;
   
   public:
    int salary;
    void input()
    {  
    cout<<endl;
    cout<<"Name : ";
    cin>>name;
    cout<<endl;
    cout<<"Age : ";
    cin>>age;
    cout<<endl;
    cout<<"Phone Number : ";
    cin>>number;
    cout<<endl;

    cout<<"Address : ";
    cin>>address;
    cout<<endl;
    cout<<"Salary : ";
    cin>>salary;
    cout<<endl; 
 }
 void display()
    {   
     cout<<endl;
     cout<<"Name : "<<name<<endl;
     cout<<"Age : "<<age<<endl;
     cout<<"Phone Number : "<<number<<endl;    
     cout<<"Address : "<<address<<endl;    
     cout<<"Salary : "<<salary<<endl;   
     
 }
};

class employee : public member{
  char specialization[20], department[20];
  public:
  void input()
  { 
  cout<<"\n \t Enter Employee Details \t \n";
  member::input();
  cout<<"Specialization : ";
  cin>>specialization;
  cout<<endl;
  cout<<"Department : ";
  cin>>department;
  cout<<endl;
  }
  void display()
  { 
  cout<<"\n \t Displaying Employee Details \t \n";
  member::display();
  cout<<"Specialization : "<<specialization<<endl;
  cout<<"Department : "<<department<<endl;
  }
  void printSalary()
     {
     cout<<"\n Salary of the member is : "<<salary<<endl;
  }
  
};

class manager : public member{
  char specialization[20], department[20];
  public:
   void input()
  { 
  cout<<"\n \t Enter Manager Details \t \n";
  member::input();
  cout<<"Specialization : ";
  cin>>specialization;
  cout<<endl;  
  cout<<"Department : ";
  cin>>department;
  cout<<endl;
  }
  void display()
  { 
  cout<<"\n \t Displaying Manager Details \t \n";
  member::display();
  cout<<"Specialization : "<<specialization<<endl;
  cout<<"Department : "<<department<<endl;
  }
  void printSalary()
     {
     cout<<"\n Salary of the member is : "<<salary<<endl;
  }
};
int main()
{
 employee e;
 manager m;
 e.input();
 m.input();
 e.display();
 e.printSalary();
 m.display();
 m.printSalary();
}

