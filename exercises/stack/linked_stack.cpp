#include <iostream>

#include "linked_stack.h"

StackElement::StackElement(int data, StackElement *next) : data(data), next(next) {}


void LinkedStack::copy(const LinkedStack &stack) {
    if (this == &stack) {
        return;
    }

    erase();

    StackElement *p = stack.top;
    LinkedStack tmp;
    while (p != nullptr) {
        tmp.push(p->data);
        p = p->next;
    }
    while (!tmp.empty()) {
        push(tmp.pop());
    }
}

void LinkedStack::erase() {
    while (!empty()) {
        pop();
    }
}

LinkedStack::LinkedStack() {
    top = nullptr;
}

LinkedStack::LinkedStack(const LinkedStack &stack) {
    copy(stack);
}

bool LinkedStack::empty() const {
    return top != nullptr;
}

void LinkedStack::push(int element) {
    auto *newTop = new StackElement(element, top);
    top = newTop;
}

int LinkedStack::pop() {
    if (empty()) {
        throw std::runtime_error("Attempt to Pop an empty stack");
    }

    int result = peek();
    StackElement *popped = top;
    top = top->next;
    delete popped;

    return result;
}

int LinkedStack::peek() const {
    if (empty()) {
        throw std::runtime_error("Attempt to Peek an empty stack");
    }

    return top->data;
}

LinkedStack::~LinkedStack() {
    erase();
}

LinkedStack &LinkedStack::operator=(const LinkedStack &stack) {
    copy(stack);
    return *this;
}
