#include <stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

struct entry  *findEntry (struct entry  *listPtr, int match)
{
     while  ( listPtr != (struct entry *) 0 )
    {
        if ( listPtr->value == match )
            return (listPtr);
        else
            listPtr = listPtr->next;
            return (struct entry *) 0;
    }
}
352

int main()
{
    struct entry  *findEntry (struct entry  *listPtr, int match);
    struct entry  n5, n6, n7;
    struct entry  *listPtr, *listStart = &n5;
    int search;
    n5.value = 500;
    n5.next =  &n6;
    n6.value = 600;
    n6.next =  &n7;
    n7.value = 700;
    n7.next =  0;
    puts("Enter value to locate: ");
    scanf ("%i", &search);
    listPtr = findEntry (listStart, search);
    if ( listPtr != (struct entry *) 0 )
        printf ("Found %i.\n", listPtr->value);
    else
        printf ("Not found.\n");
    return 0;
}













/*
    int i;
    struct entry  n5, n6, n7;
    struct entry *listPointer = &n5;

    n5.value = 500;
    n5.next = &n6;

    n6.value = 600;
    n6.next = &n7;

    n7.value = 700;
    n7.next = (struct entry *) 0;

    while (listPointer != (struct entry *) 0 )
    {
        printf("%i\n", listPointer->value);
        listPointer = listPointer->next;
    }

    
    
    /*
    i = n5.next ->value;
    printf("%i ", i);

    printf("%i\n", n6.next->value);


    //charPtr is a constant pointer to a character.
    char c = 'x';
    char *charPtr = &c;

    char * const charPtr = &c;
    charPtr = &d;

    //“charPtr points to a constant character.
    const char *charPtr = &c;
    charPtr = 'Y';
    */
