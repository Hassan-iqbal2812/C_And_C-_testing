//
//  VariableArgments.h
//  FlexeraProjects
//
//  Created by Hassan Iqbal on 28/09/2017.
//  Copyright © 2017 Hassan Iqbal. All rights reserved.
//

#ifndef VariableArgments_h
#define VariableArgments_h
#include <stdarg.h>

int HighestNumber(int amount, ...){
    
    va_list  VALIST;
    
    float sum = 0.0;
    
    int i = 0;
    
    va_start(VALIST, amount);
    
    va_end(VALIST);
    
    return sum/amount;
    
}

#endif /* VariableArgments_h */
