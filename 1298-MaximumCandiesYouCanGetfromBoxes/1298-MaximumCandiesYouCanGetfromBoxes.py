# Last updated: 03/06/2025, 09:02:54
class Solution:
    def maxCandies(self, status: List[int], candies: List[int], keys: List[List[int]], containedBoxes: List[List[int]], initialBoxes: List[int]) -> int:
        n=len(status)
        has_box= [False]*n
        used= [False]*n
        havekey= status[:]
        q=deque()
        for box in initialBoxes:
            has_box[box]=True
            if havekey[box]:
                q.append(box)
                used[box]= True
        totalcand=0
        while q:
            box= q.popleft()
            totalcand += candies[box]

            for k in keys[box]:
                if not havekey[k]:
                    havekey[k]=1
                    if has_box[k] and not used[k]:
                        q.append(k)
                        used[k]= True
            

            for new in containedBoxes[box]:
                if not has_box[new]:
                    has_box[new]= True
                    if havekey[new] and not used[new]:
                        q.append(new)
                        used[new]=True
        return totalcand

        