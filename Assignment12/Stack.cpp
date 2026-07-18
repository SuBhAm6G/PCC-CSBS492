//Create class ‘Stack’ and implement all stack methods.
#include <iostream>
using namespace std;
class Stack{
    	int arr[5];
    	int top;
public:
	Stack(){top = -1;}

    	void push(int x){
        	if(top == 4){
            		cout << "Stack Overflow" << endl;
            		return;
        	}
        	arr[++top] = x;
    	}

    	void pop(){

        	if(top == -1){
            		cout << "Stack Underflow" << endl;
            		return;
        	}
        	cout << "Deleted Element: " << arr[top--] << endl;
    	}

    	void peek(){
        	if(top == -1){
            		cout << "Stack is Empty" << endl;
            		return;
        	}
        	cout << "Top Element: " << arr[top] << endl;
    	}

    	void display(){
        	if(top == -1){
            		cout << "Stack is Empty" << endl;
            		return;
        	}
        	cout << "Stack Elements: ";
        	for(int i = top; i >= 0; i--)
            		cout << arr[i] << " ";
        	cout << endl;
    	}
};

 

int main(){
	Stack s;
	int c;
	while(1){
		cout << "1. Push\n2. Pop\n3. Peek\n4. Display\n5. Exit\nEnter choice: ";
		cin >> c;
		switch(c){
			case 1:
				int n;
				cout << "Enter data:";
				cin >> n;
				s.push(n);
				break;
			case 2:
				s.pop();
				break;
			case 3:
				s.peek();
				break;
			case 4:
				s.display();
				break;
			case 5:
				return 0;
			default: 
				cout<<"Invalid Input\n";
		}
	}

    return 0;

}

 






