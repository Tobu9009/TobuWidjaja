#include <stdio.h>
/* The <stdlib.h> header file is needed for malloc. */
#include <stdlib.h>
#include "constants.h"
#include "struct_def.h"
#include "externs.h"

void insert_key (int k) {
  /* Inserts key given by parameter k into the list. */
  /* (Assumes that key is valid.) */
  keyptr x, cur, prev;

  if ((x = (keyptr)malloc(sizeof(struct key_record))) == NULL) {
    printf("Allocation failed.\n"); exit(1);
  }

  /* Obtained space for a new key record. */
  x->value = k;
  x->next = NULL;

  if (h == NULL) { /* List is currently empty. */
    h = x;
  }
  else {
    /* Move to the last node of the list and then insert. */
    cur = h;
    prev = NULL;
    while (cur != NULL) {
      prev = cur;
      cur = cur->next;
    }
    prev->next = x;
  }
  
} /* End of insert_key. */
 
void print_list (void) {
  /* Prints the list pointed to by the global variable h. */
  keyptr cur;

  if (h == NULL)
    printf("The list is empty.\n");
  else {
    cur = h;
    while (cur != NULL) {
      printf("%d\n", cur->value);
      cur = cur->next;
    }
  }
} /* End of print_list. */
