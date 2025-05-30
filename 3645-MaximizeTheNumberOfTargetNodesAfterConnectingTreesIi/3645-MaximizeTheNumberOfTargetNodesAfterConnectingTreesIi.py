# Last updated: 30/05/2025, 08:56:01
from collections import deque
from typing import List

class Solution:

    def buildg(self, edges, size):
        graph = [[] for _ in range(size)]
        for u, v in edges:
            graph[u].append(v)
            graph[v].append(u)
        return graph

    def bfs(self, graph):
        n = len(graph)
        cc = [0, 0]  
        nc = [0] * n  
        vis = [False] * n

        queue = deque([(0, 0)])
        vis[0] = True 

        while queue:
            node, c = queue.popleft()
            nc[node] = c
            cc[c] += 1

            for nei in graph[node]:
                if not vis[nei]:
                    vis[nei] = True
                    queue.append((nei, 1 - c))
        return cc, nc

    def maxTargetNodes(self, edges1: List[List[int]], edges2: List[List[int]]) -> List[int]:
        n = len(edges1) + 1
        m = len(edges2) + 1

        t1 = self.buildg(edges1, n)
        t2 = self.buildg(edges2, m)

        c1, nc1 = self.bfs(t1)  
        c2, _ = self.bfs(t2)   

        mc = max(c2)
        res = [0] * n

        for i in range(n):
            res[i] = c1[nc1[i]] + mc

        return res
