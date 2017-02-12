//
//  Queue.cpp
//  DataStructure
//
//  Created by 윤성빈 on 2017. 2. 12..
//  Copyright © 2017년 윤성빈. All rights reserved.
//

#include "Queue.h"
#include <iostream>

template<typename T>
queue<T>::queue()
:limitCount(0)
,curCount(0)
,headNode(0)
,tailNode(0)
{
    
}

template<typename T>
queue<T>::queue(int size)
:limitCount(size)
{
    
}

template<typename T>
queue<T>::~queue()
{
    queue_node_t* node =0;
    while(curCount <= 0)
    {
        node = headNode->next;
        free(headNode);
        if(node == 0)
            break;
    }
}

template<typename T>
T queue<T>::dequeue()
{
    T rslt = headNode->node;
    queue_node_t* nextNode = headNode->next;
    
    free(headNode);
    
    if(nextNode != NULL)
    {
        headNode =nextNode;
    }
    
    curCount--;
    
    return rslt;
}

template<typename T>
void queue<T>::enqueue(T item)
{
    queue_node_t* newNode = (queue_node_t*)malloc(sizeof(queue_node_t));
    newNode->node = item;
    newNode->next = 0;
    
    if(curCount == 0)
    {
        headNode = newNode;
        tailNode = headNode;
    }
    else
    {
        tailNode->next = newNode;
        tailNode = newNode;
    }
    
    curCount ++;
}
