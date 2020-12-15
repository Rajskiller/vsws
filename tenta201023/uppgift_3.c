#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<assert.h>
#define COLOR 10

typedef struct{
    char color [COLOR];
    int lenght;
    int depth;
    int height;
}Box;

void printbox(Box box_);
int doubleheight(Box box);
Box createBoxForBoxes(Box b1, Box b2);
int maxval(int val1, int val2);
int fit(Box b1, Box b2);

void printbox(Box box_){
    printf("%s %d,%d,%d\n", box_.color,box_.lenght,box_.depth,box_.height);
}
int doubleheight(Box box){
    box.height=box.height *2;
}
Box createBoxForBoxes(Box b1, Box b2){
    Box temp;
    strcpy(temp.color,"vit");
    temp.lenght=maxval(b1.lenght,b2.lenght);
    temp.depth=maxval(b1.depth,b2.depth);
    temp.height=b1.height+b2.height;
    return temp;
}
int maxval(int val1, int val2)
{
    if(val1>val2) return val1;
    return val2;
}

int fit(Box b1. Box b2)
{
    if(b1.lenght>b2.lenght){
        if(b1.lenght>b2.)
    }
    if(b1.lenght>b2.depth)
    {
        if()
    }
    if(b1.lenght>b2.height){

    }
}
 
int main(void){
    Box mybox1 = {"Gul", 7, 10,12}, mybox2 = {"Svart", 8, 7, 3}, new_box;
    int val=0;
    printbox(mybox1);
    printbox(mybox2);
    mybox2.height=doubleheight(mybox2);
    printbox(mybox2);
    new_box= createBoxForBoxes(mybox1,mybox2);
    printbox(new_box);
    val= fit(mybox1,mybox2);
    printf("\n%d", val);

}