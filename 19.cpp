//WAP to read & write file objects using read & write functions from the file.
#include<iostream>
#include<fstream>

using namespace std;
//using std::cout;
//using std::cin;

int main()
{
  //opening MyWritingFile.txt using constructor and Writing in it.
  string st = "Sagar is a Good Boy";
  string st2;

  ofstream out("Sagar.txt");
  cout<<"Written in My Writing.txt\n";

  out<<st;

  //opening MyWritingFile.txt using constructor and Reading it.

  ifstream in("MyReadingFile.txt");
  getline(in, st2);

  cout<<st2;

  return 0;
}
