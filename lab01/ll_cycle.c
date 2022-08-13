#include <stddef.h>
#include "ll_cycle.h"

int ll_has_cycle(node *head) {
    /* your code here */
    node *tortois = head;
    node *hare = head;
    
    while (hare) {
	if (!hare->next){
	        return 0;
	}	
	hare = hare -> next -> next;
	tortois = tortois -> next;

    	if (hare == tortois) {
    		return 1;
    	}
    }


    return 0;
}
