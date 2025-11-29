#include <stdio.h>
#include <stdlib.h>

struct node {
    struch node *prev
    int data;
    struct node *next;
};
int main(){
    int inp, inp_data,count=0;
    struct node*new_node= NULL;
    struct node* tmp = NULL;
    struct node* start = NULL;
    struct node* end = NULL;
    

    while(1){
        printf("\nPress 1 add a new record
            \n2 show all the records 
            \n3 to empty check 
            \n4 to show size 
            \n0 to exit");
        scanf ("%d",imp);
        switch(inp){
            

            case 1:
            printf("\n Enter a number:");
            scanf (%d ,&inp-data)
            struct Node *new-node=(struct Node*) malloc(size of(struct Node));
            new-node->data =imp-data;
            new-node->next =null;
            if(start==NULL){
                start = new-node;
            }else{
                new_node->prev=end;
                end->next=new_node;
            }
            end=new-node;
            break;
            
            case 2:

            tmp =start;
            while (tmp!=NULL){
                print("\n%d",tmp->data);
                tmp = tmp-> next;
            }
            break;


            case 3:
            print("\n The doubly linked list is %s Empty", start==NULL?"":"not");
            break


            case 4: 
           printf("\n The size of the doubly linked list is %d", count);
            break;


            case 0:

            default:
            exit(0);
            }

            print("\n\n################################");


        }
        return 0;
    }




