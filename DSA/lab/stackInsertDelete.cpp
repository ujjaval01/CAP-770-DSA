#include <iostream>
using namespace std;

#define MAX_SIZE 2

class Stack {
private:
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return (top == -1);
    }

    bool isFull() {
        return (top == MAX_SIZE - 1);
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack overflow! Cannot push more elements." << endl;
            return;
        }
        arr[++top] = value;
        cout << "Inserted " << value << " into the stack." << endl;
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack underflow! Cannot pop from an empty stack." << endl;
            return;
        }
        int removed = arr[top--];
        cout << "Removed " << removed << " from the stack." << endl;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack stack;
    int choice, value;

    do {
        cout << "\nChoose an operation:\n";
        cout << "1. Push\n";
        cout << "2. Pop\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                cout << "Exiting program.\n";
                break;
            default:
                cout << "Invalid choice. Please enter again.\n";
        }
    } while (choice != 4);

    return 0;
}
