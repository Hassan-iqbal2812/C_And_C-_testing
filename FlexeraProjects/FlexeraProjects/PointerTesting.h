//
//  PointerTesting.h
//  FlexeraProjects
//
//  Created by Hassan Iqbal on 13/09/2017.
//  Copyright © 2017 Hassan Iqbal. All rights reserved.
//

#ifndef PointerTesting_h
#define PointerTesting_h
#include "ArrayTypeDef.h"

#endif /* PointerTesting_h */

DiffrentThings tester;

int PointerzTest(int b[]){
    
    
    int temp = sizeof(*b);
    
    printf("array size %d \n" , temp);
    
    int start = 0;
    
    int answearsArrayLength = temp + 1;
    
    int big = 0;
    
    int small = 1;
    
    
    int answears [answearsArrayLength];
    
    for (int end = start + 1; end <= temp + 1; end++) {
        
        answears[start] = b[start] * b[end];
        
        printf("The productfor the %d and %d = %d \n", b[start] , b[end] , answears[start]);
        
        start++;
    }
    


    while (small < answearsArrayLength) {
        
        printf(" answearsArrayLength = %d \n", answearsArrayLength);
        
        printf("answear big = %d \n", answears[big]);
        
        printf("answear small = %d \n", answears[small]);
        
        printf("big index = %d \n", big);
        
        printf("small index = %d \n", small);
       
        
        if (answears[big] > answears[small]) {
            
            small++;
        }
        
         else {
            
            answears[big]=answears[small];
            small++;
        }
        
        
    }
    
    printf("big = %d", answears[big]);
    
    return answears[big];
    
}

