# Last updated: 25/05/2025, 00:09:51
class ListNode(object):
    def __init__(self, val=0, next=None):
         self.val = val
         self.next = next


class Solution(object):
    def hasCycle(self, head):
        slow, fast = head,head

        while fast and fast.next:
            slow= slow.next
            fast= fast.next.next

            if slow==fast:
                return True
        return False

        