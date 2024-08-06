#include <iostream>
#include <vector>

struct Node{
    int value;
    Node *next {nullptr};
}*first=nullptr;

void create_ll(int A[], int size){
    Node *t, *last;

    first = new Node;
    first->value = A[0];
    first->next = nullptr;
    last = first;

    for(std::size_t i {1}; i < size; i++){
        t = new Node;
        t->value = A[i];
        t->next = nullptr;
        last->next = t;
        last = t;
    }
}

int main(){
    int arr[11]{1, 3, 90, 5, 4, 5, 6, 3, 29, 847, 47};    
    create_ll(arr, 11);

    Node* current = first;


    // Count Nodes in the linked list
    int count {0};
    while(current != nullptr){
        count++;
        current = current->next;
    }
    std::cout << "Count:" << count << std::endl;

    // Sum Nodes in the linked list
    int sum {0};
    current = first;
    while(current != nullptr){
        sum+=current->value;
        current = current->next;
    }
    std::cout << "Sum:" << sum << std::endl;

    // Max in the linked list
    current = first;
    int max {current->value};
    while(current != nullptr){
        if(current->value > max){
            max = current->value;
        }
        current = current->next;
    }
    std::cout << "Max:" << max << std::endl;

    // Find in the linked list
    current = first;
    int find {1000};
    while(current != nullptr){
        if(current->value == find){
            std::cout << "Number was found" << std::endl;
            break;
        } else if (current->next == nullptr) {
            std::cout << "Number was not found" << std::endl;
        }
        current = current->next;

    }

    // Print the linked list
    current = first;
    Node* prev = nullptr;
    Node* t = new Node; 
    t->value {100};
    int index_insert {};
    int index_count {1};
    while(index_count != index_insert){
        prev = current;
        current = current->next;
    }
    prev->next = t;
    t->next = current;


    // Insert in sorted linked list
    int value{};
    current = first;
    prev = nullptr;
    Node* t = new Node; 
    t->value {value};
    while((current->value < value) && (current != nullptr)){
        prev = current;
        current = current->next;
    }
    prev->next = t;
    t->next = current;

    // Delete Node in sorted linked list


    // Reverse Linked List
    current = first;
    prev = nullptr;
    Node* temp = nullptr;

    while(current != nullptr){
        temp = prev;
        prev = current;
        current = current->next;
        prev->next = temp;
    }
    first = prev;



    // Print the linked list
    current = first;
    while (current != nullptr) {
        std::cout << current->value << " ";
        current = current->next;
    }
    std::cout << std::endl;

    // Clean up the memory
    current = first;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }

}