#include<iostream>
using namespace std;
int main()
{
    int i, arr[10], num, first, last, middle;
    cout<<"Enter 10 Elements: ";
    for(i=0; i<10; i++)
        cin>>arr[i];
    cout<<"\nEnter Element to be Search: ";
    cin>>num;
    first = 0;
    last = 9;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<num)
            first = middle+1;
        else if(arr[middle]==num)
        {
            cout<<"\nThe number, "<<num<<" found at Position "<<middle+1;
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        cout<<"\nThe number, "<<num<<" is not found in given Array";
    cout<<endl;
    return 0;
}

///////////////////////////////////////////////////////////////////////
#include <iostream>
using namespace std;

struct Student {
    int rollNumber;
    string name;
    // Add other details as needed
    Student* next;
};

class LinkedList {
private:
    Student* head;

public:
    LinkedList() {
        head = nullptr;
    }

    // Function to insert a new student record at the end of the list
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

    // Function to search for a student by roll number
    Student* search(int rollNumber) {
        Student* temp = head;
        while (temp != nullptr) {
            if (temp->rollNumber == rollNumber) {
                return temp; // Found
            }
            temp = temp->next;
        }
        return nullptr; // Not found
    }
};

int main() {
    LinkedList list;
    // Assuming we have a list of 10 students
    for (int i = 1; i <= 10; ++i) {
        list.insert(i, "Student" + to_string(i));
    }

    int rollToFind;
    cout << "Enter roll number to search: ";
    cin >> rollToFind;

    Student* found = list.search(rollToFind);
    if (found != nullptr) {
        cout << "Student found: Roll Number = " << found->rollNumber << ", Name = " << found->name << endl;
    } else {
        cout << "Student not found with roll number " << rollToFind << endl;
    }

    return 0;
}

write a cpp program to find an item in single link list and single link list contain a 10 student record, search according to roll number. in record have name roll number and marks