#include "bits/stdc++.h"
using namespace std;

class node {
    public:
    int data;
    node*left;
    node*right;

    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node *buildTree(node*root){
    cout<<"Enter the data : "<<endl;
    int data;
    cin>>data;
    root=new node(data);

    if(data==-1){
        return NULL;
    }

    cout<<"enter the value in left : "<<endl;
    root->left=buildTree(root->left);
    cout<<"enter the value in right : "<<endl;
    root->right=buildTree(root->right);

    return root;
}

void levelOrderTraversal(node * root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node * temp = q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}
void lvlOrdTra2(node * root){
    queue<node*>q;

    q.push(root);
    // q.push(NULL);


    while(!q.empty()){
        node * temp = q.front();
        q.pop();

        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<temp->data<<" ";
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

void inorder(node*root){
    if(root==NULL){
        return;
    }
    //LNR
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);

}

void preorder(node*root){
    if(root==NULL){
        return;
    }
    //NLR
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postorder(node*root){
    if(root==NULL){
        return;
    }

    //LRN;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";

}


int main(){
    node * root = NULL;
    root=buildTree(root);
    levelOrderTraversal(root);
    cout<<endl;
    lvlOrdTra2(root);

    cout<<endl<<"inorder"<<endl;
    inorder(root);

    cout << endl
         << "preorder" << endl;
    preorder(root);
    cout << endl
         << "postorder" << endl;
    postorder(root);

    return 0;
}