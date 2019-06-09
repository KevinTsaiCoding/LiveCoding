// app22_5, �ϥ�URLConnection���O
import java.net.*;
import java.io.*;

public class app22_5
{
   public static void main(String args[])
   {
      try
      {
         URL u1=new URL("http://www.hinet.net");
         URL u2=new URL("file:/c:\\java\\poem.txt");
         URL u3=new URL("file:/c:\\java\\pic0.jpg");

         URLConnection uc1=u1.openConnection();
         URLConnection uc2=u2.openConnection();
         URLConnection uc3=u3.openConnection();

         System.out.print("�D�������j�p�� " + uc1.getContentLength());
         System.out.println(",  ������ " + uc1.getContentType());
         System.out.print("poem.txt���j�p�� " + uc2.getContentLength());
         System.out.println(",  ������ " + uc2.getContentType());
         System.out.print("pic0.jpg���j�p�� " + uc3.getContentLength());
         System.out.println(",  ������ " + uc3.getContentType());
      }
      catch(IOException e)
      {
         System.out.println("�o�ͤF"+e+"�ҥ~");
      }
   }
}

/* app22_5 OUTPUT------------------------
�D�������j�p�� 11663,  ������ text/html
poem.txt���j�p�� 54,  ������ text/plain
pic0.jpg���j�p�� 6280,  ������ image/jpeg
----------------------------------------*/