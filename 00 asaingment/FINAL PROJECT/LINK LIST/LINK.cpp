#include <iostream>


using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() : head(nullptr) {}

    void insertstart(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertBack(int val) {
        Node* newNode = new Node(val);
        if (!head) {
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next)
            temp = temp->next;
        temp->next = newNode;
    }

    void deletestart() {
        if (!head) return;
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
   
    }

    ~LinkedList() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
       
        }
    }
};

int main (){

    LinkedList list;
    list.insertstart(10);
    list.insertBack(20);
    list.insertstart(5);
        cout << "insertion front at : ";
    list.display(); 
  

    list.deletestart();
        cout << "deleted from  are : "; 
    list.display(); 

    return 0;

}
