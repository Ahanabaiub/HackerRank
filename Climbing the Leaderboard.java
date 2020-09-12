
import java.util.*;

public class Main {

    public static void main(String[] args) {
    // write your code here

        Scanner scan=new Scanner(System.in);

        solution ob=new solution();

        int n=scan.nextInt();
        List<Integer> li=new ArrayList<>();
        for(int i=0; i<n; i++)
        {
            int x=scan.nextInt();
            li.add(x);
        }

        int m=scan.nextInt();

        List<Integer> rankd=new ArrayList<>();

        for(int i=0; i<m; i++)
        {
            int x=scan.nextInt();
            rankd.add(x);
        }

        ob.playersRank(li,rankd);


    }
}

class solution{

    void playersRank(List<Integer> ranked, List<Integer> player)
    {
        Set<Integer> filtered_ranked=new HashSet<>();

        for(int val:ranked)
        {
            filtered_ranked.add(val);
        }

        List<Integer> filtered=new ArrayList<>(filtered_ranked);

        Collections.sort(filtered,Collections.reverseOrder());

        for(int pl:player)
        {
            System.out.println(binary_search(filtered,0, filtered.size()-1,pl));
        }

    }

    int binary_search(List<Integer> li, int l, int r,int key)
    {
        if(key>=li.get(0))
        {
            return 1;
        }

        if(key<li.get(li.size()-1))
        {
            return li.size()+1;
        }

        if(key==li.get(li.size()-1))
        {
            return li.size();
        }


       int mid=0;


       while(l<r)
       {
           mid=(l+r)/2;

           if(li.get(mid)==key)
           {
               return (mid+1);
           }

           if(li.get(mid)<key)
           {
               r=mid;
           }
           else
           {
               l=mid+1;
           }
       }

       return l+1;


    }

}
