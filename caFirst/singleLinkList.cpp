#include<iostream>
using namespace std;
struct Student {
    int rollNumber;
    int marks;
    string name;
    Student* next;
};

class snglLinkList {
private:
    Student* head;

public:
    snglLinkList() {
        head = nullptr;
    }
    void insert(int rollNumber, string name) {
        Student* newNode = new Student;
        newNode->rollNumber = rollNumber;
        newNode->name = name;
        newNode->next = nullptr;
        if (head == nullptr) {
            head = newNode;
        } else {
            Student* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    Student* search(int rollNumber) {
        Student* temp = head;
        while (temp != nullptr) {
            if (temp->rollNumber == rollNumber) {
                return temp;
            }
            temp = temp->next;
        }
        return nullptr;
    }
};


int main() {
    snglLinkList list;
    
    for (int i = 1; i <= 10; ++i) {
        list.insert(i, "Student" + to_string(i));
    }

    int findRollNumber;
    cout << "Enter roll number to search: ";
    cin >> findRollNumber;

    Student* found = list.search(findRollNumber);
    if (found != nullptr) {
        cout << "Student found: Roll Number = " << found->rollNumber << ", Name = " << found->name << endl;
    } else {
        cout << "Student not found with roll number " << findRollNumber << endl;
    }

    return 0;
}

