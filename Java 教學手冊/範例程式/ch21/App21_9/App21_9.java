// App21_9, �bapplet���񭵼���
import java.awt.*;
import java.awt.event.*;
import java.applet.Applet;
import java.applet.AudioClip;     //  ���JAudioClip���O

public class App21_9 extends Applet implements ItemListener
{
   AudioClip midi[]=new AudioClip[3]; // �ŧiAudioClip�������A���}�C
   AudioClip current;       // �ŧiAudioClip�������A���ܼ�current

   Choice chc=new Choice();           // �إ�Choice����

   public void init()
   {
      midi[0]=getAudioClip(getCodeBase(),"�p�m��.midi");
      midi[1]=getAudioClip(getCodeBase(),"��Ǥp���L.midi");
      midi[2]=getAudioClip(getCodeBase(),"�L���K����.midi");
      chc.add("�p�m��");
      chc.add("��Ǥp���L");
      chc.add("�L���K����");
      add(chc);
      chc.addItemListener(this);    // ��applet��chc����ť��
      current=midi[0];           // �]�w�ثe���񪺺q����midi[0]
      current.play();            // ����q��
   }

   public void itemStateChanged(ItemEvent e)
   {
      current.stop();                  // �����q��
      int index=chc.getSelectedIndex();      // ���o�Q��������ޭ�
      current=midi[index];       // �]�w���񪺺q����midi[index]
      current.play();         // ����q��
   }
}
