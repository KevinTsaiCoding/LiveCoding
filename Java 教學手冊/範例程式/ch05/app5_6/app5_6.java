// app5_6, do while�j��
import java.util.Scanner;
public class app5_6
{
   public static void main(String args[])
   {
      Scanner scn=new Scanner(System.in);
      int n,i=1,sum=0;

      do{
         System.out.print("�п�J�֥[���̤j��: ");
         n=scn.nextInt();
      }while(n<1);      // ��Jn,n�n�j�󵥩�1,�_�h�|�@�����ƿ�J

      do
         sum+=i++;      // �p��sum=sum+i,�M��i�ȦA�[1
      while(i<=n);

      System.out.println("1+2+...+"+n+"="+sum);    // �L�X���G
   }
}

/* app5_6 OUTPUT-------
�п�J�֥[���̤j��: -8
�п�J�֥[���̤j��: 10
1+2+...+10=55
---------------------*/