#include <stdio.h>
#include "constants.h"
#include "struct_def.h"
#include "globals.h"
#include "prototypes.h"

int main(void) {
  int key;

  /* Repeatedly obtain keys from the user. Insert a key into the list */
  /* if it is valid (i.e., it is in the range MINKEY through MAXKEY). */
  /* When an invalid key is given, print the list and stop. */
  while (1) {
    printf("Key value? "); scanf("%d", &key);
    if ((key < MINKEY) || (key > MAXKEY)) {
      /* Invalid key. */
      print_list(); break;
    }
    else
      insert_key(key);
  } /* End of while. */
  return 0;
} /* End of main. */
