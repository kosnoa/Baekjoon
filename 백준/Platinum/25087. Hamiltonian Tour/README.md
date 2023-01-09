# [Platinum V] Hamiltonian Tour - 25087 

[문제 링크](https://www.acmicpc.net/problem/25087) 

### 성능 요약

메모리: 11084 KB, 시간: 148 ms

### 분류

구성적(constructive), 깊이 우선 탐색(dfs), 그래프 이론(graphs), 그래프 탐색(graph_traversal)

### 문제 설명

<p>Hamilton is a Canadian city near Toronto, and a nice place to take a walking tour.</p>

<p>In this problem, Hamilton is represented by a grid of unit cells with $2R$ rows and $2C$ columns, where each cell is either empty (represented by <code>*</code>) or contains a building (represented by <code>#</code>). The cell on the $i$-th row and $j$-th column is represented by $A_{i,j}$ where $1≤i≤2R$ and $1≤j≤2C$. It is not possible to enter cells containing buildings and you can only move to an adjacent cell that shares a side with the current cell (not just a corner). The grid is such that if it is divided evenly into $2×2$ blocks of unit cells, then in each of those blocks, either all four cells are empty, or all four cells are occupied by a building. Let us represent the block formed by $A_{2i-1,2j-1}$, $A_{2i-1,2j}$, $A_{2i,2j-1}$, and $A_{2i,2j}$ cells as $B_{i,j}$ where $1≤i≤R$ and $1≤j≤C$.</p>

<p>Grace is a tourist in Hamilton and wants to visit all the empty cells in Hamilton. Grace is currently in cell $A_{1,1}$. Visiting the same cell twice could be boring for her. Hence, Grace wants to visit each of the empty cells exactly once and finally end in cell $A_{1,1}$. Can you help Grace by providing a string (consisting of directional moves {<code>N</code>, <code>E</code>, <code>S</code>, <code>W</code>} representing the unit moves to the north, east, south, or west respectively) which Grace can follow to visit every empty cell once and end again in $A_{1,1}$.</p>

### 입력 

 <p>The first line of the input gives the number of test cases, $T$. $T$ test cases follow. The first line of each test case contains two integers $R$ and $C$. The next $R$ lines of each test case contains $C$ characters each.</p>

<p>The $j$-th character on the $i$-th of these lines represents the block $B_{i,j}$ formed by the following four cells: $A_{2i-1,2j-1}$, $A_{2i-1,2j}$, $A_{2i,2j-1}$, and $A_{2i,2j}$. If $B_{i,j}=$ <code>#</code>, all four of the cells in $B_{i,j}$ are occupied by a building. Otherwise, if $B_{i,j}=$ <code>*</code>, all four of the cells in $B_{i,j}$ are empty.</p>

### 출력 

 <p>For each test case, output one line containing <code>Case #x: y</code>, where $x$ is the test case number (starting from 1) and $y$ is the answer to the problem as follows.</p>

<p>If there is no solution to the problem, $y$ should be <code>IMPOSSIBLE</code>. Otherwise, $y$ should be a sequence of characters from the set {<code>N</code>, <code>E</code>, <code>S</code>, <code>W</code>}, representing the unit moves (to the north, east, south, or west respectively) in a valid route, starting from $A_{1,1}$, as described in the statement above.</p>

<p>Note that your last move should take you to $A_{1,1}$; this move does not count as visiting the same cell twice.</p>

<p>If there are multiple valid solutions, you may output any one of them.</p>

