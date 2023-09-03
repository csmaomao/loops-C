//This code was made by: Christian Karl B. Garcia
//Math 153 Section 1

#include <stdio.h>

int main(){  //main function
    
    int width, length, b, a, rectangle_area, rectangle_perimeter, choice;  //our counter variables are a and b
        //this will loop the entire program should the user choose to
        do{ 
            //this will loop the input segment should the user input a value less than 1
            do{ 
               printf("\n\nPlease enter a value greater than 0 for the length in cm: "); 
               scanf("%d", &length);
               printf("\nPlease enter a value greater than 0 for the width in cm: ");
               scanf("%d", &width);
    
               if((width <= 0 )||(length <= 0)){ //condition
        
                printf("\nInvalid input! Please input a value greater than 0");
                    }
               }while((width <= 0 )||(length <= 0));

         printf("\n"); //for spacing purposes
         //draws the rectangle
         for(a = 0; a != length; a++) { 
         
            for (b = 0; b != width; b++ ) { // fill the width

                 if ((a == 0 )||(b == 0)||(a == length-1)||(b == width-1)){  //condition   

                 printf("/"); // we used this symbol because this was the symbol Sir. Daundree used last for example
                }else   
            printf(" "); //this will print a blank space so that the inside of the rectangle would be hollow
            }
         printf("\n"); //keeps the shape of the rectangle
         }

         rectangle_perimeter = length + length + width + width; //Formula for Perimeter of the rectangle
         printf("\nPerimeter of the Rectangle: %d cm", rectangle_perimeter);
         rectangle_area = length*width; //Formula for Area of the rectangle
         printf("\nArea of the Rectangle: %d cm squared", rectangle_area);
        
         printf("\n\nDo you want to restart?"); //choice to restart the program or exit
         printf("\t\n (1) Yes");
         printf("\t\n (2) No");
         printf("\n\nAnswer: ", &choice);
         scanf("%d", &choice);
    
        }while(choice == 1); //choice 1 is false so if the user chooses this it will restart the program

    return 0; 
}