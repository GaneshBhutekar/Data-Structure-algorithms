#include<iostream>
#include<vector>
using namespace std;


class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this ->data = data;
        this ->next = NULL;
    }

    ~Node(){

    }
};

void FromHead(Node* &head,Node* &tail,int data){
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
    tail->next = head;
}

void FromTail(Node* &head,Node* &tail,int data){
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
    tail->next = head;
}


void print_list(Node*head){
    Node* temp = head->next;
    cout<<head ->data<<" ";
    while(temp != NULL && temp != head){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


Node* reverse(Node* head){
    if (head == NULL){
        return head;
    }


    Node* prev = NULL;
    Node* next = NULL;
    Node* curr = head;

    do{
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }while(curr != head);
    head->next = prev;   
    return prev;
}

Node* deleteNode(Node*head,int key){
    if (head == NULL){
        return NULL;
    }
    if (head ->next == head){
        delete head;
        return NULL;
    }
    Node* tail = head;
    Node* temp = NULL;
    int status = false;
    while(tail ->next !=  head){
        if (tail->next -> data == key && status == false){
            temp = tail;
            status = true;
        }
        tail=tail->next;
    }

    // temp ke pass prev key ka node hain 
    // tail ke pass head ko point karne wala node hain
    if (temp == NULL && head->data != key){
        return head;
    }
    if (tail->next->data == key){
        Node* demo = tail->next;
        tail->next = tail->next->next;
        head= head->next;
        demo->next = NULL;
        delete demo;
    }
    else{
        Node* demo = temp ->next;
        temp->next = temp->next->next;
        demo ->next = NULL;
        delete demo;
    }
    return head;
}

int main(){
    Node* newnode = new Node(13);
    Node* head = newnode;
    Node* tail = newnode;
    FromTail(head,tail,5);
    FromTail(head,tail,2);
    FromTail(head,tail,13);
    FromTail(head,tail,13);
    FromTail(head,tail,2);
    FromTail(head,tail,2);
    FromTail(head,tail,8);
    FromTail(head,tail,17);
    FromTail(head,tail,12);
    FromTail(head,tail,13);
    FromTail(head,tail,11);
    FromTail(head,tail,9);
    FromTail(head,tail,3);
    FromTail(head,tail,10);
    FromTail(head,tail,17);
    FromTail(head,tail,1);
    FromTail(head,tail,13);
    FromTail(head,tail,6);
    FromTail(head,tail,11);
    FromTail(head,tail,10);
    // 13 5 2 13 13 2 2 8 17 12 13 11 9 3 10 17 1 13 6 11 10 
    print_list(head);
    head = reverse(head);
    cout<<"after reversing "<<endl;
    cout<<head->data<<endl;
    print_list(head);
    cout<<"after deleting"<<endl;
    head = deleteNode(head,130);

    print_list(head);



}