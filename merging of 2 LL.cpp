//to merge two linked lists at alternate positions
#include<iostream>
using namespace std;

struct LLNode
{
    int data;
    struct LLNode* next;
};
void insertAtBeginning(struct LLNode** head, int dataToBeInserted)
{
    struct LLNode* curr = new LLNode;
    curr->data = dataToBeInserted;
    curr->next = NULL;    
    if(*head == NULL)
            *head=curr; 
    else
        {
            curr->next=*head; 
            *head=curr;
        }
        
}
void display(struct LLNode**node)
{
    struct LLNode *temp= *node;
    if (temp==NULL)
    {
        cout<<"Empty linked list"<<endl;
    }
    while(temp!=NULL)
        {
            if(temp->next!=NULL)
            cout<<temp->data<<" ->";
            else
            cout<<temp->data;
            
            temp=temp->next; 
        }
        
    cout<<endl;
}
void Merge(struct LLNode *A, struct LLNode **B)
{
     struct LLNode *current_inA = A, *current_inB = *B;
     struct LLNode *next_inA, *next_inB;
   
     while (current_inA != NULL && current_inB != NULL)
     {
         next_inA = current_inA->next;
         next_inB = current_inB->next;
         current_inB->next = next_inA;  
         current_inA->next = current_inB;  
         current_inA = next_inA;
         current_inB = next_inB;
    }
    *B = current_inB;
}
int main()
{
     struct LLNode *ListA = NULL, *ListB = NULL;
     insertAtBeginning(&ListA, 8);
     insertAtBeginning(&ListA, 7);
     insertAtBeginning(&ListA, 6);
   
     insertAtBeginning(&ListB, 3);
     insertAtBeginning(&ListB, 2);
     insertAtBeginning(&ListB, 1);
     cout<<"Linked List A: ";
     display(&ListA);
 
     cout<<"Linked List B: ";
     display(&ListB);
    
     cout<<"Merging two Linked Lists at alternate positions";
     Merge(ListA,&ListB);
 
     cout<<"\nOutput Linked List A: ";
     display(&ListA);
 
     return 0;
}
