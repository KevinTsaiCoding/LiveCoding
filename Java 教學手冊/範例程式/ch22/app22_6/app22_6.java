// app22_6, �إ�Server�ݪ����A�{��
import java.net.*;
import java.io.*;

public class app22_6
{
   public static void main(String args[])
   {
      try
      {
         ServerSocket svs=new ServerSocket(2525);

         System.out.println("���ԫȤ�ݪ��ШD��...");
         Socket s=svs.accept();   // ���ԫȤ�ݪ��ШD
         System.out.println("�Ȥ�ݤw�M�����s�W�u...");

         OutputStream out=s.getOutputStream();   // ���o��X��y
         String str="Honor shows the man.";
         System.out.println("��ƥ��b�ǰe��...");
         out.write(str.getBytes()); // �N�r���নByte�}�C�A�A�g�J��y��
         out.close();   // ������X��y
         s.close();  // ����socket
         System.out.println("��ƶǰe����...");
      }
      catch(Exception e)
      {
         System.out.println("�o�ͤF"+e+"�ҥ~");
      }
   }
}