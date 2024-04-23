class ListNode {
    constructor(val) {
        this.val = val;
        this.next = null;
    }
}

function reverseLinkedList(head) {
    if (!head || !head.next) {
        return head; // If the list is empty or has only one node, return the head
    }

    let newHead = reverseLinkedList(head.next); // Recursively reverse the rest of the list

    // Reverse the pointers
    head.next.next = head;
    head.next = null;

    return newHead;
}

// Helper function to create a linked list from an array
function createLinkedList(arr) {
    let dummy = new ListNode(0);
    let current = dummy;
    for (let val of arr) {
        current.next = new ListNode(val);
        current = current.next;
    }
    return dummy.next;
}

// Helper function to convert a linked list to an array
function convertToArray(head) {
    let result = [];
    while (head !== null) {
        result.push(head.val);
        head = head.next;
    }
    return result;
}

// Example usage
let head = createLinkedList([1, 2, 3, 4, 5]);
console.log("Original linked list:", convertToArray(head));

let reversedHead = reverseLinkedList(head);
console.log("Reversed linked list:", convertToArray(reversedHead));
