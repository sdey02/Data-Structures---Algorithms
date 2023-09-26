class Node:
    def __init__ (self, value):   
        self.value = value                  #* Node has a value assgined
        self.next = None                    #* node has a pointer pointing to next node

class Queue:                                #! Queues are FIFO (First in First Out)
    def __init__ (self, value):
        new_node = Node(value)              #* Initialize a new node
        self.first = new_node               #* Set the first node to new_node
        self.last = new_node                #* Set last node to new_node
        self.length = 1                     #* Length of the Queue becomes 1

    def enqueue (self, value):
        new_node = Node(value)              #* Initialize a new node
        if self.first is None:              #! Check to see if self.first is pointing to any node
            self.first = new_node           #* Set the first node to the newly intialized node
            self.last = new_node            #* Set the last node to the newly intialized node
        else:                               #! If self.first is already pointing to a node
            self.last.next = new_node       #* Set the the pointer from the current last node to the newly intialized node so they are linked
            self.last = new_node            #* Set the last node to the newly intialized node
        self.length += 1                    #! Increase length of Queue by 1
        return True
    
    def dequeue (self):
        if self.lenghth == 0:
            return None
        temp = self.first
        if self.length == 1:
            self.first = None
            self.last = None
        else:
            self.first = self.first.next
            temp.next = None
        self.length -= 1
        return temp
        
        
