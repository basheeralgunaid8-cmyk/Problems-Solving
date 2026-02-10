namespace BitProble
{
    internal class Program
    {
        static void Main(string[] args)
        {
            int X = 0;
            int n= int.Parse(Console.ReadLine());
            for(int i=0;i<n;i++)
            {
                string op = Console.ReadLine();
                if (op.Contains("++"))
                    X++;
                else
                    X--;
            }
         
            Console.WriteLine(X);
        }
    }
}
