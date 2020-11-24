import java.util.Scanner;

public class Main {
    public static  void main(String args[])
    {
        Scanner input = new Scanner(System.in);

        int n= input.nextInt();
        int k= input.nextInt();

        int[] arr =new int[200];

        for(int i=0; i<n; i++)
        {
            arr[i]=input.nextInt();
        }

        int ans = workBook(n,k,arr);

        System.out.println(ans);

    }



    static  int workBook(int n, int k, int[] arr)
    {
        int page = 1;
        int sp=0;


        for(int p : arr)
        {
            int cnt=0;
            boolean fl = false;
            for(int j=1; j<=p; j++)
            {
                cnt++;

                if(j==page)
                    sp++;

                if(cnt==k)
                {
                    page++;
                    cnt=0;
                    fl = true;
                }

            }
            if(cnt!=0)
            page++;
        }

       return sp;
    }
}


