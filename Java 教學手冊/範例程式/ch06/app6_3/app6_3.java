// app6_3, ����}�C�����Ȫ��j�p
public class app6_3
{
   public static void main(String args[])
   {
      int i,min,max;
      int a[]={74,48,30,17,62};  // �ŧi��ư}�Ca,�ó]�w���

      min=max=a[0];
      System.out.print("Elements in array a are ");
      for(i=0;i<a.length;i++)
      {
         System.out.print(a[i]+"  ");
         if(a[i]>max)            // find Maximum
            max=a[i];
         if(a[i]<min)            // find Minimum
            min=a[i];
      }
      System.out.println("\nMaximum is "+max);  // �L�X�̤j��
      System.out.println("Minimum is "+min);    // �L�X�̤p��
   }
}

/* app6_3 OUTPUT----------------------------
Elements in array a are 74  48  30  17  62
Maximum is 74
Minimum is 17
------------------------------------------*/
