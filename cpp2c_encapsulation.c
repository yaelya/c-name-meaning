#include <stdio.h>
#include <stdbool.h>
#include "cpp2c_encapsulation_def.h"
static Box largeBox;
static char flag=0;
//Box_Box3_ddd(&largeBox,10, 20, 30);?????
void ce_thisFunc_8()
{
    printf("\n--- thisFunc() ---\n\n"); 
    static Box box99;
    if(flag==0)
    Box_Box3_ddd(&box99,99, 99, 99);
    flag=1;
    Box_operatorme_10(&box99,10);

}
void thatFunc()
{
    printf("\n--- thatFunc() ---\n\n"); 
    static Box box88;
    Box_Box3_ddd(&box88,88, 88, 88);
    Box_operatorme_10(&box88,10);
}
void ce_doBoxes_7()
{
    printf("\n--- Start doBoxes() ---\n\n");

    Box b1;
    Bok_Box3_d(&b1,3);
    Box b2;
    Box_Box3_ddd(&b2,4, 5, 6);
    
    printf("b1 volume: %f\n", b1.width * b1.length * b1.height);
    printf("b2 volume: %f\n", b2.width * b2.length * b2.height);
     
    Box_operatorme_10(&b1,1.5);
    Box_operatorme_10(&b2,0.5);

    printf("b1 volume: %f\n",b1.width * b1.length * b1.height);
    printf("b2 volume: %f\n",b2.width * b2.length * b2.height);

    Box b3 = b2;
    Box b4 = *Box_operatorme_10(&b2 , 3);
    printf("b3 %s b4\n", (b3.width == b4.width)&&(b3.length == b4.length)&&(b3.height == b4.height) ? "equals" : "does not equal");

    Box_operatorme_10(&b3,1.5);
    Box_operatorme_10(&b4,0.5);
    printf("Now, b3 %s b4\n", (b3.width == b4.width)&&(b3.length == b4.length)&&(b3.height == b4.height) ? "equals" : "does not equal");

    printf("\n--- End doBoxes() ---\n\n");
}


void ce_doShelves_9()
{
    printf("\n--- start doShelves() ---\n\n");

    Box aBox;
    Bok_Box3_d(&aBox,5);

    Shelf aShelf;

    Shelf_print_5const(&aShelf);
    Shelf_setBox_6icB(&aShelf,1,&largeBox);
    Shelf_setBox_6icB(&aShelf,0,&aBox);

    Shelf_print_5const(&aShelf);
    message="This is the total volume on the shelf:";
    Shelf_print_5const(&aShelf);
    message="Shelf's volume:";
    Shelf_print_5const(&aShelf);

    Shelf_setBox_6icB(&aShelf,1,&largeBox);
    Box b;
    Box_Box3_ddd(&b,2,4,6);
    Shelf_setBox_6icB(&aShelf,1, &b);

    printf("\n--- end doShelves() ---\n\n");
}

int main()
{
    printf("\n--- Start main() ---\n\n");

    ce_doBoxes_7();

    ce_thisFunc_8();
    ce_thisFunc_8();
    ce_thisFunc_8();

    ce_doShelves_9();
        
    printf("\n--- End main() ---\n\n");

    return 0;
}
