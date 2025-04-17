#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    /* problem 1
    fstream file("output.txt");
    file << "Hello, File!";
    file.close(); */
    /* problem 2
    ifstream file("greeting.txt");
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close(); */
    /* problem 3
    fstream file("user.txt");
    string name;
    cout << "Enter your name: ";
    cin >> name;
    int age;
    cout << "Enter your age: ";
    cin >> age;
    file << "Name: " << name << ", Age: " << age << endl;
    file.close(); */
    /* problem 4
    ifstream file("data.txt");
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close(); */
    /* problem 5
    fstream file1("source.txt");
    fstream file2("target.txt");
    string line;
    while (getline(file1, line)) {
        file2 << line << endl;
    } */
    /* problem 6
    fstream file("essay.txt");
    string word;
    int wordCount = 0;
    while (file >> word) {
        wordCount++;
    }
    cout << wordCount << endl; */
    /* problem 7
    fstream file("numbers.txt");
    string number;
    int sum = 0;
    while (getline(file, number)) {
        sum += stoi(number);
    }
    cout << sum << endl; */
    /* problem 8
    fstream file("values.txt");
    string number;
    int min = 0, max = 0;
    while (getline(file, number)) {
        if (stoi(number) < min) {
            min = stoi(number);
        }
        if (stoi(number) > max) {
            max = stoi(number);
        }
    }
    cout << "Min: " << min << endl;
    cout << "Max: " << max << endl; */
    /* problem 9 and 10
    struct Student {
        int id;
        string name;
        float gpa;
    };
    fstream file("student.txt");
    Student s1;
    cout << "Enter id and name and gpa: ";
    cin >> s1.id >> s1.name >> s1.gpa;
    file << "Id: " << s1.id << " Name: " << s1.name << " gpa: " << s1.gpa << endl;

    string line;
    while (getline(file, line)) {
        cout << line << endl;
    } */
    /* bonus 11
    struct Student {
        int id;
        string name;
        float gpa;
    };
    Student s1;
    Student s2;
    Student s3;
    s1.id = 1; s1.name = " John"; s1.gpa = 2.5;
    s2.id = 2; s2.name = " Bob"; s2.gpa = 3.5;
    s3.id = 3; s3.name = " Sam"; s3.gpa = 4.0;
    fstream file("class.txt");
    file << s1.id << " " << s1.name << " " << s1.gpa;
    file << s2.id << " " << s2.name << " " << s2.gpa;
    file << s3.id << " " << s3.name << " " << s3.gpa; */
    /* bonus 12
    fstream file("class.txt");
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    } */
    /* problem 13
    struct Date {
        int day;
        int month;
        int year;
    };
    Date today;
    cout << "Enter date in DDMMYY format: ";
    cin >> today.day >> today.month >> today.year;
    cout << today.day << "-" << today.month << "-" << today.year << endl; */
    /* problem 14
    struct StudentInfo {
        int id;
        int age;
        string gender;
        float cga;
    };
    StudentInfo Bob;
    Bob.id = 1;
    Bob.age = 18;
    Bob.gender = "male";
    Bob.cga = 3.2;
    cout << Bob.id << " " << Bob.age << " " << Bob.gender << " " << Bob.cga; */
    struct StudentGrade {
        int lab[5] = {1, 2, 3, 4, 5};
        int homework[3] = {5, 5, 5};
        int exam[2] = {8, 7};
    };
    StudentGrade mike;
    int *labptr = mike.lab;
    int *homeworkptr = mike.homework;
    int *examptr = mike.exam;
    int sum = 0, ctr = 0;
    float average = 0;

    return 0;
}