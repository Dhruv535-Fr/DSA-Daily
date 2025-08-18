#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node *random;

    Node(int x){
        this->data = x;
        this->next = NULL;
        this->random = NULL;
    }
};

Node* insertNode(Node* head,int data,int pos){
    Node* newNode = new Node(data);

    if(head == NULL || pos == 0){
        newNode->next = head;
        return newNode; 
    }
    Node* temp = head;
    for(int i = 0;i < pos -1 && temp->next != NULL;i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next = newNode;

    return head;
}
Node* cloneList(Node* head) {
    Node* dummy = new Node(-1);
    Node* temp = dummy;        
    while (head != NULL) {       
        temp->next = new Node(head->data);
        temp = temp->next;                   
        head = head->next;                   
    }

    return dummy->next;
}

void print(Node* head){
    Node *temp = head;
    while(temp != NULL){
        cout << temp->data <<"->";
        temp = temp->next;
    }
    cout << "NULL"<<endl;
}

Node* randomAs(Node* head1,Node* head2){
    unordered_map<Node*,Node*> mp;
    Node* p1 = head1;
    Node* p2 = head2;
    while(head1 != NULL && head2 != NULL){
        mp[p1] = p2;
        p1 = p1->next;
        p2 = p2->next;
    }
    Node* t1 = head1;
    Node* t2 = head2;
    while(t1 != NULL){
        t2->random = mp[t1->random];
        t2 = t2->next;
        t1 = t1->next;
    }
    return head2;
}

int main(){
    Node* ll = NULL;
    int n;
    cout <<"Enter the length of List" << endl;
    cin >> n;
    cout << "Enter the Element seprated by space" << endl;
    for(int i = 0;i < n;i++){
        int data;
        cin >> data;
        ll = insertNode(ll,data,i);
    }
    ll->random = ll->next->next->next;
    ll->next->random = ll->next->next;
    ll->next->next->random = ll;
    ll->next->next->next->random = ll->next->next->next;
    ll->next->next->next->next->random = ll->next->next->next;

    Node *ll2 = cloneList(ll);
    print(ll);
    ll2 = randomAs(ll,ll2);
    print(ll2);
}