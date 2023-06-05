/* ptr11c7 traverses a linked list.
 * It is an example program from Kochan, Stephen,
 * "Programming in C 3rd ed."
 *
 */

#include <stdio.h>

struct entry {
    int value;
    struct entry *next;
};

int main(void) {

    struct entry n1, n2, n3;
    struct entry *list_head, *list_element;

    /* initialize entries */

    n1.value = 100;
    n1.next = &n2;

    n2.value = 200;
    n2.next = &n3;

    n3.value = 300;
    n3.next = (struct entry *) 0;

    list_head = &n1;

    /* print out values of list */

    list_element = list_head;
    while(list_element != (struct entry *) 0) {
        printf("%i\n", list_element->value);
        list_element = list_element->next;
    }

}





