public class Main {
    public static void main(String[] args) {
        // Declare and initialize an integer array named ar with 9 elements
        int[] ar = {5,2,1,3,4,0,8,7,2};

        // Declare an integer array named br with 9 elements and initialize all elements to 0
        int[] br = new int[9];

        // Set the first element of br to the first element of ar
        br[0] = ar[0];

        // Loop through the ar array and calculate the sum of each element and store it in the corresponding element of br
        for(int i=1; i<9; i++)
        {
            br[i] = br[i-1] + ar[i];
        }

        // Print the difference between the sum of the subarray (4-7) of the br array
        System.out.println("The sum of (4-7): " + (br[7] - br[3]));
    }
}
