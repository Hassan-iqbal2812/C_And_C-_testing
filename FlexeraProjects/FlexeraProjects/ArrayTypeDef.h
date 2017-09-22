//
//  ArrayTypeDef.h
//  FlexeraProjects
//
//  Created by Hassan Iqbal on 13/09/2017.
//  Copyright © 2017 Hassan Iqbal. All rights reserved.
//

#ifndef ArrayTypeDef_h
#define ArrayTypeDef_h

typedef struct DiffrentThings{
    
    int HowBig;
    
}DiffrentThings;

    struct list_element{
    
    struct list_element * next;
        
    };

    typedef struct list_element lists_element;

    typedef struct {
    
        lists_element * first;
    
        lists_element * last;
    }list;

    void list_init(list * container)
        {
    
            container->first=0;
            
            container->last=0;
    
        }

        bool list_empty(list * container){
    
            return 0 == container->first;

        }

        lists_element * list_begin(list * container){
            
            return container->first;
            
        }

        lists_element * list_next(lists_element * element){
    
            return element -> next;
    
        }

        lists_element * list_pop_front(list * container){
    
            lists_element * element = container->first;
            
            container->first = container->first->next;
            
            return element;
        }

        void list_push_back(list * container,lists_element * element){
            
            if (list_empty(container)) {
                
                container->first =element;
                
                container->last=element;
            }
            else{
                
                container->last->next = element;
                
                container->last = element;
            }
            
            element->next=0;
        }


//    int values[5] = {50};
//
////    values[0] = 1;
////
//    values[4] = 900;
//
//    int * ptr = &values[0];
//
//    int oranges = *ptr + 6;
//
//
//    printf("Pointer is pointing to %d \n", *ptr );
//
//    printf("Orange is %d \n", oranges );
//
//    ptr++;
//
//    printf("Pointer is pointing to %d \n", *ptr );
    
//}







#endif /* ArrayTypeDef_h */



