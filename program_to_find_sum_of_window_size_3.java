public class Main {
    public static void main(String[] args) {
        int[] array = {5, 2, 1, 4, 3, 9, 7, 6, 8};
        int n = array.length;

        for (int i = 0; i <= n-3; i++) {
            int sum = 0;
            for (int j = i; j < i+3; j++) {
                sum += array[j];
            }
            System.out.println("Sum of window starting at index " + i + " is " + sum);
        }
    }
}
