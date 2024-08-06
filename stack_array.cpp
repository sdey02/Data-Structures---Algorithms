//Stack: Last In First Out

#include <iostream>

struct Stack {
    int* arr {nullptr};
    int size{0};
    int top{0};
};

void push(int x, Stack &St){
    if(St.top == St.size-1){
        std::cout << "Stack is filled" << std::endl;
    } else{
        St.top++;
        St.arr[St.top] = x;
    }
}

int pop(Stack &St){
    int x {-1};

    if(St.top == -1){
        std::cout << "Stack is empty" << std::endl;
    } else {
        x = St.arr[St.top];
        St.top--;
    }
    return x;
}

int peak(int location, Stack St){
    int x {-1};

    if((St.top < location) || (St.top-location+1)){
        std::cout << "There is no value." << std::endl;
    } else {
        x = St.arr[St.top-location+1];
    }
    return x;
}



int main() {
     //Initialize Stack at runtime
    Stack St;
    std::cout << "What size of stack do you want? " << std::endl;
    std::cin >> St.size;
    St.arr = new int[St.size];
    St.top = -1;

    //Stack is empty
    if(St.top == -1){
        std::cout << "Stack is empty" << std::endl;
    }

    //Stack is full
    if(St.top == St.size;-1){
        std::cout << "Stack is Full" << std::endl;
    }

    return 0;
}