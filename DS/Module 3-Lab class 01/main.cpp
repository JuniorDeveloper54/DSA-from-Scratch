#include<bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int std_id;
    int age;
    string fathers_name;
    string mothers_name;

    Student()
    {

    }

    Student(string name, int std_id, int age)
    {
        this -> name = name;
        this -> std_id = std_id;
        this -> age = age;
    }

    //constructor
    Student(string name, int std_id, int ag, string f_name, string m_name)
    {
        this->name = name;
        this->std_id = std_id;
        age = ag;
        fathers_name = f_name;
        mothers_name = m_name;

    }

    //constructor overloading
//    Student(string s, int id, int ag)
//    {
//        name =  s;
//        std_id = id;
//        age = ag;
//    }

public:
    void print_information()
    {
        cout << name << " " << std_id << " " << age << " " << fathers_name << " " << mothers_name << "\n";
    }
    void setInformation(string s, int id, int ag, string f_name, string m_name)
    {
        name = s;
        std_id = id;
        age = ag;
        fathers_name = f_name;
        mothers_name = m_name;
    }
//    ~Student()
//    {
//        cout << "Called ";
//        print_information();
//    }
//sort array of class second method operator overloading
    bool operator < (Student s)
    {
        return std_id < s.std_id; //own id < other id
    }

};


/*
protected and inheritence

*/

class User
{
protected:
    string name;
    int age;
};

class Admin : public User
{
private:
    string designation;

public:
    //setting
    void sett(string nam, int ag, string deg)
    {
        name = nam;
        age =  ag;
        designation = deg;
    }


    void print()
    {
        cout << name << "\n";
        cout << age << "\n";
        cout << designation << "\n";
    }
};

class Person
{
public:
    string name;
    Person *father, *mother;

    //new memory allocate korar somoy tw kono parameter nisse na so ekta blank constructor rakhte hobe
//    Person()
//    {
//        father = NULL;
//        mother = NULL;
//    }

    //person constructor
//    Person(string name, string f_name, string m_name)
//    {
//        this -> name = name;
//
//        father = new Person;
//        father -> name = f_name;
//
//        mother = new Person;
//        mother -> name = m_name;
//    }

    void print_info()
    {
        cout << "Name = " << name << "\n";
        cout << "Father's name = " << father->name << "\n";
        cout << "Mother's name = " << mother->name << "\n";
    }

//    ~Person()
//    {
//        cout << "called\n";
//        if(father != NULL || mother != NULL)
//        {
//            delete father;
//            delete mother;
//
//        }
//    }

};

//comp function
//bool comp(Student a, Student b)
//{
//    if(a.std_id == b.std_id)
//    {
//        //sort using age
//        return a.age < b.age;
//    }
//    //when a is less than b
//    return a.std_id < b.std_id;
//}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
//------------------------------------->
//    Student s;
//    s.setInformation("Shabbir", 2299413, 21, "Shake", "Laily");
//    s.print_information();

//    Admin ad;
//    ad.sett("shabbir", 21, "SWE I");
//    ad.print();
//------------------------------------->
//constructor running here
//    Student s("shabbir", 22299413, 21, "Shake", "Laily");
//    s.print_information();
//    cout << "After Constructor overloading" << "\n" << "\n";
//
//    Student ss("shabbir", 22299413, 21);
//    ss.print_information();
//
//    Student sss;
//------------------------------------->
//    Person p("Shabbir", "Shake", "Laily");
//    p.print_info();
//------------------------------------->
//    Student *s = new Student("Shabbir", 22299413, 21);
//    s -> print_information(); //one way to print
//    (*s).print_information(); //another way
//    //(*s) -> accessing the class then print fuction

//------------------------------------->
//array of class
    Student s[10];
    for(int i = 0 ; i < 10; i++)
    {
        s[i] = Student("A", i, 20);
    }
    for(int i = 0 ; i < 10; i++)
    {
        s[i].print_information();
    }
//------------------------------------->
//Sort Array of Class
    vector<Student>a;
    for(int i = 0; i < 10; i++)
    {
        a.push_back(Student("Shabbir", 20 - i, 20));
    }
    for(int i = 0; i < 10; i++)
    {
        a[i].print_information();
    }
    cout << endl;
    cout << "After sorting\n";
    //first way for sorting
    //sort(a.begin(), a.end(), comp);//for sorting array constructor
//    for(int i = 0; i < 10; i++)
//    {
//        a[i].print_information();
//    }

    //*****second method
    sort(a.begin(), a.end());
    for(int i = 0; i < 10; i++)
    {
        a[i].print_information();
    }



    return 0;
}
