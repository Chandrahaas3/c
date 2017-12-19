#include <stdio.h>
#include <limits.h>
 
struct node {
    int data;
    struct node *left;
    struct node *right;
};
 
struct node* getNewNode(int data) {
 
  struct node* newNode = (struct node*)malloc(sizeof(struct node));
  

  newNode->data = data;
  newNode->left = NULL;
  newNode->right = NULL;
   
  return newNode;
}

struct node* generateBTree(){
  
    struct node* root =  getNewNode(1);
  
    root->left = getNewNode(9);
    root->right = getNewNode(12);
  
    root->left->left = getNewNode(4);
    root->left->right = getNewNode(50);
    root->right->right = getNewNode(7);
     
    return root;
}
 

struct node* getMirrorBinaryTree(struct node *root){
    if(root == NULL)
        return NULL;
 
  
    struct node* newNode = getNewNode(root->data);
 
  
    newNode->right = getMirrorBinaryTree(root->left);
    newNode->left = getMirrorBinaryTree(root->right);
 

    return newNode;
}
 

void inOrderTraversal(struct node *nodeptr){
    if(nodeptr != NULL){
       
        inOrderTraversal(nodeptr->left);
       
        printf("%d ", nodeptr->data);
       
        inOrderTraversal(nodeptr->right);
    }
}
int main() {
    struct node *mirror, *root = generateBTree();    
     
  
    printf("Original Tree\n");
    inOrderTraversal(root);
     
    mirror = getMirrorBinaryTree(root);
     
   
    printf("\nMirror Tree\n");
    inOrderTraversal(mirror);
     
    getchar();
    return 0; 
}
