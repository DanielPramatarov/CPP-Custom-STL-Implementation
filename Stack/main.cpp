#include "Stack.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;

class Person
{
  public:
  std::string firstname;
  std::string lastname;
  int age;
    Person(){}
    Person(std::string first,std::string last, int a):
        firstname(first), lastname(last), age(a)
    {}
  
};
std::ostream& operator<< (std::ostream &out, const Person &person)
{
    out << "name : " << person.firstname << ", Lastname : " << person.lastname << ", Age :" << person.age << std::endl; 
 
    return out; 
}


int main()
{
    cout << "=========================================================================================" << std::endl;
    cout << "STRING" << std::endl;
    cout << "=========================================================================================" << std::endl;

	Stack<string> stack;
      
    cout << "=========================================================================================" << std::endl;
    cout << "size()" << std::endl;
    cout << "push()" << std::endl;
    cout << "=========================================================================================" << std::endl;

    stack.push("Adam");
	stack.push("Joe");
    cout << stack.size() << '\n';
	cout << stack.size() << '\n';

    cout << "=========================================================================================" << std::endl;
    cout << "pop() " << std::endl;
    cout << "=========================================================================================" << std::endl;
    
	cout << stack.pop() << '\n';
	cout << stack.pop() << '\n';
    
    cout << "=========================================================================================" << std::endl;
    cout << "CLASS" << std::endl;
    cout << "=========================================================================================" << std::endl;

    Stack<Person> stack2;
    Person per = Person("name", "surname", 30);
    Person per2 = Person("name2", "surename2", 40);
    Person per3 = Person("name3", "surename3", 50);
    Person per4 = Person("name4", "surenam4", 60);
    
    cout << "=========================================================================================" << std::endl;
    cout << "size()" << std::endl;
    cout << "push()" << std::endl;
    cout << "=========================================================================================" << std::endl;
    stack2.push(per);
    cout << "Size: " <<stack2.size() << '\n';
    stack2.push(per2);
    cout << "Size: " << stack2.size() << '\n';
    stack2.push(per3);
    cout << "Size: " << stack2.size() << '\n';
    stack2.push(per4);
    cout <<"Size: " << stack2.size() << '\n';

    cout << "=========================================================================================" << std::endl;
    cout << "pop() " << std::endl;
    cout << "=========================================================================================" << std::endl;
    
    cout << stack2.pop() << '\n';
    cout << stack2.pop() << '\n';
    cout << stack2.pop() << '\n';
    cout << stack2.pop() << '\n';
    
    cout << "=========================================================================================" << std::endl;
    cout << "INT" << std::endl;
    cout << "=========================================================================================" << std::endl;
    Stack<int> ints;
    
    cout << "Inserting elements to the stack" << std::endl;

    for(int i =0; i <=100; i++)
    {
        ints.push(i);
    }
    
    cout << "Deleting  and Print elements from the stack" << std::endl;
    for(int i =0; i <=100; i++)
    {
        cout << ints.pop() << " ";
    }
        cout << std::endl;

    
	

	return 0;
}
