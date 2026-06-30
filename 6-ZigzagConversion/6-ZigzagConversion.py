# Last updated: 30/06/2026, 22:12:53
1class Solution:
2    def convert(self, s: str, numRows: int) -> str:
3
4        if numRows == 1 or numRows >= len(s):
5            return s
6
7        rows= [""] * numRows
8        current=0
9        going=True
10
11        for ch in s:
12            rows[current] += ch
13            if current ==0:
14                going = True
15            elif current == numRows -1:
16                going = False
17        
18            if going:
19                current +=1
20            else:
21                current -=1
22        return "".join(rows)
23        