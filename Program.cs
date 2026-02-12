namespace Next_Round
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] parts = Console.ReadLine().Split(" ");
            int n = int.Parse(parts[0]);
            int k= int.Parse(parts[1]);
            int counter = 0;
            string[] contestent  = Console.ReadLine().Split(" ");
            int[] numbers = new int[n];
            

            for (int i=0;i<n;i++)
            {
                numbers[i] = int.Parse(contestent[i]);
                int threshold = numbers[k - 1];
                if (numbers[i] >= threshold && numbers[i] > 0)
                {
                    counter++;
                }
                else
                    break;

            }

            Console.WriteLine(counter);
           
        }
    }
}
