https://leetcode.com/problems/middle-of-the-linked-list/description/


class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        int count = 0;

        ListNode* temp = head;

        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        int middle = count / 2;

        temp = head;

        for(int i = 0; i < middle; i++) {
            temp = temp->next;
        }

        return temp;
    }
};
