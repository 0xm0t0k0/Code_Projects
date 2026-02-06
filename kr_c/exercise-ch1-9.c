//Program to copy input to output replacing each string of one or more blanks by a single blank

#include <stdio.h>

int main(void){
    int c;
    int last_c = 'a'; // Initialize with any non-blank character

    while ((c = getchar()) != EOF) {
        // If current is blank AND last was blank
        if (c == ' ' && last_c == ' ') {
            // Do nothing. We skip printing.
        } 
        else {
            putchar(c);
        }
        
        last_c = c;
    }
}


//Read character if not blank (original state)
//if blank, (shift to another state)
//print blank, getchar until it finds a character that is not blank (shift to original state)
