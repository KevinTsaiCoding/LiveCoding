// app5_8, break���ϥ�
public class app5_8
{
   public static void main(String args[])
   {
      int i;

      for (i=1;i<=10;i++)
      {
         if(i%3==0)                 // �P�_i%3�O�_��0
            break;
         System.out.println("i="+i);         // �L�Xi����
      }
      System.out.println("when loop interruped,i="+i);
   }
}

/* app5_8 OUTPUT----------
i=1
i=2
when loop interruped,i=3
------------------------*/