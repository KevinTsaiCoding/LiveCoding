// app22_7, �إ�Client�ݪ����A�{��
import java.net.*;
import java.io.*;

public class app22_7
{
   public static void main(String args[])
   {
      byte buff[]=new byte[1024];         // �إ�byte���A���}�C
      try
      {
         System.out.println("���b�P���A���إ߳s�u...");
         Socket s=new Socket("127.0.0.1",2525);    // �إ�socket����
         System.out.println("�w�g�P���A�����o�s�u...");
         InputStream in=s.getInputStream();     // �إ߿�J��y
         int n=in.read(buff); // �q��yŪ�J���
         System.out.print("�q���A�ݦ���: ");
         System.out.println (new String(buff,0,n));// �L�XŪ�J�����e
         in.close();
         s.close();
      }
      catch(Exception e)
      {
         System.out.println("�o�ͤF"+e+"�ҥ~");
      }
   }
}