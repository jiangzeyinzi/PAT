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

  ​



​


### Words:

digits-数字   by commas-用逗号   integers-整数 positive integers正整数   separated by a space-用空格分隔   Polynomials-多项式   Each case occupies 2 lines-每个用例占两行   nonzero terms-非零项   respectively-分别地，各自   exponents-指数   coefficients-系数    accurate to 1 decimal place-精确到一位小数   scattered-分散的   guaranteed-保证   hierarchy-分层、等级制度   pedigree tree-谱系树   non-leaf node-非叶子节点    For the sake of simplicity-简单起见