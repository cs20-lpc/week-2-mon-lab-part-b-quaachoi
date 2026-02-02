#include <iostream>
using namespace std;

class Student
{
    private:
        string name;
        int age;

    public:
        Student()
        {
            name = "";
            age = 0;
            cout << "Student object created." << endl;
        }
        ~Student()
        {
            cout << "Student object destroyed." << endl;
        }

        void setName(string s)
        {
            name = s;
        }

        void setAge(int i)
        {
            age = i;
        }

        string getName() const 
        {
            return name;
        }

        int getAge() const 
        {
            return age;
        }
};