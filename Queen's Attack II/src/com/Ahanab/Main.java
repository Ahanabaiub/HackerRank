package com.Ahanab;

import java.util.Scanner;

public class Main {



    public static void main(String[] args) {



        Solution.countMoves();


    }
}

class Solution
{
    public static void countMoves()
    {
        Scanner scan = new Scanner(System.in) ;

        int n = scan.nextInt();
        int k = scan.nextInt();

        int qx=scan.nextInt();
        int  qy=scan.nextInt();

        int up=qy-1;

        int right=n-qx;

        int down=n-qy;

        int left=qx-1;

        int d1=Math.min(up,right);
        int d2=Math.min(right,down);
        int d3=Math.min(down,left);
        int d4=Math.min(left,up);

        int x,y;

        for(int i=0; i<k; i++)
        {
            x=scan.nextInt();
            y=scan.nextInt();

            if(Math.abs(qx-x)==Math.abs(qy-y))
            {
                if(qx-x<0 && qy-y>0)
                {
                     d1=Math.min(d1,x-qx-1);
                }
                if(qx-x<0 && qy-y<0)
                {
                     d2=Math.min(d2,x-qx-1);
                }

                if(qx-x>0 && qy-y<0)
                {
                     d3=Math.min(d3,qx-x-1);
                }

                if(qx-x>0 && qy-y>0)
                {
                    d4=Math.min(d4,qx-x-1);
                }
            }

            if(qy==y)
            {
                if(x<qx)
                {
                    left=Math.min(left,qx-x-1);
                }
                else
                {
                    right=Math.min(right,x-qx-1);
                }
            }

            if(qx==x)
            {
                if(y<qy)
                {
                    up=Math.min(up,qy-y-1);
                }
                else
                {
                    down=Math.min(down,y-qy-1);
                }
            }

        }

        System.out.println(up+down+left+right+d1+d2+d3+d4);


    }
}
