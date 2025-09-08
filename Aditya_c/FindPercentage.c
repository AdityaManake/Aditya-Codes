#include <stdio.h>
int main()
{
    char subjects[5][15] = {"Physics", "Chemistry", "Maths", "Computers", "English"};
    float marks[5];
    int i = 0;
    float total = 0;
    float percentage;
     do
     {
         printf("\nEnter the marks of %s out of 100 - ", subjects[i]);
         scanf("%f", &marks[i]);
         if (marks[i] > 100 || marks[i] < 0)
         {
             printf("Please enter a valid marks.\n ");
         }
         else
         {
             i++;
         }
     } while ( i < 5);

   

    for (i = 0; i < 5; i++)
    {
        total = total + marks[i];
    }
    printf("Total Mark is = %.2f", total);
    percentage = (total / 5);
    printf("\nPercentage is = %.2f%%", percentage);

    if (percentage >= 80)
    {
        printf("\nYou got Grade-A");
    }
    else if (percentage >= 65)
    {
        printf("\nYou got Grade-B");
    }
    else if (percentage >= 40)
    {
        printf("\nYou got Grade-C");
    }
    else
    {
        printf("\nYou Failed...!!");
    }

    for (i = 0; i < 5; i++)
    {
        if (marks[i] < 40)
        {
            printf("\nYou failed in %s....!!", subjects[i]);
        }
        else
        {
            printf("\nYou passed in %s....!!", subjects[i]);
        }
    }

    // Finding highest marks
    float bigger = marks[0] ;
    for ( i = 0; i < 5; i++)
    {
        if (marks[i] > bigger)
        {
            bigger=marks[i];
        }
    }
    
   
    // Finding the highest marks subject
    for (i = 0; i < 5; i++)
    {
        if (bigger == marks[i])
        {
            printf("\nYou scored highest marks in %s..!!", subjects[i]);
        }
    }       
    //Finding lowest marks
    float lower = marks[0];
        for ( i = 0 ; i < 5 ; i++)
        {
     
            if (marks[i] < lower)
            {
               lower=marks[i];
            }
            
        }
        //Finding the lowest marks subject
     for (i = 0 ; i < 5 ; i++)
    {
          if (lower == marks[i])
          {
            printf("\nYou scored lowest marks in %s..!!",subjects[i]);
          }
     }
        
    
    return 0;
}