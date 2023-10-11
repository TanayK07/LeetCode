class Solution:
     def fullBloomFlowers(self, flowers: List[List[int]], people: List[int]) -> List[int]:
       s1 = sorted([f[0] for f in flowers]) 
       s2 = sorted([f[1] for f in flowers])
       res = []
       for p in people:
           res.append(bisect_left(s1, p + 1) - bisect_right(s2, p - 1))

       return res   