#include <string>
#include <iostream>

using namespace std;

class Person
{
    string name;
    int age;
public:
    Person() {
        name = "Unknown";
        age = 0;}
    friend ostream& operator << (ostream& output, Person &p);
    friend istream& operator >> (istream& intput, Person &p);
};

ostream& operator << (ostream& output, Person& p)
{
    output << "what the hell" << endl;
    output << "my name is " << p.name << " and my age is " << p.age << endl;
    return output;
}

istream& operator >> (istream& input, Person& p)
{
    input >> p.name >> p.age;
    return input;
}


int main()
{
    cout << "enter the name and age" << endl;
    Person me;
    cin >> me;
    cout << me;
    return 1;
}