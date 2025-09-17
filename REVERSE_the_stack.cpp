#include <iostream>
using namespace std;

class mystack {
    int * arr;
    int top,capacity;
public:
    mystack(int n){
        top = -1;
        capacity =n;
        arr= new int[capacity];
    }
    void insert_at_top(int n){
        if(top==capacity-1){
            cout<<"overflow stack"<<endl;
        }else{
            arr[++top]=n;
        }return;
    }
    void pop(){
        if(top==-1) cout<<"underflow stack"<<endl;
        else --top;
    }
    int peek(){
        if(top==-1){
            cout<<"underflow stack"<<endl;
            return -1;
        }
        else return arr[top];
    }

    int size(){
        return top+1;
    }
    bool is_empty(){
        return top == -1;
    }

    void print(){
        for (int i = 0;i<=top;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }

    void reverse(){
       mystack temp(capacity);

        int n = size();
        for (int i = 0; i < n; i++) {
            int x = peek();
            pop();

            
            for (int j = 0; j < n - i - 1; j++) {
                temp.insert_at_top(peek());
                pop();
            }

            
            insert_at_top(x);

            
            while (!temp.is_empty()) {
                insert_at_top(temp.peek());
                temp.pop();
            }
        }
        
        
    } 
};
int main() {
    mystack s(5);
    s.insert_at_top(10);
    s.insert_at_top(20);
    s.insert_at_top(30);

    cout << "Original Stack: ";
    s.print();  

    s.reverse(); 

    cout << "Reversed Stack: ";
    s.print();

    return 0;
}
