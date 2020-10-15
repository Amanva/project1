#include <string>
#include <iostream>

using namespace std;

class MadLib {
private:
    string person, person2, food1, food2, verb1, place1, place2, animal, noun2, yourname;
public:
    MadLib() {
        setPerson();
        setFood1();
        setPerson2();
        setFood2();
        setPlace1();
        setPlace2();
        setAnimal();
        setVerb1();
        setNoun2();
        setYourname(); 
      
    }
    void setPerson() {
        cout << "Enter a person: ";
        cin >> person;
    }
    void setPerson2() {
        cout << "Enter another person: ";
        cin >> person2;
    }
 
    void setYourname() {
        cout << "Enter your name: ";
        cin >> yourname;
    }
    void setFood1() {
        cout << "Enter name of food: ";
        cin >> food1;
    }
    void setFood2() {
        cout << "Enter second food choice: ";
        cin >> food2;
    }
    void setVerb1() {
        cout << "Enter a verb: ";
        cin >> verb1;
    }
    void setPlace1() {
        cout << "Enter a place: ";
        cin >> place1;
    }
    void setPlace2() {
        cout << "Enter another place: ";
        cin >> place2;
    }
    void setAnimal() {
        cout << "Enter a animal: ";
        cin >> animal;
    }
    void setNoun2() {
        cout << "Enter a noun: ";
        cin >> noun2;
    }
    void display() {
        cout << "Hello, I am " << person << " and this is my friend " << person2 << ", we are going to " << place1 <<
         " as a short getaway trip." << endl; 
        
        cout << " I am going to go eat " << food1 << " at a popular restaurant here. While " << person2 << " is going to go eat "
            << food2 << " at another restaurant." << endl; 
        cout << "After this trip we will go back to " << place2 << " and " << verb1 << " when we get there. I will make sure to feed my "
            << animal << " when I get home." << endl; 
        cout << " I also got him his favorite " << noun2 << " it was nice talking to you, " << yourname << ". Bye! ";

    }
};

int main() {
    MadLib lib;
    lib.display();
    return 0;
}