// app6_2, �@���}�C���]��
public class app6_2
{
   public static void main(String args[])
   {
      int sum=0;
      int a[]={62,7,12,3,8,47};     // �ŧi��ư}�Ca,�ó]�w���

      for(int i=0;i<a.length;i++)      // �p��}�C�������M
         sum+=a[i];

      System.out.println("Average "+(float)sum/a.length);
   }
}

/* app6_2 OUTPUT----
Average 23.166666
------------------*/