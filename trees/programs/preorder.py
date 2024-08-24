class Node:
    def __init__(self, data):
        self.data = data
        self.left = None
        self.right = None

def preOrder(node):

    nodes = []
    nodes.append(node)

    while len(nodes) > 0:

        node = nodes.pop()
        print(node.data, end=" ")

        if node.right is not None:
            nodes.append(node.right)
        if node.left is not None:
            nodes.append(node.left)

if __name__ == "__main__":

    root = Node(1)
    root.left = Node(2)
    root.right = Node(3)
    root.left.left = Node(4)
    root.left.right = Node(5)
    root.right.right = Node(6)

    # Function call
    print("Preorder traversal of binary tree is:")
    preOrder(root)
