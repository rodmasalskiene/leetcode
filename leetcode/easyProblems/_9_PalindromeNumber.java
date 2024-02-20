class _9_PalindromeNumber {
    public static void main(String[] args) {
        int x = 10;
        boolean result = isPalindrome(x);
        System.out.println(result);
    }

    public static boolean isPalindrome(int x) {
        double aux = x;
        int z = x;
        int count = 0;
        double[] nums = new double[100];
        double remainder = 0;

        while (z >= 1) {
            z = z / 10;
            count += 1;
        }

        for (int i = 0; i < count; i++) {
            remainder = (int) aux % 10;
            nums[i] = remainder;
            aux = aux / 10;
        }

        boolean theyEqual = true;

        if (x < 0) {
            return false;
        } else {
            for (int i = 0; i < count; i++) {
                for (int j = count - 1; j >= 0; j--) {
                    if (nums[i] == nums[j]) {
                        i++;
                        continue;
                    } else {
                        theyEqual = false;
                        break;
                    }
                }
                if (theyEqual == true) {
                    break;
                } else {
                    theyEqual = false;
                    break;
                }
            }
        }
        return (theyEqual);
    }
}