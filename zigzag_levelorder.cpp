#include <iostream>
#include <queue>
#include <cstdlib>
using namespace std;

// Node class
class Node {
public:
    Node() { mData = -1; mParent = NULL; mLeft = NULL; mRight = NULL; }
    ~Node() {}
    int data() { return mData; }
    void setData(int data) { mData = data; }
    Node* left() { return mLeft; }
    void setLeft(Node* left) { mLeft = left; }
    Node* right() { return mRight; }
    void setRight(Node* right) { mRight = right; }
    Node* parent() { return mParent; }
    void setParent(Node* parent) { mParent = parent; }
private:
    int mData;
    Node* mLeft;
    Node* mRight;
    Node* mParent;
};

// Tree class
class Tree {
public:
    Tree() { mRoot = NULL; }
    ~Tree() {}
    Node* root() { return mRoot; }
    void addNode(int data);
    void zigzag(Node *node);

private:
    void addNode(Node* node, int data);

private:
    Node* mRoot;
};

void Tree::addNode(int data) {
    if ( mRoot == NULL ) {
        Node* tmp = new Node();
        tmp->setData(data);
        mRoot = tmp;
    }
    else {
        addNode(mRoot, data);
    }
}

void Tree::addNode(Node* node, int data) {
    if ( data <= node->data() ) {
        if ( node->left() != NULL )
            addNode(node->left(), data);
        else {
            Node* tmp = new Node();
            tmp->setData(data);
            tmp->setParent(node);
            node->setLeft(tmp);
        }
    }
    else {
        if ( node->right() != NULL )
            addNode(node->right(), data);
        else {
            Node* tmp = new Node();
            tmp->setData(data);
            tmp->setParent(node);
            node->setRight(tmp);
        }
    }
}

void Tree::zigzag(Node* node) {
    queue<Node*> q;
    q.push(node);

    while ( ! q.empty() ) {
        Node* tmp = q.front();
        q.pop();

        cout << tmp->data() << " ";

        if ( tmp->right() )
            q.push(tmp->right());

        if ( tmp->left() )
            q.push(tmp->left());
    }

    cout << endl;
}

// Test program
int main() {
    Tree* t = new Tree();
    t->addNode(500);
    t->addNode(300);
    t->addNode(600);
    t->addNode(550);
    t->addNode(700);
    t->addNode(750);
    t->addNode(200);
    t->addNode(150);
    t->addNode(250);
    t->addNode(350);
    t->addNode(800);

    t->zigzag(t->root());

    delete t;
}
