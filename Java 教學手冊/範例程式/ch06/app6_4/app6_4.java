// app6_4, �G���}�C����J��X
public class app6_4
{
   public static void main(String args[])
   {
      int i,j,sum=0;
      int sale[][]={{32,35,26,30},{34,30,33,31}}; // �ŧi�}�C�ó]�w���

      for(i=0;i<sale.length;i++) // ��X�P��q�íp���`�P��q
      {
         System.out.print("�~�ȭ�"+(i+1)+"���~�Z���O�� ");
          for(j=0;j<sale[i].length;j++)
          {
             System.out.print(sale[i][j]+" ");
             sum+=sale[i][j];
          }
          System.out.println();        // �C�L����
      }
      System.out.println("\n�`�P��q��"+sum+"����");
   }
}

/* app6_4 OUTPUT----------------
�~�ȭ�1���~�Z���O�� 32 35 26 30
�~�ȭ�2���~�Z���O�� 34 30 33 31

�`�P��q��251����
------------------------------*/