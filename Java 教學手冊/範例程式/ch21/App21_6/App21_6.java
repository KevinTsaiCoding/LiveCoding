// App21_6, �[�JAWT�����applet��
import java.awt.*;
import java.awt.event.*;
import java.applet.Applet;

public class App21_6 extends Applet implements ActionListener
{
   Button btn;                // �ŧiButton���A���ܼ�btn
   public void init()
   {
        btn=new Button("Start");    // �إ�btn����
        btn.addActionListener(this);   // �Happlet������btn����ť��
        add(btn);  // �Nbtn���s�[�Japplet������
   }
   public void actionPerformed(ActionEvent e)
   {
      if(btn.getLabel()=="Start")
           btn.setLabel("Stop"); // �]�w���s�W�誺��r��Stop
      else
           btn.setLabel("Start");   // �]�w���s�W�誺��r��Start
   }
}
