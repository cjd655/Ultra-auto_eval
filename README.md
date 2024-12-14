<h1 align="center">Ultra-auto_eval</h1>
<h3>作业自动批改上传成绩</h3>
<a href="./use.md">使用方法</a>

<details>
<summary><h3>怎么创建文件</h3></summary>

1.在仓库首页选择`新建文件`

<p align="center">
<img src="https://github.com/NGC2237plus/assets/blob/75ea28d7e1df77c3629c72627a98f7d5c76f23c8/Ultra-auto_eval/img/create1.png" width="800em" alt="图片说明">  
</p>

2.填写文件名（包括后缀，且文件在根目录）

<p align="center">
<img src="https://github.com/NGC2237plus/assets/blob/75ea28d7e1df77c3629c72627a98f7d5c76f23c8/Ultra-auto_eval/img/create2.png" width="800em" alt="图片说明">  
</p>

</details>

### 文件内容格式
- 第一行填写学号  
- 第二行填写github登录使用的邮箱
- 第三行填写你的姓名

C语言示例：
```c
//202210116122
//3093236313@qq.com
//何嘉
#include <stdio.h>
int main()
{
    printf("Hello World");
    return 0;
}
```

Python示例：
```python
#202210116122
#3093236313@qq.com
#何嘉
print('Hello World')
```

### 文件名格式
- 开头为数字，代表题目序号
- 文件名的分隔符为下划线`_`
- 文件名剩余部分随意
- 后缀为`.c`或者`.py`

**C语言示例：**   
第一题，开头为数字`1`，下划线分割，剩下随意，后缀`.c`   
`1_hello.c`,`1_hahaha.c`,`1_abcd.c`

第5题，开头为数字`5`，下划线分割，剩下随意，后缀`.c`  
`5_hello.c`,`5_hahaha.c`,`5_abcd.c`

---

**Python示例：**   
第一题，开头为数字`1`，下划线分割，剩下随意，后缀`.py`   
`1_hello.py`,`1_hahaha.py`,`1_abcd.py`

第5题，开头为数字`5`，下划线分割，剩下随意，后缀`.py`  
`5_hello.py`,`5_hahaha.py`,`5_abcd.py`

<details open>
<summary><h3>Ultra算法组第1次测试题</h3>✏️(等待布置)</summary>
    
敬请期待...

</details>

<details>
<summary><h3>Ultra算法组第0次测试题</h3>❗(已结束)</summary>

编写C语言程序，输入一个数，输出这个数的阶乘   
截止日期`2024/11/09 23:00:00`   
示例：   
输入   
```
5
```   
输出   
```
120
```

</details>
