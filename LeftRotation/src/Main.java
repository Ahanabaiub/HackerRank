import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int d = sc.nextInt();

        int[] a = new int[n];

        for(int i=0; i<n; i++){
            a[i] = sc.nextInt();
        }

        int[] ans = Solve.rotetLeft(d,a);

        for(int v : ans){
            System.out.print(v+" ");
        }
        //System.out.println();

    }
}

class Solve{

    public static int[] rotetLeft(int d, int[] a){
        int[] ans = new int[a.length];

        int rt = a.length - d;

        for(int i=0; i<a.length; i++){
            ans[(i+rt)%a.length] = a[i];
        }

        return ans;
    }

}
