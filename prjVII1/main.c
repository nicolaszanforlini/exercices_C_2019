#include <stdio.h>
#include <stdlib.h>

struct s_point
{
    char c;
    int x,y;
};

void affv1(struct s_point);
void affv2(struct s_point *);
void raz(struct s_point *);

int main()
{
    struct s_point p1 = {'X', 20, 30};

    affv1(p1);
    affv2(&p1);

    p1.y = p1.y + 100;
    affv2(&p1);


    raz(&p1);
    affv1(p1);
    affv2(&p1);

    return 0;
}
void affv2(struct s_point *pt)
{
     //pt->y = (*pt).y + 10;
     printf("\n%c %d %d", pt->c, (*pt).x, pt->y);
}
void affv1(struct s_point p)
{
    //p.y = p.y + 10;
    printf("\n%c %d %d", p.c, p.x, p.y);
}

void raz(struct s_point *pt)
{
     pt->c =  'X';
     pt->x = 0;
     pt->y = 0;

}




