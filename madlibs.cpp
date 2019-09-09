//Authors:Lois Levy
#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout;
using std::endl;

int main()
{

  string noun = "";
  string verb = "";
  int number = 0;
  string adjective = "";

  cout<<"Enter a noun: ";
  cin>>noun;
  cout<<"Enter a verb: ";
  cin>>verb;
  cout<<"Enter a number: ";
  cin>>number;
  cout<<"Enter an adjective: ";
  cin>>adjective;
 
  cout<<"When I was young, I had a pet "<<noun;
  cout<<". Everyday after school we would "<<verb;
  cout<<" almost "<<number;
  cout<<" times a day."<<endl;
  cout<<"He was so "<<adjective;
  cout<<" it would make me laugh so much!"<<endl;

  return 0;
}

