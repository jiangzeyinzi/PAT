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

- A1005   `sprintf(ans, "%d", sum);`将数字以%d存入ans字符串数组中

  将数字从低到高输出：直接while循环每次/和%

  将数字从高到低输出：1、存入字符串再从高位输出   2、DFS()从前往后

- A1006   `sscanf(a.in, "%d:%d:%d", &h1, &m1, &s1);`将字符串按照一定格式存入相应数字中

  ```
  bool great(pNode node1, pNode node2){
    if(node1.hh != node2.hh)   return node1.hh>node2.hh;
    if(node1.mm != node2.mm)   return node1.mm>node2.mm;
    return node1.ss > node2.ss;
  }
  ```

- A1007

- A1008   //

- A1010   前面输出一个整数K之后，接下来的输出直接输入` %d %d`就可以了，不需要留意多余空格的问题。  没必要开两个数组以后再计算存入第三个数组，只需要两个数组，在第二个数组输入时就完成处理，边读入边处理。

- A1011   题中的测试用例结果输出37.975，保留两位小数是37.98，但是程序在运行时若将计算得到的sum输出为.2f会得到37.97，若直接把sum赋值为37.975，则输出37.98，赋值0.975，则输出0.97。神奇？难道不是四舍六入五成双？……总之题中的测试输出不一样，但测试点能全过

- A1012   需要对4门课分数进行存储和排序，可以将分数作为int数组和id一起存储在结构体中，将排名另存一个二维数组，下标对应id和4种排名。结构体中的分数用数组存储这样一来在使用sort时便可以不用重复写4遍，而是使用一个for循环，排序也只需要排n个数，而不是编号长度个无效的排序。   选出4个数中的最大/小值，不要只想到if，可以用for比较快。   使用rank这个名字编译错误，改成Rank。    若有优先级的问题，可以通过一开始的输入就进行控制[0-4]   排序注意同分排序后延。

- A1013   需要添加的边数等于连通块的个数减1。求连通块：1、图的遍历 2、并查集

  删除节点的操作两种方法 1、不遍历该节点，并在dfs中碰到该节点就返回，不用真的删除节点   2、把该节点设为已访问并把所有有关连接设为INF（但要记得备份G），真的删除。

  ```
  #include <cstring>
  memcpy(G_cp, G, sizeof(G));   //拷贝G[maxn][maxn]
  memset(vis, false, sizeof(vis));   //初始化vis[maxn]
  ```

- A1015   题意理解：N是素数，并且在D进制下的逆序的10进制数也是素数。

### TIP:

- 树

  - 中序遍历 确定左右子树         DFS-递归

    先序遍历（第一个）和后序遍历（最后一个）确定根节点         DFS-递归

    层序遍历 确定根节点        BFS-递归

### WORDS:

digits-数字   by commas-用逗号   integers-整数 positive integers正整数   separated by a space-用空格分隔   Polynomials-多项式   Each case occupies 2 lines-每个用例占两行   nonzero terms-非零项   respectively-分别地，各自   exponents-指数   coefficients-系数    accurate to 1 decimal place-精确到一位小数   scattered-分散的   guaranteed-保证   hierarchy-分层、等级制度   pedigree tree-谱系树   non-leaf node-非叶子节点    For the sake of simplicity-简单起见   consecutive words-连续的词   Input Specification-输入规格   Product-乘积   equation-等式   radix-基数   trophy-纪念品，战利品   Lottery-彩票   tie-平局   games' odds-游戏的赔率   Calculus-微积分   Linear Algebra-线性代数   vitally -极其，生死攸关地   Reversible-可逆的   with radix D-转为D进制