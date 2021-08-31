/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   design_linked_list.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olabrecq <olabrecq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/31 09:38:46 by olabrecq          #+#    #+#             */
/*   Updated: 2021/08/31 09:52:18 by olabrecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 Design your implementation of the linked list. You can choose to use a singly or doubly linked list.
A node in a singly linked list should have two attributes: val and next. val is the value of the current node, and next is a pointer/reference to the next node.
If you want to use the doubly linked list, you will need one more attribute prev to indicate the previous node in the linked list. Assume all nodes in the linked list are 0-indexed.

Implement the t_MyLinkedList class:

    t_MyLinkedList() Initializes the t_MyLinkedList object.
    int get(int index) Get the value of the indexth node in the linked list. If the index is invalid, return -1.
    void addAtHead(int val) Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list.
    void addAtTail(int val) Append a node of value val as the last element of the linked list.
    void addAtIndex(int index, int val) Add a node of value val before the indexth node in the linked list. If index equals the length of the linked list, the node will be appended to the end of the linked list. If index is greater than the length, the node will not be inserted.
    void deleteAtIndex(int index) Delete the indexth node in the linked list, if the index is valid.

 

Example 1:

Input
["t_MyLinkedList", "addAtHead", "addAtTail", "addAtIndex", "get", "deleteAtIndex", "get"]
[[], [1], [3], [1, 2], [1], [1], [1]]
Output
[null, null, null, null, 2, null, 3]

Explanation
t_MyLinkedList myLinkedList = new t_MyLinkedList();
myLinkedList.addAtHead(1);
myLinkedList.addAtTail(3);
myLinkedList.addAtIndex(1, 2);    // linked list becomes 1->2->3
myLinkedList.get(1);              // return 2
myLinkedList.deleteAtIndex(1);    // now the linked list is 1->3
myLinkedList.get(1);              // return 3 
*/

#include <stdio.h>
#include <stdlib.h> 

typedef struct s_MyLinkedList
{
    int x;
    t_MyLinkedList *next;        
} t_MyLinkedList;

/** Initialize your data structure here. */

t_MyLinkedList* myLinkedListCreate() 
{
    t_MyLinkedList *new;

    new = malloc(sizeof(t_MyLinkedList));
    if (!new)
		return (NULL);
    new->next = NULL;
    
    return (new);    
}

/** Get the value of the index-th node in the linked list. If the index is invalid, return -1. */
int myLinkedListGet(t_MyLinkedList* obj, int index) {
  
}

/** Add a node of value val before the first element of the linked list. After the insertion, the new node will be the first node of the linked list. */
void myLinkedListAddAtHead(t_MyLinkedList* obj, int val) {
  
}

/** Append a node of value val to the last element of the linked list. */
void myLinkedListAddAtTail(t_MyLinkedList* obj, int val) {
  
}

/** Add a node of value val before the index-th node in the linked list. If index equals to the length of linked list, the node will be appended to the end of linked list. If index is greater than the length, the node will not be inserted. */
void myLinkedListAddAtIndex(t_MyLinkedList* obj, int index, int val) {
  
}

/** Delete the index-th node in the linked list, if the index is valid. */
void myLinkedListDeleteAtIndex(t_MyLinkedList* obj, int index) {
  
}

void myLinkedListFree(t_MyLinkedList* obj) {
    
}

/**
 * Your t_MyLinkedList struct will be instantiated and called as such:
 * t_MyLinkedList* obj = myLinkedListCreate();
 * int param_1 = myLinkedListGet(obj, index);
 
 * myLinkedListAddAtHead(obj, val);
 
 * myLinkedListAddAtTail(obj, val);
 
 * myLinkedListAddAtIndex(obj, index, val);
 
 * myLinkedListDeleteAtIndex(obj, index);
 
 * myLinkedListFree(obj);
*/