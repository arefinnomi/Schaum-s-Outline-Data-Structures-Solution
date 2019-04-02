#include <stdio.h>
#include <stdlib.h>


int main(void)
{
    /* Allocate an array of four integers. */
    /* Initialize all elements to 0.       */
    int *pa = calloc(4,sizeof(int));
    if (pa == NULL)
    {
        printf("calloc() failed in file %s at line # %d", __FILE__,__LINE__);
        exit(1);
    }

    /* Print one of the array elements. */
    printf("pa[3] = %d\n", pa[3]);

    /* Deallocate array pa. */
    free(pa);



    return 0;
}
