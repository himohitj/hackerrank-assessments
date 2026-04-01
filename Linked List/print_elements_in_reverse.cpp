/*
Question: Print the Elements of a Linked List in Reverse

You are given the pointer to the head node of a singly linked list. 
You have to print the elements of the linked list in reverse order, 
each element on a new line.

You must print the list in reverse using recursion.

Function Description:
Complete the function reversePrint in the editor below.

reversePrint has the following parameter(s):
- SinglyLinkedListNode* head: a reference to the head of the list

Input Format:
The first line of input contains t, the number of test cases.
Each test case has the following format:
The first line contains n, the number of elements in the linked list.
Each of the next n lines contains an integer, the data for each node.

Output Format:
For each test case, print the linked list data in reverse order, 
one element per line.
*/


void reversePrint(SinglyLinkedListNode* head) {
    if (head == NULL) return;
    reversePrint(head->next);
    cout << head->data << "\n";
}

