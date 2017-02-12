//
//  Queue.hpp
//  DataStructure
//
//  Created by 윤성빈 on 2017. 2. 12..
//  Copyright © 2017년 윤성빈. All rights reserved.
//

#ifndef Queue_hpp
#define Queue_hpp

#include <stdio.h>

template<typename T>
class queue
{
public:
    queue();
    queue(int size);
    ~queue();
    
    T dequeue();
    void enqueue(T item);
    
    unsigned int get_queue_count(){ return curCount; }
private:
    struct queue_node_t
    {
        T node;
        queue_node_t* next;
    };
    
    queue_node_t* headNode;
    queue_node_t* tailNode;
    
    unsigned int curCount;
    unsigned int limitCount;
    
};
#endif /* Queue_hpp */
