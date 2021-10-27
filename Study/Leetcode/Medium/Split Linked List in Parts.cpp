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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int count = 0;
        vector<ListNode*> ans;
        ListNode* node = head;
        while(node != NULL) {
            count++;
            node = node->next;
        }
        int i,extra=1;
        node = head;
        for(i=0;i<k;i++) {
            ListNode* prev = NULL;
            ListNode* start = NULL;
            if(i>=count%k)
                extra=0;
            for(int j=0; j<(count/k)+extra; j++) {
                ListNode* temp = new ListNode(node->val);
                if(prev == NULL) {
                    prev = temp;
                    start = temp;
                }
                else {
                    prev->next = temp;
                    prev = temp;
                }
                node=node->next;
            }
            ans.push_back(start);
        }
        return(ans);
    }
};
