#include <stdio.h>
#include <stdbool.h>
#include "cpp2c_encapsulation_def.h"
char* message ="The total volume held on the shelf is";
//// Box ////////////
void Bok_Box3_d(Box* b,double dim)//constractor
{
	dim=1;
	b->length=dim;
	b->width=dim;
	b->height=dim;
        Box_print5_const(b);
}

void Box_Box3_ddd(Box* const b,double l, double w, double h)//constractor
{
	b->length=l;
	b->width=w;
	b->height=h;
        Box_print5_const(b);
}
void Box_DBox3(Box* const b)//destractor
{
    printf("Box destructor, %f x %f x %f\n", b->width,b->height,b->length);
}
Box* Box_operatorme_10(Box* const b,double mult)//the oprator function *=
{
    b->width *= mult;
    b->height *= mult;
    b->length *= mult;

    return b;
}
void Box_print5_const(Box* const b){
    printf("Box: %f x %f x %f\n", b->length, b->width, b->height); 

}
//// Shelf ////////////


void Shelf_setBox_6icB(Shelf * s,int index, const Box* const dims)
{
    s->boxes[index] = *dims;
}
double Shelf_getVolume_9const(Shelf* s) 
{
    double vol = 0;
    for (int i = 0; i < NUM_BOXES; ++i)
        vol += (s->boxes[i].width)*(s->boxes[i].length)*(s->boxes[i].height);

    return vol;
}

void Shelf_print_5const(Shelf* s) 
{
    printf("%s %f\n", message, Shelf_getVolume_9const(s));
}
