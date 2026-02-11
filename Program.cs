using System;

namespace Theatre_Square
{
    internal class Program
    {
        static void Main(string[] args)
        {
            string[] parts = Console.ReadLine().Split(' ');

            long n = long.Parse(parts[0]);
            long m = long.Parse(parts[1]);
            long a = long.Parse(parts[2]);

            long tilesAlongN = (long)Math.Ceiling((double)n / a);
            long tilesAlongM = (long)Math.Ceiling((double)m / a);

            long howManyTiles = tilesAlongN * tilesAlongM;

            Console.WriteLine(howManyTiles);
        }
    }
}
