//
//  TypeDefz.h
//  FlexeraProjects
//
//  Created by Hassan Iqbal on 18/09/2017.
//  Copyright © 2017 Hassan Iqbal. All rights reserved.
//

#ifndef TypeDefz_h
#define TypeDefz_h


#endif /* TypeDefz_h */

typedef struct node {
    
    int val;
    
    struct node * Next;

    
} node_t;

    void print_list (const node_t * head){
    
        int times = 0;
        
       const node_t * current = head;
    
        while (current!= NULL) {
        
            if (current!= NULL) {
                
                printf("---------------------%d-------------------\n", current->val);
                
                current = current->Next;
                
                times++;
            }
            
        }
    }

    void push(node_t * head, int val){
         
        node_t * current = head;
        
        while (current->Next != NULL) {
            
            if (current->Next!=NULL) {
                
                current = current->Next;
                
                printf("%d \n",(int)current->Next);
            }
            
        }
        
        current->Next = malloc(sizeof(node_t));
        
        current->Next->val = val;
        
        
    
    }

void pushNumToTop(node_t ** head, int val ){
    
    node_t * newNode;
    
    newNode = malloc(sizeof(node_t));
    
    newNode->val = val;
    
    newNode->Next = *head;
    
    *head = newNode;
    
}

void TakeFromTheTop(node_t ** head){
    
    int value;
    
    node_t * newNodez = NULL;
    
    newNodez = malloc(sizeof(node_t));
    
    newNodez = (*head)->Next;
    
    value = (*head)->val;
    
    free(*head);
    
    *head = newNodez;
    
    
}

void RemovingTheLastItem(node_t ** head){
    
    node_t * RemoveList = *head;
    
    int NumberToRemove;
    
    //NewList = RemoveList;
    
    
    while (RemoveList->Next->Next!=NULL) {
        
        RemoveList = RemoveList->Next;
        
    }
    
    NumberToRemove =RemoveList->Next->val;
    
    free(RemoveList->Next);
    
    RemoveList->Next = NULL;
}


int RemovingASpecificItem(node_t ** head,int Index){
    
    int times = 1;
    
    int *ptr = NULL;
    
    node_t * RemovingThisItem = * head;
    
    node_t * OrigonalList = * head;
    
    while (RemovingThisItem->Next->val == Index) {
        
        times++;
        
        RemovingThisItem = RemovingThisItem->Next;
    }
    
    ptr = RemovingThisItem;
    
    free(ptr);
    
    *ptr = NULL;
    
    for (int i = 0; i <times-1; i++) {
        
        OrigonalList->Next = OrigonalList->Next->Next;
        
    }
    
    
    
    return Index;
    
    
        

    
}



























