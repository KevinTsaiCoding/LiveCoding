// app6_1, �@���}�C
public class app6_1
{
   public static void main(String args[])
   {
      int i;
      int a[];       // �ŧi��ư}�Ca
      a=new int[3];  // �t�m�i�s��3�Ӿ�ƪ��O����Ŷ��Ѿ�ư}�Ca�ϥ�
      a[0]=9;     // �]�w�Ĥ@�Ӥ������Ȭ�9
      a[1]=6;     // �]�w�ĤG�Ӥ������Ȭ�6

      for(i=0; i<a.length; i++)               // �L�X�}�C�����e
         System.out.print("a["+i+"]="+a[i]+",\t");

      System.out.println("\nLength of array = "+a.length);   // �L�X�}�C����
   }
}