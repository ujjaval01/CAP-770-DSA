#include <iostream>
using namespace std;;


struct Node {
    int data;
    Node* next;
};

class Queue {
private:
    Node* front; // Pointer to the front of the queue
    Node* rear;  // Pointer to the rear of the queue

public:

    Queue() {
        front = nullptr;
        rear = nullptr;
    }

    
    ~Queue() {
        while (!isEmpty())
            dequeue();
    }

   
    bool isEmpty() {
        return front == nullptr;
    }

    
    void enqueue(int data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;

        if (isEmpty()) {
            front = newNode;
            rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }

   
    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Cannot dequeue.\n";
            return;
        }

        Node* temp = front;
        front = front->next;
        delete temp;
    }

    
    void display() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        Node* temp = front;
        cout << "Queue: ";
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        cout << std::endl;
    }
};

int main() {
    Queue queue;
    int choice, element;

    do {
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Display\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter element to enqueue: ";
                cin >> element;
                queue.enqueue(element);
                break;
            case 2:
                queue.dequeue();
                break;
            case 3:
                queue.display();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice, Enter again..\n";
        }
    } while (choice != 4);

    return 0;
}
