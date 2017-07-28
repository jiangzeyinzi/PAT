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

- A1015   题意理解：N是素数，并且在D进制下的逆序的10进制数也是素数。  注意输出Yes和No的时候，NO和No看清楚！！！大坑

  ```
  for(int i=len-1; i>=0; i++)
  	n = n*radix + d[i];   //从高位D进制转化为10进制
  ```

- A1016   一条黄线分为线内等候人和线外等候人，当客户进入线内等候时，他的服务结束his见就可以确定了；在线内等候人均满的时候，看当前服务窗口哪个服务时间最短，最短的出队列，然后线外等候的进改队列。   时间hh:mm转换为mm表示比较方便比较   只要在17：00前轮到服务，那么就会持续到服务结束，不管关门时间   驱动不靠时间，而是靠顾客，一个个顾客输入，从而进队出队。   刚开门进队时，要选择min(线内等候人数，总顾客数)进队，接着再剩余的入队   time是关键字，编译错误。

  ```
  struct Win{
  	int endTime, popTime;   //设置该窗口最后服务的时间endTime和队首服务结束的时间popTime
  	queue<int> q;   //该窗口线内排队的队列
  }win[20];
  ```

  - A1019   //进制转换

  ```
  int index =0;
  do
  {
    z[index++] = n % b;
    n /= b;
  }while(n!=0);
  ```

- A1020   中序加后序，层序输出。中序加后序create()一棵二叉树（递归记得边界），层序输出也就是BFS，记得利用cnt使得末尾不带空格。

- A1021   该题就是判断有几个连通块(使用DFSTrave返回个数)，有一个的话就输出遍历时能获得最深的起始节点号。N (<=10000)说明需要使用指针的形式，如果用静态就会内存超限。

  使用邻接表以后，要注意节点的范围是[0~n-1]还是[1~n]，遍历节点时选择好，另外要注意push_back()的话首先push到下标为0的位置，得从0开始遍历，要注意区分开来，不然容易越界出错。

  如果想输出深度那么直接在DFS(u, depth)中printf()就好，想获取最大的深度，那么定义一个全局变量，每次递归时，判断当前深度与该全局变量的大小，取最大的赋值给全局变量。

  如果要多次遍历，则记得将vis初始化`memset(vis, false, sizeof(vis));`

  也可使用并查集来做，有时间再看。

- A1022   给定每一本书的编号、书名、作者、关键字(多个)、出版社、出版年份，如果使用结构体的话会有很多很多项，然后如果要对每一项都能进行查询得到多个书的编号的话，代码会十分冗长、低效。所以现使用map来查询。可以分别为每一个建立set<string, set<int>>的映射，分别对应书名、作者、关键字、出版社、出版年份与编号的map映射。即给定一个作者，可以输出集合中所有的对应编号，最后再根据查询的方式，传入相应的mp进行查询。    前一行为整数，后一行获取一整行字符串，记得用getchar()   字符串以及map的参数传递速度较慢，尽可能加上引用，该题不加引用运行超时。

  ```
  gets()   //C语言库函数，获取一整行
  scanf("%d: ",&no);   //获取 1: The Testing Book  格式
  getline(cin, tmp);   //C++，title可为string类型，获取一整行
  printf("%d: %s\n",no,tmp.c_str());   //将string用printf输出  str.c_str()
  while(cin>>key)    //test code debug sort keyword获取空格隔开的关键字
  {
    mKey[key].insert(id);   //cin根据空格断开
    char c = getchar();   //接收一个关键字后的空格
    if(c=='\n') break;   //换行就退出
  }
  if(mp.find(str)==mp.end())   printf("Not Found\n");   //find找不到时的写法
  ```

- A1023   大整数运算(struct bign)   实现一个数*2的方法，然后只要统计每个数位的个数是否相同就可以了。(1、可以分别统计再比较 2、可以在一个循环中n1进行++，n2进行--，最后再来一个循环如果cnt==0，则每个数字的个数相同)

- A1024   大整数运算。   运算过程中数会越来越大，不能按照一开始写得来确定数的范围。

  ```
  struct bign{
  	int d[1000];
  	int len;
  	bign(){
  		memset(d, 0, sizeof(d));
  		len = 0;
  	}
  }    //结构体，其实就是每一位存到Int数组中
  bign change(char str[])   //字符串转换成Bign
  void show(bign a)   //输出
  bign add(bign a, bign b){
  	bign c;
  	int carry = 0;
  	for(int i=0; i<a.len || b.len; i++){
  		int tmp = a.d[i]+b.d[i] +carry;
  		c.d[c.len++] = tmp%10;
  		carry = tmp/10;
  	} 
  	if(carry!=0){     //mutil要用while，并再操作carry
  		c.d[c.len++] = carry;
  	}
  	return c;
  }
  ```

- A1025   结构体排序：分局部排名和全局排名，可以在输入的时候就可以把局部的进行排序`sort(stu+cnt, stu+cnt+k, cmp);`，并记录局部排名。输入完毕后再进行全局排名。   在i和j的二层循环时，一定要注意i和j 的使用问题，别使用错了。

- A1026   需求问题，求等待的时间。一般把人放在队列里入队出队，然后需求的物品或人可以建一个结构体，代表当前的状态（何时结束状态）。

- A1027   考虑到如果输出一位需要补零，所以事先使用fill()全部赋值为字符‘0’

  因为只有两位，所以有精简写法，直接`printf("%c%c",mp[r/13], mp[r%13]);`

- A1028   分别写三个sort的cmp

- A1029   中位数的下标(n+m-1)/2，可以利用merge()函数，也可以利用two pointer遍历到中位数就可以了。

- A1030   图论的题目一般编写通过一个用例后若出现其他错误一般就是题目的阅读有问题，注意看清题目的输出要求。  本题涉及到最短路径上的最小花费问题(c[MAXV])和最短路径输出(pre[MAXV])。Dijkstra或Dijkstra+DFS

- A1031   先计算出n1\n2\n3，再一行一行输出

- A1032   参考：构造链表的结构体时，加上一个flag，true代表第一个链表中出现过的节点。之后再遍历第二个链表，遇到flag==true时就跳出，此时的p就是所求的。（遇到与第一条链表相同的节点就可跳出了，不必继续下去，因为链表性质后面的节点肯定都一样）     即根据题目要求给node添加属性，并更新标记。

- **A1033**   若无距离0的加油站，则肯定无法到达。题目中的条件大部分都可能是double型，因为没有说是整数。    贪心：首先将终点的数据进行统一方便操作。

  1、优先前往所达范围内油价更低的加油站

  2、没有油价更低的加油站时，加满油后前往油价尽可能低的加油站

  3、所达范围内没有加油站时结束

- **A1034**   理解题意：总的边权大于阈值为GANG，一个GANG中点权最大为HEAD

  最多有1000条记录，所以最多有2000人。   本题为了累计边权，设“0”为点与点之间相互之间无联系，非INF

  若计算点权有关的数据则在vis[u]=true后进行，计算边权有关的则在for循环里进行。对边权进行求和时，为了防止有环图少加一条边权，则应先累加边权，再进行递归访问，同时为了防止边权被重复累加，应在递归前把改边删除(赋值)

  ```
  map<string, int> sToi;   //字符串转化为数字，以便于存入图
  map<int, string> iTos;   //数字转化为字符串
  int change(string str){
  	if(sToi.find(str) != sToi.end())   //注意写法：如果已经出现过，则直接返回编号
  		return sToi[str];
  	else{                              //没有出现过就增加一个编号
  		sToi[str] = nper;
  		iTos[nper] = str;
  		return nper++;
  	}
  }
  ```

  ​

- A1035   注意字符1，l，0，O，首先构建结构体，再构建结构体类型的vector

- A1036   如果构造结构体没有指明大小，一般就是可以直接通过输入就完成处理（一般是找出最大/最小值），只需要临时的变量或输出变量，而不需要构造结构体数组。

- ​

### TIP:

- 树

  - 中序遍历 确定左右子树         DFS-递归

    先序遍历（第一个）和后序遍历（最后一个）确定根节点         DFS-递归

    层序遍历 确定根节点        BFS-递归

### WORDS:

digits-数字   by commas-用逗号   integers-整数 positive integers正整数   separated by a space-用空格分隔   Polynomials-多项式   Each case occupies 2 lines-每个用例占两行   nonzero terms-非零项   respectively-分别地，各自   exponents-指数   coefficients-系数    accurate to 1 decimal place-精确到一位小数   scattered-分散的   guaranteed-保证   hierarchy-分层、等级制度   pedigree tree-谱系树   non-leaf node-非叶子节点    For the sake of simplicity-简单起见   consecutive words-连续的词   Input Specification-输入规格   Product-乘积   equation-等式   radix-基数   trophy-纪念品，战利品   Lottery-彩票   tie-平局   games' odds-游戏的赔率   Calculus-微积分   Linear Algebra-线性代数   vitally -极其，生死攸关地   Reversible-可逆的   with radix D-转为D进制   chronologically-按时间的前后顺序排列地   Palindromic Number-回文数   acyclic-无环   components-分量   duplication-复制，重复   permutation-排列   simultaneously-同时，一齐   suffix-后缀   tank-油箱   capital -大写字母   coupon-优惠券