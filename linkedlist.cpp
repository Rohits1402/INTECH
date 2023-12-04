#include <iostream>
#include <vector>

struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

int findKthToLast(Node* head, int k) {
    if (head == nullptr || k <= 0) {
        return -1;  
    }

    std::vector<int> elements; 

    Node* current = head;

    while (current != nullptr) {
        elements.push_back(current->data);
        current = current->next;
    }

    if (k <= elements.size()) {
        int index = elements.size() - k;
        return elements[index];
    } else {
        return -1;
    }
}

int main() {
    
    Node* head = new Node(0);
    Node* second = new Node(1);
    Node* third = new Node(1);
    Node* fourth = new Node(2);
    Node* fifth = new Node(3);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;

    int k = 2; 

    int result = findKthToLast(head, k);

    if (result != -1) {
        std::cout << "The " << k << "th to the last element is: " << result << std::endl;
    } else {
        std::cout << "Invalid input or k is greater than the length of the list." << std::endl;
    }

    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
