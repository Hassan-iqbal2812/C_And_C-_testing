//
//  apples.h
//  FlexeraProjects
//
//  Created by Hassan Iqbal on 12/09/2017.
//  Copyright © 2017 Hassan Iqbal. All rights reserved.
//

#include <string.h>

static int letters;

bool checkPalindrome(char * inputString) {
    
    int x = 0;
    
    long y = 0;
    
    long length = 0;
    
    bool incorrect = true;
    
    
    
    printf("%s \n", inputString);
    
    for ( letters = 0; inputString[letters] != '\0'; letters++) {
    
            
    }
    
    length = strlen(inputString);
    
    char Words[letters];
    
    for (int i = 0; i < letters; i++) {
        
        Words[i] = inputString[i];
    
        
        
    }

    
    
    
    if (length == 0) {
        
        printf("This is not a palindrome \n");
        
        return false;
    }
    
    for (int r = 0; r < length; r++) {
        
        if (Words[r] == ' ' || inputString == NULL) {
            
            incorrect = true;
        }
        else{
            
            incorrect = false;
        }
        
    }
    
    y = length - 1;
    
    while (x < y) {
        
        if(inputString[x] == inputString [y]){
            
            x++;
            y--;
            
            incorrect = false;
            
        }
        else{
            
            incorrect = true;
            
            break;
        }
    }
    
    if (incorrect == true) {
        
        printf("This is not a palindrome\n");
        
        return false;
        
        
    }
    else{
        
        printf("This is a palindrome \n");
        
        return true;
    }
    
}
