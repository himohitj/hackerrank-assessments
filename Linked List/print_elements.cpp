/* problem description: Given a pointer to the head of a linked list, print its elements in order, one element per line.*\

    Input Format
    You are given the pointer to the head node of a linked list. There are no other inputs.

    Output Format
    Print the data value of each node in the linked list, one value per line.

    Sample Input
    16
    13
    7

    Sample Output
    16
    13
    7

*/


void printLinkedList(SinglyLinkedListNode* head) {
    int x;
    cin>>x;
    while(head!=NULL){
        cout<<head->data<<endl;
        head = head->next;
    }
}