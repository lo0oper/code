#include<bits/stdc++.h>
using namespace std;
struct node{
    char data;
    node* next;
};

void pop(node **head){
    if((*head)->data=='(' || (*head)->data==')')
      { 
        
        (*head)=(*head)->next;
      }
    else
    {
        cout<<(*head)->data; 
        (*head)=(*head)->next;
    }
      
}       
    


void push(node **head, char c){
    if(*head==NULL){
        *head=new node;
       
        (*head)->data=c;
        (*head)->next=NULL;
        
    }
    else{
        
        node *temp2=new node;
        temp2->data=c;
        temp2->next=*head;
        *head=temp2;
        
    }
    node *temp=*head;
   
    
}

int main(){
    char op[400],ex[400];
    int ohead=-1;
    
    
    int t,i,count,j;
    cin>>t;
    while(t--){
        
        node *head=new node;
        head=NULL;
        ohead=-1;
        i=count=0;
                    }
                    else if(ex[i]=='+'){
                        push(&head,ex[i]);
                        }
                    else if(ex[i]=='-' && (head->data=='*' ||head->data=='/' ||head->data=='^'|| ex[i]=='+')){ 
                        push(&head,ex[i]);
                    }
                    else if(ex[i]=='*' &&  (head->data=='/' ||head->data=='^' || ex[i]=='+')){ 
                       push(&head,ex[i]);
                    }
                    else if(e
        cin>>ex;
        while(ex[i]!='\0'){
            
            if(ex[i]=='+'||ex[i]=='-'||ex[i]=='*'||ex[i]=='/'||ex[i]=='^'||ex[i]=='%' || ex[i]=='(' || ex[i]==')'){
                if(ex[i]=='('){
                   
                    push(&head,ex[i]);

                }
                else if(ex[i]==')'){
                     while((head->data)!='(')
                       { pop(&head);
                       }
                    pop(&head);// to discard the last '(' character)
                    
                }
                else if(ex[i]=='+'||ex[i]=='-'||ex[i]=='*'||ex[i]=='/'||ex[i]=='^'||ex[i]=='%' ){
                    if(ex[i]=='^' || head==NULL || head->data=='('){ 
                        push(&head,ex[i]);
                    }
                    else if(ex[i]=='+'){
                        push(&head,ex[i]);
                        }
                    else if(ex[i]=='-' && (head->data=='*' ||head->data=='/' ||head->data=='^'|| ex[i]=='+')){ 
                        push(&head,ex[i]);
                    }
                    else if(ex[i]=='*' &&  (head->data=='/' ||head->data=='^' || ex[i]=='+')){ 
                       push(&head,ex[i]);
                    }
                    else if(ex[i]=='/' && head->data!='^'){ 
                        push(&head,ex[i]);
                    }

                }
            }
            else{
                cout<<ex[i];
            }
            i++;
            
        }// end of the ex array
        free(head);
    
    cout<<endl;
    }

}
