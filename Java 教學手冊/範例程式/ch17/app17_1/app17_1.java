// app17_1, AWT²�檺�d�� (�@)
import java.awt.*;            // ���Jjava.awt���O�w�̪��Ҧ����O
public class app17_1
{
   static Frame frm=new Frame("my first AWT program");
   static Label lab=new Label("Hello Java!!");

   public static void main(String args[])
   {
      frm.setSize(220,150);      // �]�w�������e��220�B����150�ӹ���
      frm.setBackground(Color.yellow);  // �]�w���⪺�I��
      frm.setLocation(250,250);        // �]�w��������m
      frm.add(lab);                    // �N���Ҫ���lab�[�J������
      frm.setVisible(true);               // �N������ܥX��
   }
}
