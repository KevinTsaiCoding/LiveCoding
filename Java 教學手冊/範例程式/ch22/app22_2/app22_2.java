// app22_2, ���o�������W�ٻPIP��}
import java.net.*;

public class app22_2
{
   public static void main(String args[])
   {
      try
      {
         InetAddress adr;      // �ŧiInetAddress���O���A���ܼ�adr
         adr=InetAddress.getByName("udn.com");  // ���oIP��}
         System.out.println(adr);
      }
      catch(UnknownHostException e)
      {
         System.out.println("�L�k���oIP��}");
      }
   }
}

/* app22_2 OUTPUT--------
udn.com/210.244.31.152
-----------------------*/
