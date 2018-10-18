#include<stdio.h>
#include<stdlib.h>
int main()
{
    
    int * arry,limit=9,size=0;
    char test[5];
    arry=(int *)malloc(sizeof(int)*10);
    printf("Enter the values to be sorted (Type your name to sort the values at end");
    for(;;size++)
    {
        if(size>=limit)
        {
            arry=(int *)realloc(arry,sizeof(int)*10);
            if(arry==NULL)
            {
                printf("No more allocation");
                return 0;
            }
            limit+=10;
        }
        printf("\n %d :",size);
        scanf("%s",test);

        if(atoi(test))
            *(arry+size)=(int)atoi(test);
        else
            break;
    }
<<<<<<< HEAD
    
    //After taking input you can find all input in arry[]

    for(int i=0;i<=(size-1);i++) //use *arry as arry[]
        printf("%d",arry[i]); 
=======

    for(int i=0;i<=(size-1);i++)
        printf("%d",arry[i]);
>>>>>>> 905d4b2ec136c0bcd4a396c17c5f6863ca0b612d
    
    return 0;
}
