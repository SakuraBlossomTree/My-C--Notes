class Node:
    def __init__(self, data):
        self.data = data
        self.left = None 
        self.right = None 

def inOrder(node):

    if node:
        inOrder(node.left)
        print(node.data, end=" ")
        inOrder(node.right)

if __name__ in "__main__":
    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    root.right.right = Node(6)

    # Function call
    print("Inorder traversal of binary tree is:")
    inOrder(root)
