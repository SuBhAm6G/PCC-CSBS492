//Create class ‘Queue’ and implement all methods
#include <iostream>
using namespace std;

class Queue{
    	int arr[5];
    	int front, rear;

public:
    	Queue(){
        	front = rear = -1;
    	}

    	void enqueue(int x){
        	if(rear == 4){
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
    	Queue q;
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
