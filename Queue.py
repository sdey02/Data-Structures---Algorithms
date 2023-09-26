class Node:
    def __init__ (self, value):   
        self.value = value # Node has a value assgined
        self.next = None # node has a pointer pointing to next node

class Queue: # Queues are FIFO (First in First Out)
    def __init__ (self, value):
        new_node = Node(value) # Initialize a new node
        self.first = new_node # Set the first node to new_node
        self.last = new_node # Det last node to new_node
        self.length = 1 # Length of the Queue becomes 1

    def enqueue (self, value):
        new_node = Node(value)
        if self.first is None:
            self.first = new_node
            self.last = new_node
        else:
            self.last.next = new_node
            self.last = new_node
        self.length += 1
        return True
    
    def dequeue (self):
        if self.lenghth == 0:
            return None
        temp = self.first
        if self.length == 1:
            self.first = None
            self.last = None
        
        
