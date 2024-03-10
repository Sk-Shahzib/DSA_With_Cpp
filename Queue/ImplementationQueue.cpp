#include <iostream>

#define MAX_SIZE 100

class Queue {
private:
    int arr[MAX_SIZE];
    int front;
    int rear;

public:
    Queue() {
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1 && rear == -1;
    }

    bool isFull() {
        return rear == MAX_SIZE - 1;
    }

    void enqueue(int value) {
        if (isFull()) {
            std::cout << "Queue is full. Cannot enqueue.\n";
            return;
        } else if (isEmpty()) {
            front = rear = 0;
        } else {
            rear++;
        }
        arr[rear] = value;
    }

    void dequeue() {
        if (isEmpty()) {
            std::cout << "Queue is empty. Cannot dequeue.\n";
            return;
        } else if (front == rear) {
            front = rear = -1;
        } else {
            front++;
        }
    }

    int getFront() {
        if (isEmpty()) {
            std::cout << "Queue is empty.\n";
            return -1;
        }
        return arr[front];
    }

    void display() {
        if (isEmpty()) {
            std::cout << "Queue is empty.\n";
            return;
        }
        std::cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    std::cout << "Front element: " << q.getFront() << std::endl;

    q.dequeue();
    q.display();

    return 0;
}
