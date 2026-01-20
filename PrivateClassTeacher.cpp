class Teacher {
private:
    string name;
    string subject;
    int experience;

public:
    // Constructor
    Teacher(string n, string s, int e) {
        name = n;
        subject = s;
        experience = e;
    }

    // Getter for name
    string getName() const {
        return name;
    }

    // Display info
    void displayInfo() const {
        cout << "Teacher Name: " << name << endl;
        cout << "Subject: " << subject << endl;
        cout << "Experience: " << experience << " years" << endl;
    }
};