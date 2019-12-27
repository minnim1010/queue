//
// Created by mjmj on 2019-12-28.
//

#include "queue.h"
#include <iostream>

void Queue::CreateQueue(){
    this->size = 0;
    this->head = nullptr;
    this->tail = nullptr;
    return;
}

void Queue::Push(int element){
    if(this->head == nullptr)
        this->head = this->tail = new Node;
    else {
        this->tail->next = new Node;
        this->tail = this->tail->next;
    }

    this->tail->element = element;
    this->tail->next = nullptr;
    this->size++;

    return;
}

Data Queue::Pop(){
    Data rv;
    Node *rmv;

    if(Queue::Empty()){
        std::cout << "Queue is Empty!" << std::endl;
        return -1;
    }
    else{
        rv = this->head->element;
        rmv = this->head;
        this->head = this->head->next;
        delete rmv;
        this->size--;
        return rv;
    }
}
Data Queue::Front(){
    return this->head->element;
}
Data Queue::Back(){
    return this->tail->element;
}
bool Queue::Empty(){
    if(this->size == 0) return true;
    else return false;
}
int Queue::Size(){
    return this->size;
}
void Queue::DeleteQueue(){
    Node *i;

    while(true){
        i = this->head;
        if(this->head == this->tail) break;
        this->head = this->head->next;
        delete i;
    }

    return;
}