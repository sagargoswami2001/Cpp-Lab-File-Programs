//WAP showing implementation of a nested structure & access the data members of both structures.
#include<iostream>
//using namespace std;
using std::cout;
using std::cin;

struct college//Put identifier name after struct
{
  char college_name[50];
  int college_ID;
};

struct students    //Put identifier name after struct
{
  char student_name[50];
  int student_rollno;
  struct college coll;
};

int main()
{
  students s;

  cout<<"Enter Student Name: ";
  cin>>s.student_name;

  cout<<"Enter Student Roll No.: ";
  cin>>s.student_rollno;

  cout<<"Enter College Name: ";
  cin>>s.coll.college_name;

  cout<<"Enter College ID: ";
  cin>>s.coll.college_ID;

  cout<<"\nCollege Name: "<<s.coll.college_name;
  cout<<"\nCollege ID: "<<s.coll.college_ID;
  cout<<"\nStudent Name: "<<s.student_name;
  cout<<"\nStudent Roll No.: "<<s.student_rollno;

  return 0;
}
