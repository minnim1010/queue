//
// Created by mjmj on 2019-12-28.
//

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H

typedef int Data;

class Queue {
private:
    struct Node{
        Data element;
        struct Node *next;
    };
    Node *head;
    Node *tail;
    int size;
    bool Empty();
public:
    void CreateQueue();
    void Push(Data element);
    Data Pop();
    Data Front();
    Data Back();
    int Size();
    void DeleteQueue();
};


#endif //QUEUE_QUEUE_H
