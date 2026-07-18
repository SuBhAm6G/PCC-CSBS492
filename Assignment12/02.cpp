//Create class ‘Queue’ and implement all methods
#include <iostream>
using namespace std;

class Queue{
    	int *arr;
    	int capacity;
    	int front, rear;

public:
    	Queue(int size){
            capacity = size;
            arr = new int[capacity];
        	front = rear = -1;
    	}

        ~Queue(){
            delete[] arr;
        }

    	void enqueue(int x){
        	if(rear == capacity - 1){
            	cout << "Queue Overflow" << endl;
            	return;
        	}

        	if(front == -1)
            		front = 0;

        	arr[++rear] = x;
    	}

    	void dequeue(){
        	if(front == -1 || front > rear){
            		cout << "Queue Underflow" << endl;
            		return;
        	}

        	cout << "Deleted Element: " << arr[front++] << endl;

        	if(front > rear)
            	front = rear = -1;
    	}

    	void peek(){
        	if(front == -1){
            		cout << "Queue is Empty" << endl;
            		return;
        	}

        	cout << "Front Element: " << arr[front] << endl;
    	}

    	void display(){
        	if(front == -1){
            		cout << "Queue is Empty" << endl;
            	return;
        	}

        	cout << "Queue Elements: ";
        	for(int i = front; i <= rear; i++)
            	cout << arr[i] << " ";
        	cout << endl;
    	}
};

int main(){
        int size;
        cout << "Enter queue size: ";
        cin >> size;

        if(size <= 0){
            cout << "Invalid queue size" << endl;
            return 0;
        }

    	Queue q(size);
    	int c;

    	while(1){
        	cout << "1. Enqueue\n2. Dequeue\n3. Peek\n4. Display\n5. Exit\nEnter choice: ";
        	cin >> c;

        switch(c){
            	case 1:
                	int n;
                	cout << "Enter data: ";
                	cin >> n;
                	q.enqueue(n);
                	break;

            	case 2:
                	q.dequeue();
                	break;

            	case 3:
                	q.peek();
                	break;

            	case 4:
                	q.display();
                	break;

            	case 5:
                	return 0;

            	default:
                cout << "Invalid Input\n";
        }
    }

    return 0;
}
