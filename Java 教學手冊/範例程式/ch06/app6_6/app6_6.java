// app6_6, �����Ӱ}�C���ѦҦ�m
public class app6_6
{
   public static void main(String args[])
   {
      int a[]={2,7,6,3,8,4};     // �ŧi�}�Ca
      int b[]={2,7,6,3,8,4};     // �ŧi�}�Cb
      int c[]=a;              // �]�w�}�Cc�ѦҦ�m���Va

      if(a==b)             // �P�_a�Pb�O�_�ۦP
         System.out.println("a=b");
      else
         System.out.println("a!=b");

      if(a==c)             // �P�_a�Pc�O�_�ۦP
         System.out.println("a=c");
      else
         System.out.println("a!=c");
   }
}

/* app6_6 OUTPUT---
a!=b
a=c
-----------------*/