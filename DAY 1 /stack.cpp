#include<iostream>
#include<stack>
using namespace std;

class Stack {
public:
    int *arr;
    int top;
    int size;

    Stack(int size) {
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data) {
        if(top < size - 1) {
            top++;
            arr[top] = data;
        } else {
            cout << "Stack overflow" << endl;
        }
    }

    void pop() {
        if(top >= 0) {
            top--;
        } else {
            cout << "Stack underflow" << endl;
        }
    }

    int peek() {   // changed return type to int
        if(top >= 0) {
            return arr[top];
        } else {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }

    bool empty() {
        return top == -1;
    }
};

int main() {
    Stack st(5);
    st.push(22);
    st.push(33);
    st.push(44);

    cout << "Top element is: " << st.peek() << endl;

    st.pop();
    cout << "Top after pop: " << st.peek() << endl;

    

    /*stack<int>s;

    s.push(2);
    s.push(3);

    s.pop();

    cout<<"Printing the top element: "<<s.top()<<endl;
   

    if(s.empty()){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"Stack is not empty"<<endl;
    }

    cout<<"Size of the stack is: "<<s.size()<<endl;
    
    return 0;*/

}
