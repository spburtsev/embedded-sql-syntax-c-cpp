#include <stdio.h>
#include <stdlib.h>

int main() {
    // Example of embedded SQL in C EXEC SQL nope;
    // EXEC SQL;
    /*
        EXEC SQL BEGIN DECLARE SECTION;
    */

    EXEC SQL BEGIN DECLARE SECTION;
    int id;
    char name[50];
    EXEC SQL END DECLARE SECTION;

    EXEC SQL SELECT id, name, 'test' INTO :id, :name FROM employees WHERE id = 1;

    printf("Embedded SQL sample\n");
    return 0;
} 

void select_by_id(int id) {
    EXEC SQL BEGIN DECLARE SECTION;
    char name[50];
    EXEC SQL END DECLARE SECTION;

    EXEC SQL SELECT name INTO :name FROM employees WHERE id = :id;

    printf("Selected name: %s\n", name);
}