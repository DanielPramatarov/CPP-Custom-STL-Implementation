#include <iostream>
#include <string>
#include "vector.h"
using std::cout;


template<typename T>
void printVector(const vector<T>& vector)
{
    for (size_t i = 0; i < vector.Size(); i++)
    {
        std::cout << vector[i] << std::endl;
    }
}

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
    out << "name : " << person.firstname << ", Lastname : " << person.lastname << ", Age :" << person.age << std::endl; // actual output done here
 
    return out; 
}





int main()
{
    cout << "=========================================================================================" << std::endl;
    cout << "STRING" << std::endl;
    cout << "=========================================================================================" << std::endl;
    vector<std::string> vecstring;
    vecstring.PushBack("STL");
    vecstring.PushBack("C++");
    vecstring.PushBack("Vector");
    printVector(vecstring);
    cout << "=========================================================================================" << std::endl;
    cout << "PopBack() 2-TIMES" << std::endl;
    cout << "=========================================================================================" << std::endl;
    vecstring.PopBack();
    vecstring.PopBack();
    printVector(vecstring);
    cout << "=========================================================================================" << std::endl;
    cout << "Clear()" << std::endl;
    cout << "=========================================================================================" << std::endl;
    vecstring.Clear();
    printVector(vecstring);

    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;

    cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << std::endl;


    cout << "=========================================================================================" << std::endl;
    cout << "CLASS" << std::endl;
    cout << "=========================================================================================" << std::endl;

    vector<Person> vector;
    vector.PushBack(Person("NAME", "SURENAE" , 20));
    vector.PushBack(Person("NAME2", "SURENAME2" , 30));
    vector.PushBack(Person("NAME3", "SURENAME3" , 40));
    vector.PushBack(Person("NAME4", "SURENAME4" , 50));
    
    printVector(vector);
    
    cout << "=========================================================================================" << std::endl;
    cout << "PopBack() 2-TIMES" << std::endl;
    cout << "=========================================================================================" << std::endl;
    vector.PopBack();
    vector.PopBack();
    printVector(vector);
    cout << "=========================================================================================" << std::endl;
    cout << "Clear()" << std::endl;
    cout << "=========================================================================================" << std::endl;
    vector.Clear();
    printVector(vector);

    

	return 0;
}
