https://leetcode.com/problems/palindrome-linked-list/submissions/2033196785/

//Time = O(n), Space = O(1)

class Solution {
public:

    ListNode* reverse(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;

        while (curr != NULL) {

            ListNode* next = curr->next;

            curr->next = prev;

            prev = curr;
            curr = next;
        }

        return prev;
    }

    bool isPalindrome(ListNode* head) {

        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {

            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* secondHalf = reverse(slow);

        ListNode* firstHalf = head;

        while (secondHalf != NULL) {

            if (firstHalf->val != secondHalf->val) {
                return false;
            }

            firstHalf = firstHalf->next;
            secondHalf = secondHalf->next;
        }

        return true;
    }
};











//easy code
//Time = O(n), Space =O(n)

class Solution {
public:
    bool isPalindrome(ListNode* head) {

        vector<int> v;

        while(head != NULL) {
            v.push_back(head->val);
            head = head->next;
        }

        int left = 0;
        int right = v.size() - 1;

        while(left < right) {

            if(v[left] != v[right]) {
                return false;
            }

            left++;
            right--;
        }

        return true;
    }
};
