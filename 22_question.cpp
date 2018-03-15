
//����һ����������������е�����k����㡣
//��Ҫע��ĵ㣺
//1������ΪNULL����kΪ0
//2�������Ȳ���k

/*
struct ListNode {
int val;
struct ListNode *next;
ListNode(int x) :
val(x), next(NULL) {
}
};*/
class Solution {
public:
	ListNode* FindKthToTail(ListNode* pListHead, unsigned int k) {
		if (pListHead == NULL || k == 0)
			return NULL;

		ListNode* slow = pListHead;
		ListNode* fast = pListHead;

		//fast����k-1��
		for (int i = 0; i<k - 1; ++i) {
			if (fast->next != NULL)
				fast = fast->next;
			else
				return NULL;
		}

		while (fast->next != NULL) {
			fast = fast->next;
			slow = slow->next;
		}
		return slow;
	}
}
