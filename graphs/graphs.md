# TODO

- [ ] Extend these notes

# Graphs

Graphs are another type of non-linear data structure that is a tree but without a root node to it

# Representation of Graphs

1. Adjacent Matrix representation
2. Adjacent List representation

## Breath - First Search (BFS) of a graph

BFS of a graph traverses to find all the nodes in the graph

BFS works by making two Lists 

1. Visited
2. Queue or Not Visited

#### How BFS works

1. We will init a queue and a visited list as a Set
2. We will append the root of the graph and also append it to the visited list
3. Then when the queue is not empty we will pop the leftmost element of the queue(which is the first element) and we will print the value
4. Then we want to find it's neighbours and check if they are not visited then we add them to the visited list
5. Continue until the queue is emptied
