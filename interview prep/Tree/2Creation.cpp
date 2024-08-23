#include "iostream"
#include "queue"
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

    cout<<"Enter in left node : ";
    root->left=buildTree(root->left);

    cout<<"Enter in right node : ";
    root->right=buildTree(root->right);

    return root;
}

void levelOrderTraversal(node*root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* temp =  q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout << temp->data << " ";

            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
    }
}

int main(){
    node * root = NULL;

// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
    root=buildTree(root);

    levelOrderTraversal(root);
}