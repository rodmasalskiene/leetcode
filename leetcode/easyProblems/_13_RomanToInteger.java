class _13_RomanToInteger {
    public static void main(String[] args) {
        String s = "MCMXCIV";
        int result = romanToInt(s);
        System.out.println(result);
    }

    public static int romanToInt(String s) {
        char[] romanString = s.toCharArray();
        int[] romanInt = new int[romanString.length];
        int total = 0;

        for (int i = 0; i < romanString.length; i++) {
            if (romanString[i] == "I".charAt(0)) {
                romanInt[i] = 1;
            } else if (romanString[i] == "V".charAt(0)) {
                romanInt[i] = 5;
            } else if (romanString[i] == "X".charAt(0)) {
                romanInt[i] = 10;
            } else if (romanString[i] == "L".charAt(0)) {
                romanInt[i] = 50;
            } else if (romanString[i] == "C".charAt(0)) {
                romanInt[i] = 100;
            } else if (romanString[i] == "D".charAt(0)) {
                romanInt[i] = 500;
            } else if (romanString[i] == "M".charAt(0)) {
                romanInt[i] = 1000;
            }
        }

        for(int i = 0; i < romanInt.length; i++){
            if(i+1 == romanInt.length){
                total += romanInt[i];
            }else{
                if(romanInt[i+1] > romanInt[i]){
                    total += romanInt[i+1] - romanInt[i];
                    i++;
                }else{
                    total += romanInt[i];
                }
            }
        }
        return(total);
    }
}