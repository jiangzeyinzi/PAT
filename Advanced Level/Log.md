### LOG

- A1001   做整数的取位时可以通过do while()免去0的特判，如果三位三位存储记得低位补零，而最高位不需要补零。

- A1002   也要注意特殊情况下的格式问题(空格)。

  ```
  const double eps = 1e-8;
  if(fabs(c[i])>eps)
  ```


- A1003   Dijkstra单源最短路径-加点权-加输出最短个数。无向边要求在输入图时用`G[u][v] = w; G[v][u] = w;`

  ```
  for(int v=0; v<n; v++){
    if(vis[v]==false && G[u][v]!=INF){
      if(d[v]>d[u]+G[u][v]){
        d[v] = d[u] + G[u][v];
        src[v] = src[u] + weight[v]; 
        num[v] = num[u];
      }
      else if(d[v]==d[u]+G[u][v]){
        if(weight[v]+src[u]>src[v])
        	src[v] = src[u] + weight[v]; 
        num[v] += num[u];   //最短路径条数与点权无关，必须写在外面
      }
    }
  }
  ```


- A1004   对于树的遍历一般采用静态数组来写比较方便。若设计到层次，则可以结构体中加入layer的描述，该题就是通过对树进行层次遍历，并对每一个节点进行判断是否为空，为空就使该节点对应层次的叶子节点数目+1。    可以直接进行DFS和BFS
- A1005   `sprintf(ans, "%d", sum);`

### TIP:

- 树

  - 中序遍历 确定左右子树         DFS-递归

    先序遍历（第一个）和后序遍历（最后一个）确定根节点         DFS-递归

    层序遍历 确定根节点        BFS-递归

### WORDS:

digits-数字   by commas-用逗号   integers-整数 positive integers正整数   separated by a space-用空格分隔   Polynomials-多项式   Each case occupies 2 lines-每个用例占两行   nonzero terms-非零项   respectively-分别地，各自   exponents-指数   coefficients-系数    accurate to 1 decimal place-精确到一位小数   scattered-分散的   guaranteed-保证   hierarchy-分层、等级制度   pedigree tree-谱系树   non-leaf node-非叶子节点    For the sake of simplicity-简单起见   consecutive words-连续的词   Input Specification-输入规格