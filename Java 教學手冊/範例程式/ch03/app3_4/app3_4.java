// app3_4, ��Ƹ�ƫ��A������
public class app3_4
{
   public static void main(String args[])
   {
      int i=java.lang.Integer.MAX_VALUE;     // �Ni�]����ƪ��̤j��
      int sum;

      System.out.println("i="+i);            // �L�Xi����

      sum=i+1;
      System.out.println("i+1="+sum);        // �L�Xi+1����

      sum=i+2;
      System.out.println("i+2="+sum);        // �L�Xi+2����
   }
}

/* app3_4 OUTPUT------------
i=2147483647
i+1=-2147483648
i+2=-2147483647
---------------------------*/