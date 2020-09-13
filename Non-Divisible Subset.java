
import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scan=new Scanner((System.in));

        int n=scan.nextInt();
        int k=scan.nextInt();

        List<Integer> s=new ArrayList<>();

        for(int i=0; i<n; i++)
        {
            s.add(scan.nextInt());
        }



        System.out.println(Solution.nonDivisibleSubset(k,s));



    }
}

class Solution{

    public static int nonDivisibleSubset(int k, List<Integer> s) {

        int freq[]=new int[k];

        for(int num : s)
        {
            freq[num%k]++;
        }

        int ans=Math.min(1,freq[0]);

        if(k%2==0)
            freq[k/2]=Math.min(1,freq[k/2]);

        for(int i=1; i<=k/2; i++)
        {
            ans+=Math.max(freq[i],freq[k-i]);
        }



        return ans;


    }

}
