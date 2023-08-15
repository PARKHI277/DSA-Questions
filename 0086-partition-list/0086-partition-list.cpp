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
    ListNode* partition(ListNode* head, int x) {
      if( !head || !head->next)
      {
          return head;
      }
       vector<int>nums;
        ListNode *temp = head;
        while(temp != NULL)
        {
            nums.push_back(temp->val);
            temp = temp->next;
            
        }
        vector<int>res;
        
        for(int val : nums)
        {
            if(val < x)
            {
                res.push_back(val);
            }
        }
        for(int val : nums)
        {
            if(val >= x)
            {
                res.push_back(val);
            }
        }
        
        temp = head;
        int i = 0;
        while(temp != NULL)
        {
            temp->val = res[i++];
            temp = temp->next;
        }
        return head;
    }
};