#include <iostream>
#include "queue.h"

int main() {
    Queue q1;
    q1.CreateQueue();
    q1.Push(1);
    q1.Push(2);
    q1.Push(3);
    q1.Push(4);
    q1.Push(5);
    std::cout << q1.Size() << std::endl;
    std::cout << q1.Pop() << std::endl;
    std::cout << q1.Pop() << std::endl;
    std::cout << q1.Size() << std::endl;
    std::cout << q1.Front() << std::endl;
    std::cout << q1.Back() << std::endl;
    q1.DeleteQueue();

    return 0;
}