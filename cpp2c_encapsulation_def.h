#ifndef __CPP2C_ENCAPSULATION_DEFS_H__
#define __CPP2C_ENCAPSULATION_DEFS_H__
//----------------------------------
#define NUM_BOXES 3
static char* const DEF_MSG="The total volume held on the shelf is";
extern char* message; 
typedef struct{
    double width;
    double height;
    double length;
}Box;

void Bok_Box3_d(Box* const b,double dim);//constractor
void Box_Box3_ddd(Box* const b,double l, double w, double h);//constractor
void Box_DBox3(Box* const b);//destractor
double Box_getWidth8_const(Box* const b);
double Box_getLength9_const(Box* const b);
double Box_getHeight9_const(Box* const b);

Box* Box_operatorme_10(Box* const b,double mult);//the oprator function *=
void Box_print5_const(Box* const b);


//// Box Defs ////////////
/*double Box_getWidth_const(Box* const b) 
{
    return b->width;
}

double Box_getLength_const(Box* const b) 
{
    return b->length;
}
double Box_getHeight_const(Box* const b) 
{
    return b->height;
}*/
/*Box ced_operatorm_9_cBd(Box* const box, double mult)//the overloading oprator * 
{
    Box ret = *box;
    Box_operatorme_10(&ret,mult);
    return ret;
}
Box ced_operatorm_9dcB(double mult,Box* const box)//the overloading oprator *
{
    return ced_operatorm_9_cBd(box, mult);
}
bool ced_operatoree_10cBcB(const Box* lhs,const Box* rhs)//the overloading ==
{
    return lhs.width == Box_getWidth_const(rhs) && 			Box_getHeight_const(lhs) == Box_getHeight_const(rhs) && 	     Box_getLength_const(lhs) == Box_getLength_const(rhs);

}

bool ced_operator_de_10cBcB(const Box* lhs, const Box* rhs)//the overloading !=
{
    return !(ced_operatoree_10cBcB(lhs ,rhs));
}*/

//// Shelf ////////////

typedef struct
{
    Box boxes[NUM_BOXES];
}Shelf;


void Shelf_setBox_6icB(Shelf* s,int index ,const Box* const dims);
double Shelf_getVolume_9const(Shelf* s) ;
Box* Shelf_getBox_6i(Shelf* s,int index);
void Shelf_print_5const(Shelf* s) ;
    
static int Shelf_getNumBoxes_11(Shelf* s);
//static void Shelf_setMessage_10cc(Shelf* s,const char* msg);
/*Box* Shelf_getBox_6i(Shelf* s,int index)
{
    return s->boxes[index];
}
int Shelf_getNumBoxes_11(Shelf* s)
{
    return s->NUM_BOXES;
}

int Shelf_getNumBoxes_11(Shelf* s)
{
    s->message = "msg";
}
*/
#endif // __CPP2C_ENCAPSULATION_DEFS_H__
