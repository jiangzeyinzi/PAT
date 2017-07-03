# Log

- B1001   

- B1002   可优化

- B1003   找规律（条件2的两个x相同）

- B1004   注意格式输入

- B1005   段错误，数组开得太小？

- B1006   sprintf(arr, "%d" ,n);把数字n存到字符串数组中

- B1007   for(int i=2; i<=sqrt(num); i++) 一对一对移动

- B1008   循环右移记得移动距离取余

- B1009   while(scanf("%s",str)!=EOF)处理字符串   for(int i=k-1; i>=0; i--)倒序

- B1010  

    while(scanf("%d%d",&n[k1++],&m[k2++])!=EOF);
    	 int k=k1-1;
    	 进行空格的格式确认时，可以将空格先输入成&等来看格式是否正确

- B1011   [-2^32,2^32]用long long，同时输入时改成%lld

- B1012   

- B1013   利用while(1)找出第四个测试点为(9993,10000)，发现题意为找第9993到10000之间的素数，而代码实现为遍历了10000以内的素数，从而进行改正。另外格式的问题需从简到繁进行累加制造。

- B1014   字符串匹配到相同的字母再进行数字的转换，注意匹配的字母具有一定的范围，并不是A~Z，如题目中0-9、A-N代表0-23点，所以在O-Z以及其他非法字符的匹配是不计算在内的，不计为正确的匹配。

- B1015   排序

    ```
    #include <algorithm>
    using namespace std;
    bool cmp(Student a, Student b)
    {
    	if(a.sc!=b.sc)
    		return a.sc > b.sc;
    	else if(a.de!=b.de)
    		return a.de > b.de;
    	else
    		return a.no < b.no;
    }
    ```

- B1016   sum = sum*10+a;

- B1017   不够除、除尽、被除位为0、被除数比除数小、首位商有0

- B1018   将剪刀石头布看成0、1、2，之间胜负根据数字的相减结果得到并进行归类。注意最终按照字典序BCJ来输出不唯一的解

    ```
    	scanf("%d\n",&n);   //输入n组两个字符的组合
    	p1 = getchar();     //   3
    	getchar();          //   C J
        p2 = getchar();     //   C B
    	getchar();          //   J c
    ```

- B1019   运行超时可能是陷入了无限循环，考虑边界点的特殊值进行测试。本题的黑洞点6174就是一个特殊的点，将while改成do while即可解决。

    ```
    //将字符串转换为数字 atoi(ascii to integer)  头文件stdlib
    	atoi(tmp);
    //讲数字转换为字符串 sprintf
    	sprintf(str,"%04d",num);
    ```

- B1020  第二个测试点：1 1 1 0

- B1021

- B1022   计算N进制时用do while较好

- B1023   输入数字时就转换为字符串形式

- ​


