#include<bits/stdc++.h>
using namespace std;


class MyCircularQueue {
    
private:
    class Node{
        public:
            int data;
            Node* next;
            Node(int x){
                this->data=x;
                this->next=NULL;
            }
        
    };
    int si;
    int max_si;
    Node* root;
    Node* rear;
    
public:
    MyCircularQueue(int k) {
        si=0;
        max_si=k;
        root=NULL;
        rear=NULL;
    }
    
    bool enQueue(int value) {
        if(si==max_si)
        {
            return false;
        }
        si++;
        Node* newNode=new Node(value);
        if(!root)
        {
            root=newNode;
            rear=newNode;
            rear->next=root;
        }
        else{
            rear->next=newNode;
            rear=newNode;
            rear->next=root;
        }
        return true;
    }
    
    bool deQueue() {
        if(si==0){
            return false;
        }
        si--;
        if(root==rear){
            rear=NULL;
            root=NULL;
        }
        else{
            Node* newRoot=root->next;
            root=newRoot;
            rear->next=root;
        }
        return true;
        
    }
    
    int Front() {
        if(!root){
            return -1;
        }
        return root->data;
        
    }
    
    int Rear() {
        if(!root){
            return -1;
        }
        return rear->data;
    }
    
    bool isEmpty() {
       return root==NULL; 
    }
    
    bool isFull() {
        return si==max_si;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */