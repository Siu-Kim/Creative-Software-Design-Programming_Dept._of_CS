#pragma once

#include <iostream>

using namespace std;

template <class T>
class Node {
    public:
        T data;
        Node<T>* next;
};

template <class T>
class List {
private:
    Node<T> *head;
public:
    List() : head(NULL) {};
    ~List();//free resources
    List(T* arr, int n_nodes)//create a list with n_nodes
    {
        for(int i = 0; i < n_nodes; i++){
            push_back(arr[i]);
        }
    };

    void insert_at(int idx, T& data)
    {
        Node<T>* new_Node = new Node<T>;
        new_Node -> data = data;
        new_Node -> next = NULL;

        Node<T>* pre_Node;
        pre_Node = head;

        for(int i = 0; i < idx - 1; i++){
            pre_Node = pre_Node -> next;
        }
        new_Node -> next = pre_Node -> next;
        pre_Node -> next = new_Node;
    };

    void remove_at(int idx);
    {
        Node<T>* pre_Node;
        Node<T>* delete_Node;

        pre_Node = head;
        delete_Node = head;
        for(int i = 0; i < idx; i++){
            per_Node = delete_Node;
            delete_Node = pre_Node -> next;
            if(delete_Node == NULL) return;
        }
        delete delete_Node;
    };

    void pop_back()
    {
        Node<T>* pre_Node;    
        Node<T>* delete_Node;

        if(head == NULL) return;
        pre_Node = head;
        delete_Node = head;
        while(delete_Node -> next != NULL){
            pre_Node = delete_Node;
            delete_Node = pre_Node -> next;
        }    
        pre_Node -> next = NULL;
        delete delete_Node;
    };

    void push_back(const T& val)
    {
        Node<T>* new_Node = new Node<T>*;
        new_Node -> data = val;
        new_Node -> next = NULL;

        Node<T>* last_Node;

        if(head == NULL){
            head = new_Node;
            return;
        }
        else{
            last_Node = head;
            while(last_Node -> next != NULL){
                last_Node = last_Node -> next;
            }
            last_Node -> next = new_Node;
        }
    };

    void pop_front()
    {
        if(head == NULL){
            return;
        }
        Node<T>* delete_Node = head;
        head = head -> next;
        delete delete_Node;
    }

    void push_front(const T& val)
    {
        Node<T>* new_Node = new Node<T>;
        new_Node -> data = val;
        new_Node -> next = NULL;

        new_Node -> next = head;
        head = new_Node;
    }

    friend ostream& operator<<(ostream& out, List& rhs)//print out nodes
    {
        Node<T>* point = rhs.head;

        while(point != NULL){
            out << point -> data << " ";
            point = point -> next;
        }
        out << endl;

        return out;
    }
};
