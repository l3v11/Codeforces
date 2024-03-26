import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int tc = scanner.nextInt();
        scanner.nextLine();

        while (tc-- > 0) {
            solve(scanner);
        }

        scanner.close();
    }

    public static void solve(Scanner scanner) {
        int n = scanner.nextInt();
        int[] arr = new int[n + 1];

        for (int i = 1; i <= n; i++) {
            arr[i] = scanner.nextInt();
        }

        Arrays.sort(arr, 1, n + 1);

        int med = (n + 1) / 2;
        int ans = 0;
        for (int i = med; i <= n; i++) {
            if (arr[i] == arr[med]) {
                ans++;
            }
        }

        System.out.println(ans);
    }
}
