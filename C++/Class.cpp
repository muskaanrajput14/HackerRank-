#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/
class Student
{
    private:
    int age, standard;
    string fn, ln;
    public:
    void set_age(int Age)
    {
        age = Age;
    }
    
    void set_standard(int Standard)
    {
        standard = Standard;
    }
    
    void set_first_name(string FN)
    {
        fn = FN;   
    }
    
    void set_last_name(string LN)
    {
        ln = LN;
    }
    int get_age()
    {
        return age;
    }
    
    int get_standard()
    {
        return standard;
    }
    
    string get_first_name()
    {
        return fn;
    }
    
    string get_last_name()
    {
        return ln;
    }
    /*
    string to_string()
    {
        string s = fn + ln;
        return s;
    }
    */
    string to_string()
    {
        string s;
        char c = ',';
        cout << age << c << fn << c << ln << c << standard;
        return s;
    }
};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
