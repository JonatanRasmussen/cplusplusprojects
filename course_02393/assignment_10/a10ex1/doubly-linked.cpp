#include "doubly-linked.h"
#include <iostream>

using namespace std;

List::List() {
    first = nullptr;
}

List::~List() {
    Node* current = first;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
}

void List::insert(int n) {
    Node* newNode = new Node{ n, nullptr, nullptr };
    if (first == nullptr) {
        first = newNode;
    } else {
        Node* current = first;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
        newNode->prev = current;
    }
}

void List::reverse() {
    Node* current = first;
    Node* prev = nullptr;
    Node* next = nullptr;
    while (current != nullptr) {
        next = current->next;
        current->next = prev;
        current->prev = next;
        prev = current;
        current = next;
    }
    first = prev;
}

void List::print() {
    Node* current = first;
    while (current != nullptr) {
        cout << current->val << " ";
        current = current->next;
    }
    cout << endl;
}
