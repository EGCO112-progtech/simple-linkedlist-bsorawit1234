//
//  main.c
//  simple linkedlist
//
//  Created by Mingmanas Sivaraksa on 4/2/2566 BE.
//

#include <stdio.h>
#include <stdlib.h>
#include "node.h"

int main(int argc, const char * argv[]) {
    // int c=5;
    struct node a,b,*head ;
    // a.value = c;
    // a.next=&b;
    // head=&a;
    // b.value=head->value+3;

    // printf("%d\n", head ->value ); //what value for 5
    // printf("%d\n", head ->next->value ); //what value for 8
/*  Exercise I
    1. Add 1 more than at the end
    2. Add value(11)
    3. Make next become NULL
 */
    // struct node ayo;
    // b.next = &ayo;
    // ayo.value = 11;
    // ayo.next = NULL;
    // printf("%d\n", head->next->next->value );
/*  Exercise II
        1. Add 1 more than at the begining!!!!
        2. Add value (2)
*/
    // struct node wassup;
    // wassup.value = 2;
    // wassup.next = head;
    // head = &wassup;
    
    typedef struct node* NodePtr;
    NodePtr tmp;
    // NodePtr tmp=head; //add temp value to faciliate
    // printf("%d\n", head->value);
    // printf("%d\n", head->next->value);
    // printf("%d\n", head->next->next->value);
    // printf("%d\n", head->next->next->next->value);
    
    /*  Exercise III Use loop to print everything
    */
    // int i, n = 5;
    // tmp = head;
    // for(i = 0; i < n; i++){
    //     printf("%3d", tmp->value);
    //     if(tmp->next == NULL) break;
    //     tmp = tmp->next;
        // What is missing???
    // }
    
   /*  Exercise IV change to while loop!! (you can use NULL to help)*/
    // tmp = head;
    // while(tmp != NULL){
    //     printf("%3d", tmp->value);
    //     tmp = tmp->next;
    // }
    
    // LECTURE
    // typedef struct node Node;
    // NodePtr p = (NodePtr)malloc(sizeof(Node));
    // head=p;
    // head->value = 2;
    // tmp = head;

    // for(int i = 0; i < 3; i++) {
    //     p->next = (NodePtr)malloc(sizeof(Node));
    //     p = p->next;
    //     p->value = tmp->value + 3;
    //     tmp = tmp->next;
    // }
    // p->next = NULL;
    
    // tmp = head;
    // while(tmp != NULL) {
    //     printf("%3d", tmp->value);
    //     tmp = tmp->next;
    // }
    
 /*  Exercise V Use malloc to create all nodes, instead of create a struct!!
         //use a loop to help
          
*/
    NodePtr bruh = (NodePtr)malloc(sizeof(struct node));
    bruh->value = 1;

    head = bruh;
    tmp = head;
    for(int i = 0; i < 5; i++) {
        bruh->next = (NodePtr)malloc(sizeof(struct node));
        bruh = bruh->next;
        bruh->value = tmp->value + i;
        tmp = tmp->next;
    }
    
    tmp = head;
    while(tmp != NULL) {
        printf("%3d", tmp->value);
        tmp = tmp->next;
    }
    printf("\n");
    tmp = head;
    for(int i = 0; i < 6; i++) {
        printf("%3d", tmp->value);
        tmp = tmp->next;
    }


    /*  Exercise VI Free all node !!
         //use a loop to help
    */
    // while(head != NULL) {
    //     tmp = head;
    //     head = head->next;
    //     printf("%3d", tmp->value);
    //     free(tmp);
    // }
    
    return 0;
}
