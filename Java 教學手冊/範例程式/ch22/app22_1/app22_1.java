// app22_1, ���o�������W�ٻPIP��}
import java.net.*;

public class app22_1
{
   public static void main(String args[])
   {
      try
      {
         InetAddress adr=InetAddress.getLocalHost();
         System.out.println(adr.getHostAddress());
         System.out.println(adr.getHostName());
         System.out.println(adr);
      }
      catch(UnknownHostException e) // ������InetAddress()�ߥX���ҥ~
      {
         System.out.println("�L�k���oIP��}");
      }
   }
}

/* app22_1 OUTPUT----------
169.254.180.217
buffalo
buffalo/169.254.180.217
-------------------------*/