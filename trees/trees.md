# TODO

- [ ] Expand the notes into something more detail that I can refer to
- [X] Put examples here by getting mermaid to work

# Trees

The root node is at the top of the tree and there can be only one root node

The order of an tree is the maximum amount of children in the tree

The degree of the tree is how many children does the root node have

The height of the tree is the maximum number of the level of a tree

### 2 Tree

It is a tree in which each node has only two nodes (Need to change this)

### Node labeling

The root node is labeled as x and the left node is 2x+1 and right node as 2x+2

Usually the root node is labeled as 0

```mermaid
graph TD
a-->2x+1;
a-->2x+2;
```

A complete binary tree is a tree where the nodes labels are continuous

A complete binary tree is a tree where the node labels forms a complete interval if there n then node labels must be 

### Full Binary tree

It is a binary tree where all the levels in the binary tree must be completed

### Traversal

Traversal is a operation where each element in a tree is a transverses in a systematic order

Two types of searches 

#### Breadth-First Search (BFS)

#### Depth-First Search(DFS)

- Inorder Traversal (Left-Root-Right)
- Preorder Traversal (Root-Left-Right) is used to get a copy of a tree
- Postorder Traversal (Left-Right-Root) is used to delete a tree

BFS is used if the goal is to reach the end nodes

DFS is used if you want to explore a branch as much as possible

### Array Representation

Visualizing trees as an array

For skew binary trees it's not feasible 

For Complete binary trees is a good option

For Full binary trees also it's a good option

### Linked List Representation

#### T node
```mermaid
graph TD
a-->b;
a-->c;
b-->d;
b-->e;
c-->f
e-->g
e-->h
h-->i;
```
| Left Child | data | Right Child|
| ------------- | ---- |  ---- |

**Code example**

```cpp
struct tnode{
    tnode<T> *lchild;
    T data;
    tnode<T> *rchild;
}
```

Empty Tree return null

Single Tree rt->lchild = null
<br />
rt->rchild = null

rt here is the pointer of the tree in the linked list format

### Traversals

**Code for having different Traversals**

```cpp
template <class T>
struct tnode{
    tnode<T> *lchild;
    T data;
    tnode<T> *rchild;
};
class binTree{
    private:
        tnode<T> *rt;
    public:
        binTree();
        void preorder();
        void inorder();
        void postorder();
        void rinorder(tnode<T> *);
        void rpreorder(tnode<T> *);
        void rpostorder(tnode<T> *);
        void create();
        int nodecnt();
        int leafcnt();
        ~binTree();
};
```
# Post Order Traversal

- Create a Stack of node pointers init it and push null into it

- Consider root pointer P and init it to root

- As long as there is left child for P, push P in stack and move P to its left child  

- If there is unvisited right child for P push P in stack, move to it's right child and as long as there is left child for P push p to it's stack and move to p in it's child left child. If there is no unvisited for P process the node P and pop the address of the node P

- Repeat the step 4 until the null is pop from the stack 

```cpp
void binTree<T>::postorder(){
    stack<tnode T*> s;
    s.push(NULL);
    tnode<T> *p, *temp;
    p=st; temp=NULL;

    while(p->lchild!=NULL){
        s.push(p);
        p=p->lchild;
    }
    while(p!=NULL){
        if(p->rchild!=NULL&&p->rchild!=temp){
            s.push(p);
            p=p->rchild;
            while(p->lchild!=NULL){
                s.push(p);
                p=p->lchild;
            }
        }
        else{
           /*Code still left to write here*/ 
        }
    }
}
```

Code to delete a Binary Tree
```cpp
binTree<T>::~binTree(){
    stack<tnode T*> s;
    s.push(NULL);

    tnode<T> *p, *temp;
    p=st;
    while(p!=a){
        if(p->rchild!=NULL){
            s.push(p);
        }
        if(p->lchild!=NULL){
            temp=p;
            p=p->lchild;
            delete temp;
        }
        else{
            p=s.pop()
        }
    }
}
```

# LL Rotation
