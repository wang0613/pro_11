#include <stdio.h>
#include <stdlib.h> //system()
#include <string.h> //strcmp()


/*int main() {
    //��ʹ�õ�����������������������
    int a = 3;
    int b = 5;

    //����д��
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

    //�ҳ������еĵ���
    int a[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
    //ͳ������
    int sz = sizeof(a) / sizeof(a[0]);

    for (int i = 0; i < sz; i++) {
        int count = 0;
        for (int j = 0; j<sz;j++) {
            if(a[i] == a[j])
            {
                count++;
            }
        }//ֻ���ڱ��� ˵�� countֻ����1 ����������2
        if(count ==1)
        {
            printf("������%d",a[i]);
            break;
        }
    }


    return 0;

}*/
//���(��Ӧ�Ķ�����λ���죬��Ϊ1)
//������㽻����
// 0^a = a;
// a^a = 0;
// 3^5^3 = 5
/*int main()
{
    //��Ϊ������㽻���ɣ���ȫ����� ���ǵ���
    int a[] = {1, 2, 3, 4, 5, 1, 2, 3, 4};
    //ͳ������
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

    //system()��ִ��ϵͳ���� strcmp(char c1,char c2) ;��str1=str2���򷵻��㣻��str1<str2���򷵻ظ�������str1>str2���򷵻�����
    system("chcp"); //chcp�鿴��ǰϵͳ�ı���
//strcmp();
}
