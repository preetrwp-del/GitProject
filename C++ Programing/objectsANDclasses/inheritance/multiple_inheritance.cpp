#include <iostream>
using namespace std;

// Base class 1
class Sports {
protected:
    int sportsScore;

public:
    void getSportsScore() {
        cout << "Enter sports score: ";
        cin >> sportsScore;
    }

    void displaySportsScore() {
        cout << "Sports Score: " << sportsScore << endl;
    }
};

// Base class 2
class Academics {
protected:
    int academicScore;

public:
    void getAcademicScore() {
        cout << "Enter academic score: ";
        cin >> academicScore;
    }

    void displayAcademicScore() {
        cout << "Academic Score: " << academicScore << endl;
    }
};

// Derived class
class Student : public Sports, public Academics {
public:
    void displayTotalScore() {
        displayAcademicScore();
        displaySportsScore();
        cout << "Total Score: " << (academicScore + sportsScore) << endl;
    }
};

int main() {
    Student s;
    s.getAcademicScore();
    s.getSportsScore();
    s.displayTotalScore();
    return 0;
}
