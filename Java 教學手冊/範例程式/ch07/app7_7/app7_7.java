// app7_7, �]�p�Ǧ^�G���}�C��method
public class app7_7
{
   public static void main(String args[])
   {
     int A[][]={{18,32,65,27,30},{17,56,12,66}};  // �ŧi�G���}�CA
     int B[][];

     B=add10(A);   // �I�sadd10()�A�ç�Ǧ^���ȳ]���}�CB
     for(int i=0;i<B.length;i++) // �L�X�}�C�����e
     {
        for(int j=0;j<B[i].length;j++)
           System.out.print(B[i][j]+" ");
        System.out.println();
     }
  }

  public static int[][] add10(int arr[][])
  {
     for(int i=0;i<arr.length;i++)
        for(int j=0;j<arr[i].length;j++)
           arr[i][j]+=10;        // �N�}�C�����[10
     return arr;              // �Ǧ^�G���}�C
  }
}

/* app7_7 OUTPUT---
28 42 75 37 40
27 66 22 76
-----------------*/