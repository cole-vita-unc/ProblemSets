from typing import List, Dict
from collections import defaultdict
import math

# input - Graph G: [[1,0],[2,0],[2,1], ...] 
# vertex 0 points to 1, etc... 

def DFS(graph: Dict[int, List[int]]) -> tuple[List[int], List[int]]:
    def Explore(u):
        nonlocal time 

        if node not in pre: # Don't explore nodes already visited
            time += 1
            pre[node] = time
            
            for neighbor in graph[node]:
                Explore(neighbor)
            
            time += 1
            post[node] = time

    
    pre = {}
    post = {}
    time = 0

    for node in graph:
        if node not in pre: # Explore node if not visited 
            Explore(node)

    return pre, post



# Convert list representation to dict 
def build_graph(graph_list: List[List[int]]) -> Dict[int, List[int]]:
    graph = defaultdict(list)
    for u, v in graph_list:  # u points to v
        graph[u].append(v)
    return graph

# Example usage
graph_list = [[0,1], [0,2], [1,2]]
graph = build_graph(graph_list)
pre_order, post_order = DFS(graph)

print("Pre-order:", pre_order)
print("Post-order:", post_order)