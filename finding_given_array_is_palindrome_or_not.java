public class Main {
    public static void main(String[] args) {
        char[] array = {'a', 'b', 'd', 'e', 'd', 'b', 'a'};
        int n = array.length;
        int i = 0;
        int j = n - 1;

        while (i <= j) {
            if (array[i] != array[j]) {
                System.out.println("The given array is not a palindrome");
                return; // exit the program
            }
            i++;
            j--;
        }

        System.out.println("The given array is a palindrome");
    }
}
