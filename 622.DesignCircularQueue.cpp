#include<bits/stdc++.h>
using namespace std;

//class creating the Node for implementing the data and pointers together
class MyCircularQueue {
    
private:
    class Node{
        //node having data and next pointer
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
        //ensuring the initial value for si and max_si that acts as checkers 
        si=0;
        max_si=k;
        root=NULL;
        rear=NULL;
    }
    
    bool enQueue(int value) {
        //function for dequeing 
        if(si==max_si)
        {//checking if the queue is filled
            return false;
        }
        si++;
        //creating the new node value
        Node* newNode=new Node(value);
        if(!root)
        {//checking the root value if NULL or not
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
        //dequeing function
        if(si==0){
        //checking if the queue is empty or not
            return false;
        }
        si--;
        if(root==rear){
            //checking if the root and rear are same?
            rear=NULL;
            root=NULL;
        }
        else{
            //new Node created and initialized root and rear if the root and rear aren't same
            Node* newRoot=root->next;
            root=newRoot;
            rear->next=root;
        }
        return true;
        
    }
    
    int Front() {
        //func for checking the front data=
        if(!root){
            return -1;
        }
        return root->data;
        
    }
    
    int Rear() {
        //checking the rear data
        if(!root){
            return -1;
        }
        return rear->data;
    }
    
    bool isEmpty() {
        //checking the queue is empty or not?
       return root==NULL; 
    }
    
    bool isFull() {
        //checking if the queue is filled completely or not?
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