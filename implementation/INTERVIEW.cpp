16) Name some applications which use Linked Lists.
Both queues and stacks can be implemented using a linked list. Some of the other applications that use linked list are a binary tree, skip, unrolled linked list, hash table, etc.

17) Differentiate between singly and doubly linked lists?
Doubly linked list nodes consist of three fields: an integer value and two links pointing to two other nodes (one to the last node and another to the next node).

On the other hand, a singly linked list consists of a link which points only to the next node.

18) What is the main advantage of a linked list?
The main advantage of a linked list is that we do not need to specify a fixed size for the list. The more elements we add to the chain, the bigger the chain gets.

19) How can someone add an item to the beginning of the list?
Adding an item to the beginning of the list, we need to follow the given steps:

Create a new item and set up its value.
Link the newly created item pointing to the head of the list.
Set up the head of the list as our new item.
If we are using a function to do this operation, we need to alter the head variable.

20) How can someone insert a node at the end of Linked List?
This case is a little bit difficult as it depends upon the type of implementation. If we have a tail pointer, then it is simple. In case we do not have a tail pointer, we will have to traverse the list until we reach to the end (i.e., the next pointer is NULL). Then we need to create a new node and make that last node?s next pointer point to the new node.
