/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* temp = head;
        while (temp->next != nullptr) {
            ListNode* newNode = new ListNode(__gcd(temp->val, temp->next->val));
            ListNode* temp2 = temp->next;
            temp->next = newNode;
            newNode->next = temp2;
            temp = temp->next->next;
        }
        return head;
    }
};