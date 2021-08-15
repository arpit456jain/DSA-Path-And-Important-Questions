/* You have to create a class, named Student, representing the student's details, 
as mentioned above, and store the data of a student. Create setter and getter functions 
for each element; that is, the class should at least have following functions:

get_age, set_age
get_first_name, set_first_name
get_last_name, set_last_name
get_standard, set_standard
Also, you have to create another method to_string() which returns the string consisting 
of the above elements, separated by a comma(,). You can refer to stringstream for this. 
Sample Input

15
john
carmack
10

Sample Output

15
carmack, john
10

15,john,carmack,10                     
*/

#include <iostream>
#include <sstream>
using namespace std;

class Student{                           /*Enter code for class Student here.
                                           Read statement for specification.
                                              */
    private:
       int age, standard;
    string first_name, last_name;
    public:
        void set_age(int a) {
            age=a;
        }
        int get_age() {
            return age;
        }
        void set_standard(int b) {
            standard = b;
        }
        int get_standard() {
            return standard;
        }
        void set_first_name(string name){
            first_name = name;
        }
        string get_first_name() {
            return first_name;
        }
         void set_last_name(string name){
            last_name = name;
        }
        string get_last_name() {
            return last_name;
        }
        string to_string(){
         stringstream ss;
         char ch = ',';
         ss<<age<<ch<<first_name<<ch<<last_name<<ch<<standard;
         return ss.str(); 
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


