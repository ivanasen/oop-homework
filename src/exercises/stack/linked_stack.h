#ifndef __LINKED_STACK_H
#define __LINKED_STACK_H

struct StackElement {
    int data;
    StackElement *next;

    StackElement(int data, StackElement *next);
};

class LinkedStack {
private:
    StackElement *top;

    void copy(const LinkedStack &stack);

    void erase();

public:
    LinkedStack();

    LinkedStack(const LinkedStack &stack);

    LinkedStack &operator=(const LinkedStack &stack);

    bool empty() const;

    void push(int element);

    int pop();

    int peek() const;

    ~LinkedStack();
};

#endif