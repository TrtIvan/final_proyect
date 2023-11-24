/*
    Second partial exam
    By:
    Ivan Gabriel García Bonilla
    Emmannuel Villalpando Hernández
    Date:
    27/10/23
*/

#include <iostream>
#include <string>
#include <map>

using namespace std;

// Defining Structure for Grades
struct Grade {
    double score;
    string letter;
    Grade(double s) : score(s) {
        setLetterFromScore();
    }
    Grade() : score(0) {
        letter = "N/A";
    }
    // Different grades
    void setLetterFromScore() {
        if (score >= 90.0) {
            letter = "A";
        } else if (score >= 80.0) {
            letter = "B";
        } else if (score >= 70.0) {
            letter = "C";
        } else if (score >= 60.0) {
            letter = "D";
        } else {
            letter = "F";
        }
    }
};

// Abstract class generation
class AbstractMecatronicsCourse {
public:
    // Output in class creation
    AbstractMecatronicsCourse(const string& name, int credits) : courseName(name), courseCredits(credits) {
        cout << "Created course: " << courseName << " (" << courseCredits << " credits)" << endl;
    }
    virtual void displayCourse() = 0; // Virtual function
    // Class destroyer
    virtual ~AbstractMecatronicsCourse() {
        cout << "Destroyed course: " << courseName << endl;
    }
    const string& getName() const {
        return courseName;
    }
    int getCredits() const {
        return courseCredits;
    }
    void setGrade(double score) {
        courseGrade = Grade(score);
    }
    const Grade& getGrade() const {
        return courseGrade;
    }
private:
    string courseName;
    int courseCredits;
    Grade courseGrade;
};
// Inheritance in class
class Kinematics : public AbstractMecatronicsCourse {
public:
    // Constructor
    Kinematics(const string& name, int credits) : AbstractMecatronicsCourse(name, credits) {
        cout << "Kinematics course created" << endl;
    }
    virtual void displayCourse() override {
        cout << "Kinematics: " << getName() << " (" << getCredits() << " credits)" << endl;
    }
    // Operator Overload
    Kinematics& operator=(const Kinematics& other) {
        if (this == &other) {
            return *this;
        }
        AbstractMecatronicsCourse::operator=(other);
        return *this;
    }
    virtual ~Kinematics() {
        cout << "Kinematics course destroyed" << endl;
    }
};
// Inheritance in class
class ControlSystems : public AbstractMecatronicsCourse {
public:
    // Constructor
    ControlSystems(const string& name, int credits) : AbstractMecatronicsCourse(name, credits) {
        cout << "Control Systems course created" << endl;
    }
    virtual void displayCourse() override {
        cout << "Control Systems: " << getName() << " (" << getCredits() << " credits)" << endl;
    }
    // Operator Overload
    ControlSystems& operator=(const ControlSystems& other) {
        if (this == &other) {
            return *this;
        }
        AbstractMecatronicsCourse::operator=(other);
        return *this;
    }
    virtual ~ControlSystems() {
        cout << "Control Systems course destroyed" << endl;
    }
};
// Inheritance in class
class MecatronicsCourseCombination : public Kinematics, public ControlSystems {
public:
    MecatronicsCourseCombination(const string& name, int kinematicsCredits, int controlSystemsCredits) :
        Kinematics(name, kinematicsCredits), ControlSystems(name, controlSystemsCredits) {
        cout << "Mecatronics course combination created" << endl;
    }
    MecatronicsCourseCombination& operator=(const MecatronicsCourseCombination& other) {
        if (this == &other) {
            return *this;
        }
        Kinematics::operator=(other);
        ControlSystems::operator=(other);
        cout << "MecatronicsCourseCombination assignment operator called." << endl;
        return *this;
    }
    ~MecatronicsCourseCombination() {
        cout << "Mecatronics course combination destroyed" << endl;
    }
};
// A pointer function that defines a grade
void displayAndDestroy(AbstractMecatronicsCourse* course) {
    course->displayCourse();
    course->setGrade(85.5);
    cout << "Grade: " << course->getGrade().letter << endl;
    delete course;
}

int main() {
    // Instances
    AbstractMecatronicsCourse* course1 = new Kinematics("Kinematics Course", 3);
    AbstractMecatronicsCourse* course2 = new ControlSystems("Control Systems Course", 4);
    MecatronicsCourseCombination courseCombination("Combined Course", 3, 4);
    displayAndDestroy(course1);
    displayAndDestroy(course2);
    MecatronicsCourseCombination comboCopy("Copied Course", 2, 2);
    comboCopy = courseCombination; // Operator Overload Instance
    return 0;
}