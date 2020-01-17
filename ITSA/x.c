#include    <stdio.h>
#include    <stdlib.h>

int main()
{
    int i, j, k, l, m=-1;
    int score;

    if(scanf("%d %d %d %d %d", &i, &j, &k, &l, &m)!=EOF){
        if(m!=-1){
            score = (i + j*2 + k*2 + l*2 - m*2);
                if(score>45)
                    printf("A\n");
                else if(score>=35 && score<=45)
                    printf("B\n");
                else if(score>=25 && score<=34)
                    printf("C\n");
                else if(score<25)
                    printf("D\n");
            }
        
    }
}
