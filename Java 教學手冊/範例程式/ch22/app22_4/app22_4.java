// app22_4, ���JURL���ɮפ��e
import java.net.*;
import java.io.*;

public class app22_4
{
   public static void main(String args[])
   {
      String str;

      try
      {
         URL u=new URL("file:/c:\\java\\poem.txt");

         Object obj=u.getContent();             // ���oURL�����e
         InputStreamReader isr=new InputStreamReader((InputStream) obj);
         BufferedReader br=new BufferedReader(isr);

         while((str=br.readLine())!=null)
            System.out.println(str);
         br.close();
      }
      catch(IOException e)
      {
         System.out.println("�o�ͤF"+e+"�ҥ~");
      }
   }
}

/* app22_4 OUTPUT---
�ɫe������A
�ìO�a�W���C
�|�Y�����A
�C�Y��G�m�C
-------------------*/