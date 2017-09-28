//
//  DynamicArrays.h
//  FlexeraProjects
//
//  Created by Hassan Iqbal on 28/09/2017.
//  Copyright © 2017 Hassan Iqbal. All rights reserved.
//

#ifndef DynamicArrays_h
#define DynamicArrays_h



#endif /* DynamicArrays_h */



struct AmountOfArray{
    
    int Amountz;
    
    int Some_Array[];
    
};



void CreatingLengthOfArray (int length){
    
    struct AmountOfArray CreatingDynamicArrays;
    
    CreatingDynamicArrays.Amountz = length;
    
    for (int i = 0; i < length; i++) {
        
        CreatingDynamicArrays.Some_Array[i] = i;
        
        printf("printing asnwear at %d = %d", i , CreatingDynamicArrays.Some_Array[i] );
        
    }
    
    
}




