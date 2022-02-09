#include <stdio.h>

enum colors{
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    CYANBLUE,
    BLUE,
    PURPLE
};

struct point{
    int x;
    int y;
};

struct react{
    struct point left_top; 
    struct point right_bottom;
};

struct react getReact(struct react);
struct react setReact(struct react);
struct react * getReactP(struct react *);
struct react * setReactP(struct react *);
void method_01(void);
void method_02(void);

int main(void){

    struct react r, *rp;
    rp = &r;

    r.left_top.x = 1;
    r.left_top.y = 2;
    r.right_bottom.x = 3;
    r.right_bottom.y = 0;

    printf("矩形x左上角坐标分别为, x=%d, y=%d\n", r.left_top.x, r.left_top.y);
    printf("矩形x右下角坐标分别为, x=%d, y=%d\n", r.right_bottom.x, r.right_bottom.y);

    rp->left_top.x = 1;
    rp->left_top.y = 3;
    rp->right_bottom.x = 3;
    rp->right_bottom.y = 1;
    printf("矩形rp左上角坐标分别为, x=%d, y=%d\n", rp->left_top.x, rp->left_top.y);
    printf("矩形rp右下角坐标分别为, x=%d, y=%d\n", rp->right_bottom.x, rp->right_bottom.y);

    r = (struct react){{0, 5}, {2, 3}};
    printf("\n矩形x左上角坐标分别为, x=%d, y=%d\n", r.left_top.x, r.left_top.y);
    printf("矩形x右下角坐标分别为, x=%d, y=%d\n", r.right_bottom.x, r.right_bottom.y);
    return 0;
}

struct react * setReactP(struct react * rp)
{

    rp->left_top.x = 1;
    rp->left_top.y = 3;
    rp->right_bottom.x = 3;
    rp->right_bottom.y = 1;
    return rp;
};




