// See https://aka.ms/new-console-template for more information
class Program
{
    public static void Main()
    {
        String[] strs =     ["aaaa","aaaa", "aab","aaaa"];
        String result = longestCommonPrefix(strs);
        Console.WriteLine(result);
    }
    public static String longestCommonPrefix(String[] strs)
    {
        int countLetters = 0;
        int matchLetters = 0;
        String longestPrefix;
        bool match = true;

        if (strs.Length == 1)
        {
            matchLetters = strs[0].Length;
        }
        else
        {
            for (int i = 1; i < strs.Length; i++)
            {
                Console.WriteLine("strs[0].Length: " + strs[0].Length);
                Console.WriteLine("strs[0].Length: " + strs[i].Length);
                Console.WriteLine("");
                if (strs[0].Length >= strs[i].Length)
                {
                    for (int j = 0; j < strs[i].Length; j++)
                    {
                        if (strs[0][j] == strs[i][j])
                        {
                            countLetters += 1;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (countLetters == 0)
                    {
                        match = false;
                        break;
                    }
                    if(i == 1){
                        matchLetters = countLetters;
                    }
                    else if (countLetters <= matchLetters)
                    {
                        matchLetters = countLetters;
                    }
                    countLetters = 0;
                }
                else
                {
                    for (int j = 0; j < strs[0].Length; j++)
                    {
                        if (strs[0][j] == strs[i][j])
                        {
                            countLetters += 1;
                        }
                        else
                        {
                            break;
                        }
                    }
                    if (countLetters == 0)
                    {
                        match = false;
                        break;
                    }
                    if(i == 1){
                        matchLetters = countLetters;
                    }
                    else if (countLetters <= matchLetters)
                    {
                        matchLetters = countLetters;
                    }
                    countLetters = 0;
                }
            }
        }
        if (match == false)
        {
            longestPrefix = "";
            return longestPrefix;
        }
        else
        {
            longestPrefix = strs[0].Substring(0, matchLetters);
            return longestPrefix;
        }
    }
}
