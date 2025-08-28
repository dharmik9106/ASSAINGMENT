#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int value)
    {
        data = value;
        next = nullptr;
    }
};

class Linklist
{
private:
    Node *head;

public:
    Linklist()
    {
        head = nullptr;
    }
    void Added(int value)
    {
        Node *newNode = new Node(value);

        if (head == nullptr)
        {
            head = newNode;
            return;
        }
        Node *temp = head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    void insert(int value)
    {
        Node *n1 = new Node(value);
        n1->next = head;
        head = n1;
    }

    bool search(int key)
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            if (temp->data == key)
                return true;
            temp = temp->next;
        }
        return false;
    }

    void Delete(int key)
    {
        if (head == nullptr)
            ;
        return;

        if (head->data == key)
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node *prev = nullptr;
        Node *end = head;

        while (end != nullptr && end->data != key)
        {
            prev = end;
            end = end->next;
        }
        if (end == nullptr)
            return;

        prev->next = end->next;
        delete end;
    }

    void reverce()
    {
        Node *prev = nullptr;
        Node *end = head;
        Node *next = nullptr;

        while (end != nullptr)
        {
            next = end->next;
            end->next = prev;
            prev = end;
            end = next;
        }
        head = prev;
    }

    void Display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << "-- ";
            temp = temp->next;
        }
        cout << "NULL " << endl;
    }
};

int main()
{
    Linklist list;
    int choice, value, key;

    do
    {
        cout << "\n--- Linked List Menu ---" << endl;
        cout << "1. Added Node" << endl;
        cout << "2. Insert at Beginning" << endl;
        cout << "3. Search" << endl;
        cout << "4. Delete Node" << endl;
        cout << "5. Reverse List" << endl;
        cout << "6. Display List" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;
    

    switch (choice)
    {
    case 1:
        cout << "Enter value to Added: ";
        cin >> value;
        list.Added(value);
        cout << "value is Added...!" << endl;
        break;

    case 2:
        cout << "Enter value to insert at beginning: ";
        cin >> value;
        list.insert(value);
        cout << "value is inserted...!" << endl;
        break;

    case 3:
        cout << "Enter value to search: ";
        cin >> key;
        if (list.search(key))
            cout << key << " found in list." << endl;
        else
            cout << key << " not found in list." << endl;
        break;

    case 4:
        cout << "Enter value to delete: ";
        cin >> key;
        list.Delete(key);
        cout << "value is deleted..!" << endl;
        break;

    case 5:
        list.reverce();
        cout << "List reversed.you can pressed 6 for display...!" << endl;
        break;

    case 6:
        cout << "Linked List: ";
        list.Display();
        break;

    default:
        cout << "Invalid choice! Press another key...!" << endl;
    }
}
    while (choice != 0);
    
    return 0;
}