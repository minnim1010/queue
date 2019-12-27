//
// Created by mjmj on 2019-12-28.
//

#ifndef QUEUE_QUEUE_HPP
#define QUEUE_QUEUE_HPP

#endif //QUEUE_QUEUE_HPP
#include "queue.h"
#include <iostream>

template<typename Data>
void Queue<Data>::CreateQueue(){
    this->size = 0;
    this->head = nullptr;
    this->tail = nullptr;
    return;
}

template<typename Data>
void Queue<Data>::Push(Data element){
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

template<typename Data>
Data Queue<Data>::Pop(){
    Data rv;
    Node *rmv;

    if(Queue<Data>::Empty()){
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

template<typename Data>
Data Queue<Data>::Front(){
    if(Queue::Empty()){
        std::cout << "Queue is Empty!" << std::endl;
        return -1;
    }
    return this->head->element;
}

template<typename Data>
Data Queue<Data>::Back(){
    if(Queue::Empty()){
        std::cout << "Queue is Empty!" << std::endl;
        return -1;
    }
    return this->tail->element;
}

template<typename Data>
bool Queue<Data>::Empty(){
    if(this->size == 0) return true;
    else return false;
}

template<typename Data>
int Queue<Data>::Size(){
    return this->size;
}

template<typename Data>
void Queue<Data>::DeleteQueue(){
    Node *i;

    while(this->head != this->tail){
        i = this->head;
        this->head = this->head->next;
        delete i;
    }

    return;
}