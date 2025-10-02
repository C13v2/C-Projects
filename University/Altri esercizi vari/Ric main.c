
#include <stdio.h>
int i=5;
int main()
{

    if(i==0)
        return 0;
    
    printf("Down i = %d\n",i);
    
    i--;
    main();
    printf("Up i = %d\n",i);



}

/*
 
 Down i = 5
 Down i = 4
 Down i = 3
 Down i = 2
 Down i = 1
 Up i = 0
 Up i = 0
 Up i = 0
 Up i = 0
 Up i = 0
 
 */
