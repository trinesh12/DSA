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
    int pairSum(ListNode* head) {
        int n=0;
         ListNode*tmp=head;
         while(tmp!=nullptr)
         {
            n++;
            tmp=tmp->next;
         }
         tmp=head;
       stack<int>st;
       int i=0;
       while(i<n/2 && tmp!=nullptr)
       {
        st.push(tmp->val);
        tmp=tmp->next;
        i++;
       }
        int ans=0;
       while(tmp!=nullptr)
       {
        int t=st.top();
        st.pop();
        int s=tmp->val;
        int sum=t+s;
        ans=max(sum,ans);
        tmp=tmp->next;
       }
       return ans;
    }
};