#include <iostream>

using namespace std;

class Students {
    private:
        string degree;
    public:
        string name;
        int age;
        double score;

        Students() {
            cout << "new student" << endl;
        }
        Students(string name, int age, double score) {
            this->name = name;
            this->age = age;
            this->score = score;
        }

        bool approved(){
            if (this->score >= 80) {
                cout << "approved" << endl;
                return true;
            } else {
                cout << "not approved" << endl;
                return false;
            }
        }

        void set_degree(string degree){
            if (degree == "IT" || degree == "Electronic") {
                this->degree = degree;
            } else {
                cout << "degree not found" << endl;
                this->degree = "incorrect";
            }
        }

        string get_degree(){
            cout << "degree: " << this->degree << endl;
            return this->degree;
        }
};

class Animal {
    public:
        void eat () {
            cout << "the animal eats" << endl;
        }

        void sleep(){
            cout << "the animal sleeps" << endl;
        }
};

class Dog: public Animal {
    public:
        void eat() {
            cout << "the dog eats" << endl;
        }
        
        void run(){
            cout << "the dog runs" << endl;
        }
};

int main(){
    Students s1;
    s1.name = "Luis";
    s1.age = 20;
    s1.score = 90.5;

    cout << s1.name << endl;
    cout << s1.age << endl;
    cout << s1.score << endl;

    Students s2("Bob", 21, 80);

    cout << s2.name << endl;
    cout << s2.age << endl;
    cout << s2.score << endl;

    cout << s2.approved() << endl;

    s2.set_degree("IT");
    cout << s2.get_degree() << endl;

    // inheritance
    Animal a1;
    a1.eat();

    Dog d1;
    d1.eat();
    d1.run();

    return 0;
}