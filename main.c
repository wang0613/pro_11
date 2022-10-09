#include <stdio.h>
#include <stdlib.h> //system()
#include <string.h> //strcmp()


/*int main() {
    //不使用第三个变量，交换两个变量
    int a = 3;
    int b = 5;

    //经典写法
//    a = a + b; // a = 8  b = 5;
//    b = a - b;//  b = 3  a = 8
//    a = a - b; // a=  5  b= 3

//a = 011
//b = 101
    a = a^b;  //a=110   b=101
    b = a^b; //b= 011   a=110
    a = a^b;  //a=101  b= 011

    printf("%d\t%d", a, b);

    return 0;
}*/

/*int main() {

    //找出数组中的单身狗
    int a[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
    //统计数量
    int sz = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < sz; i++) {
        int count = 0;
        for (int j = 0; j<sz;j++) {
            if(a[i] == a[j])
            {
                count++;
            }
        }//只等于本身 说明 count只等于1 其他都等于2
        if(count ==1)
        {
            printf("单身狗是%d",a[i]);
            break;
        }
    }


    return 0;

}*/
//异或：(对应的二进制位想异，则为1)
//异或满足交换率
// 0^a = a;
// a^a = 0;
// 3^5^3 = 5
/*int main()
{
    //因为异或满足交换律，则全部异或 就是单身狗
    int a[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
    //统计数量
    int sz = sizeof(a) / sizeof(a[0]);
    int ret = 0;
    for(int i = 0; i< sz; i++)
    {
        ret = ret ^ a[i];
    }
    printf("%d",ret);
    return 0;
}*/
int main()
{

    //system()；执行系统命令 strcmp(char c1,char c2) ;若str1=str2，则返回零；若str1<str2，则返回负数；若str1>str2，则返回正数
    system("chcp"); //chcp查看当前系统的编码
//strcmp();
}
