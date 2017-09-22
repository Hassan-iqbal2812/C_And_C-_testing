//
//  CodeFights_EdgeOfTheOcean.h
//  FlexeraProjects
//
//  Created by Hassan Iqbal on 22/09/2017.
//  Copyright © 2017 Hassan Iqbal. All rights reserved.
//

#ifndef CodeFights_EdgeOfTheOcean_h
#define CodeFights_EdgeOfTheOcean_h


#endif /* CodeFights_EdgeOfTheOcean_h */

int MakeArrayConsecutive2(const int ArrayWithNumber[], int length){
    
    int returningAmount = 0;
    
    int big= 0;
    
    int small=1;
    
    int temp = 0;
    
    int StoreSmall = 0;
    
    int StoreBig = 0;
    
    // while loop to get the highest value in the array.
    while (big < length-1 || small < length-1)
    {
            
            if (ArrayWithNumber[big] < ArrayWithNumber[small])
            {
                
                temp = big;
                
                big = small;
                
                small = temp;
            }
            else
            {
                if (small == length -1 ||big == length -1 )
                {
                    break;
                }
                    else
                    {
                    
                    small++;
                    
                    }
            }
                
    }
    
    StoreBig = ArrayWithNumber[big];
    
    printf("The Biggest Number is %d \n", StoreBig);
    
    
    big= 0;
    
    small=1;
    
    
    while (big < length-1 || small < length-1)
    {
        
        if (ArrayWithNumber[big] < ArrayWithNumber[small])
        {
            
            temp = big;
            
            big = small;
            
            small = temp;
        }
        else
        {
            if (small == length -1 ||big == length -1 )
            {
                break;
            }
            else
            {
                
                big++;
                
            }
        }
        
    }
    
    StoreSmall = ArrayWithNumber[small];
    printf("The Smallest Number is %d \n", StoreSmall);
    
    int MissingNumbers = 0;
    
    
    
    for (returningAmount = StoreSmall; returningAmount < StoreBig ; returningAmount++) {
        
        for (int index = 0; index < length -1; index++) {
            
            
            if (returningAmount == ArrayWithNumber[index]) {
                
                MissingNumbers++;
                
                break;
                
                
            }
            
        }
        
    }

    printf("There are %d number missing\n", MissingNumbers );
    
    //We will return the amount of numbers in which we need to finish of the array.
    return returningAmount;
    
}


