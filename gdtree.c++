#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *left;
        Node *right;
    
    Node(int data){
        left=NULL;
        right=NULL;
    }
};
class Tree{
    public:
        Node *root;
        Tree(){
            root=NULL;
        }
        void create();
        void inorder(Node *temp);
        void preorder(Node *temp);
        void postorder(Node *temp);
};

void Tree :: create(){
    char side;
    Node *nnode;
    Node *temp;

    do
    {
        cout<<"\n\t Enter the data in the tree";
        nnode=new Node();
        cin>>nnode->data;
        if (nnode->data==-1)
        {
            break;
        }

        if (root==NULL)
        {
            root=nnode;
        }
        else{
            temp=root;
        }
        while (true)
        {
            cout<<"\n\t Enter the data in l/r of the tree: "<<temp->data;
            cin >> side;
            if (temp->left==NULL)
            {
                temp->left==nnode;
                break;
            }
            else{
                
            }
            
        }
        
        
        

    } while (true);
    
}