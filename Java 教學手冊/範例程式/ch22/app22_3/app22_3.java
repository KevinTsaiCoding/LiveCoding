// app22_3, �ϥ�URL���O
import java.net.*;

public class app22_3
{
   public static void main(String args[])
   {
      try
      {
         URL u=new URL("http://udn.com/NEWS/main.html");

         System.out.println("�q�T��w�W�٬� "+u.getProtocol());
         System.out.println("host name�� "+u.getHost());
         System.out.println("�𸹬� "+u.getPort());
         System.out.println("�ɦW�� "+u.getFile());
      }
      catch(MalformedURLException e)
      {
         System.out.println("�o�ͤF" +e+ "�ҥ~");
      }
   }
}

/* app22_3 OUTPUT--------
�q�T��w�W�٬� http
host name�� udn.com
�𸹬� -1
�ɦW�� /NEWS/main.html
-----------------------*/
