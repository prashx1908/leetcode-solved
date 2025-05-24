# Last updated: 25/05/2025, 00:09:07
class Solution(object):
    def minimumBoxes(self, apple, capacity):
        total_app = sum(apple)
        capacity.sort(reverse=True)

        box_count=0
        current_cap = 0
        for cap in capacity:
            current_cap += cap
            box_count += 1
            if current_cap >= total_app:
                return box_count
        