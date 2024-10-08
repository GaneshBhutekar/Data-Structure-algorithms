#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this-> data=data;
        this-> next=NULL;

    }
    ~Node(){
    }
};
void insertatHead(Node * &head,int data){
    Node *temp = new Node(data);
    temp->next=head;
    head=temp;

}
void insertatTail(Node*&tail,int data){
    Node * temp=new Node(data);
    tail->next=temp;
    tail=temp;
}

void print(Node * head){
    Node *temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;

}

void sorting(Node*head){
    // selection sort
    Node* wall = head;
    Node*tag=NULL;
    while(wall != NULL){
        tag=wall;
        Node* mover = wall->next;
        while(mover!=NULL){
            if (tag->data>mover->data){
                tag=mover;
            }
            mover=mover->next;
        }        
        int temp=tag->data;
        tag->data=wall->data;
        wall->data=temp;

        wall=wall->next;
        
    }

}

void remove_unique(Node*head){
    Node*temp=head;
    while(temp->next !=NULL){
        if (temp->next->data==temp->data){
            Node*todelete=temp->next;
            temp->next=temp->next->next;
            todelete->next=NULL;
            delete todelete;
        }
        else{
            temp=temp->next;
        }

    }
}
int main(){
    Node*node=new Node(10);
    Node*tail=node;
    Node*head=node;
    insertatTail(tail,5);
    insertatTail(tail,7);
    insertatTail(tail,3);
    insertatTail(tail,18);
    insertatTail(tail,18);
    insertatTail(tail,13);
    insertatTail(tail,0);
    insertatTail(tail,5);
    insertatTail(tail,13);
    cout<<"before sorting and deleting duplicate value"<<endl;
    print(head);
    cout<<"after sorting the value"<<endl;
    sorting(head);

    print(head);
    cout<<"after the deleting duplicate value"<<endl;
    remove_unique(head);
    print(head);


}