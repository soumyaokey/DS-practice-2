#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *prev
    int data;
    struct node *next;
};
int main(){
    int inp, imp-data;
    struct node*new_node = NULL;
    struct node*tmp = NULL;
    struct node*start= NULL;
    struct node*end= NULL;}
    

    while(1){
        printf("\nPress 1 add a new record \
             \n2 show all the records \
            \n3 to empty check \
            \n4 to show size\
            \n5 to find a record\
            \n6 to clear all the records \
            \n7 to delete a record \
            \n8 to insert a new record\
            \n0 to exit");
        scanf ("%d",&inp);

        printf("\n"); }  
        switch(inp)
            

            case 1:
            printf("\n Enter a number:");
            scanf ("%d" ,&inp_data)
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
            print("\n The doublylinked list is %s Empty", start==NULL?"":"is not");
            break


            case 4: 
           print("the size is:%d",count);
            break;

            case 5:
            flag=0;// 0:not found......and 1:found
            printf("\n Enter search key:");
            scanf("%d",&inp_data);

            if(start==NULL){
                print("\n doubly linked list is empty");
            }else{
                tmp=start;
                do{
                    if(tmp->data==inp_data){
                        print(" the search key %d is found",inp_data);
                        flag=1;
                        break;
                    }
                    tmp=tmp->next;
                }while(tmp!=NULL);


             if(flag==0){
                print(" the search key %d is not found",inp_data);
            }
            }
            break;

            case 6:
            while(start!=NULL){
                tmp=start ->next ;
                free(start);
                start=tmp;
            }
            end=NULL;
            count=0;

            break;

            case 7:
            flag=0;
            printf("\n Enter the value:");
            scanf("%d",&inp_data);

            if (start==NULL)
                print("\n doubly linked list is empty");
                else{
                    tmp=start;
                    do{
                        if(tmp->data==inp_data){
                            if(tmp==start){
                                start=start->next;
                                if(start!=NULL){
                                    start->prev=NULL;
                                }else{
                                    end=NULL;
                                }
                            }else if(tmp==end){
                                end=end->prev;
                                end->next=NULL;
                            }else{
                                tmp->prev->next=tmp->next;
                                tmp->next->prev=tmp->prev;
                            }
                            free(tmp);
                            count--;
                            flag=1;
                            print("\n the value %d is deleted",inp_data);
                            break;
                        }
                        tmp=tmp->next;
                    }while(tmp!=NULL);

                    if(flag==0){
                        print("not match found ...... deletion failed",);
                    }
                

            break;

            case 8:
            printf("\n Enter a value:");
            scanf("%d",&inp_data);

            printf("enter place:");
            scanf("%d",&pos);

            if (pos>count+1 || pos<1){
                print("PLACE OUT OF RANGE....");{
                }else if(pos==count+1){
                   new_node=(struct Node*) malloc(size of(struct Node));
                   new_node->data=inp_data;
                   new_node->next=NULL;
                   new_node->prev=end;
                   if(end!=NULL){
                    end->next=new_node;

                   }
                   end=new_node;
                   if(start==NULL){
                    start=new_node;
                   count++;
                   } else{
                    new_node=(struct Node*) malloc(size of(struct Node));
                    new_node->data=inp_data;
                    if(pos==1){
                        new_node->prev=NULL;
                        new_node->next=start;
                        start->prev=new_node;
                        start=new_node;
                    }else{
                        tmp=start;
                        cr = 1;
                        new node = (struct Node*) malloc(size of(struct Node));
                        new_node->data=inp_data;

                        do{
                            if (cr== place){
                                if(place ==1){
                                    new_node->prev=NULL;
                                    new_node->next=start;
                                    if(start!=NULL){
                                        start->prev=new_node;
                                        start=new_node;
                                    }else{
                                        start=end=new_node;
                                    }
                                }else{
                                    new_node->next=tmp;
                                    new_node->prev=tmp->prev;
                                    new_node->prev->next=new_node;
                                    tmp->prev=new_node;
                                    {
                                        count++;
                                        break;
                                    }
                                    tmp=tmp->next;
                                    cr++;

                                }while(tmp!=NULL);
                                    }
                                    break;
                                }
                            }
                        }
                    

            case 0:

            default:
            exit(0);

        }

        print("\n\n################################\n\n");

    }

    return 0;
}