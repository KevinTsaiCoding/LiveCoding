// app6_5,
public class app6_5
{
   public static void main(String args[])
   {
      int A[][][]={{{21,32,65},
                       {78,94,76},
                       {79,44,65},
                       {89,54,73}},
                      {{32,56,89},
                       {43,23,32},
                       {32,56,78},
                       {94,78,45}}};

      int i,j,k,max=A[0][0][0];  // �]�wmax��A�}�C���Ĥ@�Ӥ���

      for(i=0;i<A.length;i++)        // �~�h�j��
         for(j=0;j<A[i].length;j++)       // ���h�j��
            for(k=0;k<A[i][j].length;k++)// ���h�j��
               if(max<A[i][j][k])
                  max=A[i][j][k];

      System.out.println("max="+max);     // �L�X�}�C���̤j��
   }
}