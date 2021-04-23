public class Main {

    public static void main(String[] args) {

        //int[][] puzzel = {{7,1,2},{7,0,4},{8,3,6}};
        int[][] puzzel = {{6,1,10,2},{7,11,4,14},{5,0,9,15},{8,12,13,3}};
        Main.solve(puzzel);
    }

    private static void solve(int[][] puzzel){
        int inversion = calculateInversion(puzzel);
        int blankTilePosFromBottom = findBlankTileFromBottom(puzzel);
        System.out.println("Dimension: "+puzzel.length*puzzel.length);
        System.out.println("Inversion: "+inversion);
        System.out.println("Blank Tile From Bottom: "+blankTilePosFromBottom);
        System.out.println("Is Solvable: "+isSolvable(puzzel.length,inversion,blankTilePosFromBottom));

    }

    private static int calculateInversion(int [][] puzzel){

        int size = puzzel.length;
        int inversion=0;

        int[] arr = flatArray(puzzel);
        for(int i=0; i<size*size; i++){
            int count=0;
            for(int j=i+1; j<size*size; j++){
                if(arr[j]==0)
                    continue;

                if(arr[j]<arr[i])
                    count++;
            }
            inversion+=count;
        }

        return inversion;

    }

    private static boolean isSolvable(int size, int inversion,int pos){


        if(size%2!=0){
            return (inversion%2==0);
        }
        else{
            return ((pos%2!=0 && inversion%2==0) || (pos%2==0 && inversion%2!=0));
        }

    }


    private static  int[] flatArray(int[][] puzzel){
        int size=puzzel.length;
        int[] flatArray = new int[size*size];
        int ind=0;
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                flatArray[ind++]=puzzel[i][j];
            }
        }
        return flatArray;
    }

    private static int findBlankTileFromBottom(int[][] puzzel){
        int pos = 0;
        int size = puzzel.length;
        boolean found = false;
        for(int i=0; i<size; i++){
            for(int j=0; j<size; j++){
                if(puzzel[j][i]==0){
                    pos=j;
                    found = true;
                    break;
                }
            }

            if(found)
                break;
        }

        return size-pos;
    }

}
