#include<iostream>
using namespace std;
class Node{ // user defined data type
public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};
class LinkedList{ // user defined data structure
public :
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtIdx(int idx , int val){
      if(idx == 0) insertAtHead(val);
      else if(idx == size) insertAtEnd(val);
      else if(idx < 0  || idx > size) cout<<"invalid index";
      else{
           Node* t = new Node(val);
           Node* temp = head;
           for(int i=1; i<=idx-1; i++){
              temp = temp->next;
           }
           t->next = temp->next;
           temp->next = t;
           size ++;
      }
    }
    int getAtIdx(int idx){
        if(idx < 0 || idx >= size){
            cout<<"Invalid idx";
            return -1;
        }
        // else if (idx == 0) return head->val;
        // else if (idx == size) return tail->val;
        else{
            Node* temp = head;
            for(int i=0; i<idx; i++){
                temp = temp->next;
            }
            return temp->val;
        }
    }
 
 
    void deleteAtidx(int idx){
        if(idx<0 || idx>=size){
            cout<<"Invalid idx";
            return;
        }
        else if (idx == 0) deleteAtHead();
        else if (idx == size-1) deleteAtTail();
        else{
            Node* temp = head;
            for(int i=1; i<=idx-1; i++){
                temp = temp->next;
            }
            temp->next = temp->next->next;
            size--;
        }
    }
    void display(){
        Node* temp = head; //temp is a pointer to the first node in the list, and it 
                           //will be used as an iterator throughout this function
      while (temp != NULL) { //this while loop iterates through all nodes in the linked 
                             //list until it reaches the end of the list where temp == NULL
        cout << temp->val <<" ";
        temp = temp->next; //the iterator, temp, will be used to iterate 
                           //through each node in the linked list
      }
      cout<<endl;

    }
};
int main(){
 LinkedList ll;

 ll.insertAtIdx(2,100);
 ll.display();

 cout<<ll.getAtIdx(3)<<endl;
ll.display();

ll.deleteAtidx(2);
ll.display();


}