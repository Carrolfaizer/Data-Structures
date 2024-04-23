class ListNode {
    constructor(val) {
        this.val = val;
        this.next = null;
    }
}

function reverseLinkedList(head) {
    let prev = null;
    let current = head;

    while (current !== null) {
        let nextTemp = current.next;
        current.next = prev;
        prev = current;
        current = nextTemp;
    }

    return prev;
}

// Create a linked list
let head = new ListNode(1);
head.next = new ListNode(2);
head.next.next = new ListNode(3);
head.next.next.next = new ListNode(4);
head.next.next.next.next = new ListNode(5);

// Reverse the linked list
let reversedHead = reverseLinkedList(head);

// Print the reversed linked list
let current = reversedHead;
while (current !== null) {
    console.log(current.val);
    current = current.next;
}
