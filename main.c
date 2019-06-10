#include <stdio.h>
#include <ctype.h>

int main()
{
   int c,i, sum;
   int count [27]={0};
   float histo [27];

    printf ("Enter your text:");


   while ((c=getchar()) != EOF) {
        c=toupper(c);
        for (i=65; i<91; i++)
            if (c==i) ++count[i];
    }

    sum=0;
    for (i=0;i<27;i++) {
        sum+=count [i];}

    if (count [i]==0) histo [i]=0;

    else histo [i]=count [i]/(sum);

   for (i=0;i<27;i++)

    printf("Letter %c frequency: %5.5f\n", i+65, histo [i]);
    return 0;



}
