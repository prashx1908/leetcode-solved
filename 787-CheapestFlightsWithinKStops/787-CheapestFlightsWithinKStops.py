# Last updated: 05/06/2025, 09:48:59
class Solution:
    def findCheapestPrice(self, n: int, flights: List[List[int]], src: int, dst: int, k: int) -> int:
        prices=[float('inf')]*n
        prices[src]=0
        for i in range(k+1):
            tmp= prices.copy()
            for s,d,p in flights:
                if prices[s]==float('inf'):
                    continue
                if p + prices[s] < tmp[d]:
                    tmp[d]= p+prices[s]
            prices=tmp
        return -1 if prices[dst]==float('inf') else prices[dst]
        