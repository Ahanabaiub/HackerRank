package com.Ahanab;
import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

class Main{

    private static Scanner scan=new Scanner(System.in);
    public static void main(String[] args) {
        // write your code here
        int[][] a=new int[3][3];


        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                a[i][j]=scan.nextInt();
            }
        }


        System.out.println(Solution.formingMagicSquare1(a));

        scan.close();;

    }
}

class Solution {



    // Complete the formingMagicSquare function below.
    static int formingMagicSquare1(int[][] s) {

        int [][][] possibleMagic= {
                {{8, 1, 6}, {3, 5, 7}, {4, 9, 2}},
                {{6, 1, 8}, {7, 5, 3}, {2, 9, 4}},
                {{4, 9, 2}, {3, 5, 7}, {8, 1, 6}},
                {{2, 9, 4}, {7, 5, 3}, {6, 1, 8}},
                {{8, 3, 4}, {1, 5, 9}, {6, 7, 2}},
                {{4, 3, 8}, {9, 5, 1}, {2, 7, 6}},
                {{6, 7, 2}, {1, 5, 9}, {8, 3, 4}},
                {{2, 7, 6}, {9, 5, 1}, {4, 3, 8}},
        };



        int mindif=Integer.MAX_VALUE;

        for(int i=0; i<8; i++)
        {
            int dif=0;
            for(int j=0; j<3; j++)
            {
                for(int k=0; k<3; k++)
                {
                    dif+=Math.abs(possibleMagic[i][j][k]-s[j][k]);
                }
            }

            System.out.println(dif);

            if(mindif<dif)
            {
                mindif=dif;
            }
        }



        return mindif;


    }

}
