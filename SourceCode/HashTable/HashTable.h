//
//  HashTable.hpp
//  DataStructure
//
//  Created by 윤성빈 on 2017. 2. 11..
//  Copyright © 2017년 윤성빈. All rights reserved.
//

#ifndef HashTable_hpp
#define HashTable_hpp

#define MAX_TBL 100

typedef int Key;
typedef int* Value;
typedef int HashFunc(Key k);

enum SlotStatus
{
    EMPTY,
    DELETED,
    INUSE
};

typedef struct _slot
{
    Key key;
    Value val;
    enum SlotStatus status;
    
}Slot;

typedef int HashFunc(Key k);

typedef struct _table
{
    Slot tbl[MAX_TBL];
    HashFunc * hf;
}Table;


void TBLInit(Table *pt, HashFunc * f);
void TBLInsert(Table *pt, Key k , Value v);
Value TBLDelete(Table *pt, Key k);
Value TBLSearch(Table * pt, Key k);





#endif /* HashTable_hpp */
