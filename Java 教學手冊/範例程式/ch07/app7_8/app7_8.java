// app7_8,�u�ǰѷӡv���d��
public class app7_8
{
   public static void main(String args[])
   {
      int A[]={1,2,3,4,5};

      square(A);                 // �I�s square()�A�öǻ��}�CA

      System.out.println("�I�ssquare() method����...");

      for(int i=0;i<A.length;i++)     // �L�X�}�C�����e
         System.out.print(A[i]+" ");

      System.out.println();
   }

   public static void square(int arr[])
   {
      for(int i=0;i<arr.length;i++)
         arr[i]=arr[i]*arr[i];         // �N�}�C�������ȥ���
   }
}

/* app7_8 OUTPUT-----------
�I�ssquare() method����...
1 4 9 16 25
-------------------------*/