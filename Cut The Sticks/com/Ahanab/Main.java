package com.Ahanab;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n=input.nextInt();

        Integer[] arr=new Integer[n];

        for(int i=0; i<n; i++)
        {
            arr[i]=input.nextInt();
        }

        Solution.cutTheSticks(arr);
    }
}

class Solution
{
    public static void cutTheSticks(Integer[] arr)
    {
        List<Integer> li = new ArrayList<>();

        Collections.addAll(li,arr);

        Collections.sort(li);



        int small=0;
        System.out.println(li.size());

        for(int i=0; i<li.size(); i++)
        {
            small=li.get(i);

            int cnt=0;

            if(i<li.size()-1)
            {
                while(li.get(i)==li.get(i+1))
                {
                    i++;
                    cnt++;

                    if(i==li.size()-1)
                        break;
                }

               if(i<li.size()-1)
               {
                   System.out.println(li.size()-(i+1));
               }
            }
            else
                break;




            int j=i+1;
            while (j<li.size())
            {
                li.set(j,li.get(j)-small);
                j++;

            }



        }

    }
}
