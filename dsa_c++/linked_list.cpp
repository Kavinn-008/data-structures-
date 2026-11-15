#include <iostream>

using namespace std;

class Node
{
public:
    int value;
    Node *next;

    Node(int val)
    {
        this->value = val;
        next = nullptr;
    }
};

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int length;

public:
    LinkedList(int value)
    {
        Node *newnode = new Node(value);
        head = newnode;
        tail = newnode;
        length = 1;
    }

    ~LinkedList()
    {
        Node *temp = head;
        while (head != nullptr)
        {
            head = temp->next;
            delete temp;
            temp = head;
        }
    }

    void printList()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->value << endl;
            temp = temp->next;
        }
    }

    void getHead()
    {
        cout << head->value << endl;
    }

    void getTail()
    {
        cout << tail->value << endl;
    }

    void getLength()
    {
        cout << length << endl;
    }

    void append(int value)
    {
        Node *temp = new Node(value);
        tail->next = temp;
        tail = temp;
        length++;
    }

    void delLast()
    {
        if (length == 0)
        {
            return;
        }
        if (length == 1)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            Node *temp = head; // int pre = head;
            while (temp->next != tail)
            {                      // while(temp -> next != nullptr){
                temp = temp->next; //      pre = temp;
            } //      temp = temp-> next;}
            tail = temp;
            temp->next = nullptr;
        }
        length--;
    }

    void prepend(int val)
    {
        Node *newnode = new Node(val);
        newnode->next = head;
        head = newnode;
        length++;
    }

    Node *get(int index)
    {
        if (index < 0 || index >= length)
        {
            return nullptr;
        }
        else
        {
            Node *temp = head;
            for (int i = 0; i < index; i++)
            {
                temp = temp->next;
            }
            return temp;
        }
    }
    Node *set(int index, int val){
        Node *temp = head;
        for(int i=0;i<index;i++){
            temp = temp -> next;
        }
        temp -> value = val;
        return temp;
    }
};

int main()
{

    LinkedList *myLinkedList = new LinkedList(4);
    /*
    myLinkedList->getHead();
    myLinkedList->getTail();
    myLinkedList->getLength();

    cout << "\nLinked List:\n";
    myLinkedList->printList();
    */
    myLinkedList->append(6);
    myLinkedList->append(9);
    myLinkedList->append(3);
    myLinkedList->append(78);
    myLinkedList->append(69);

    // myLinkedList->delLast();
    // myLinkedList -> prepend(69);
    // myLinkedList->printList();
    //cout << myLinkedList->get(4)->value << endl;
    //cout<< myLinkedList -> set(4,67)-> value << endl;
}
