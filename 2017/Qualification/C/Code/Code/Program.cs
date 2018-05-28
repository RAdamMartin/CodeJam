using System;
using System.Collections.Generic;

namespace Code
{
    class Stall : IComparable<Stall>
    {
        public Stall(ulong i, ulong l, ulong r)
        {
            I = i;
            L = l;
            R = r;
        }

        public ulong I { get; set; }
        public ulong L { get; set; }
        public ulong R { get; set; }
        private ulong Min { get { return Math.Min(L, R); } }
        private ulong Max { get { return Math.Max(L, R); } }

        public int CompareTo(Stall other)
        {
            if (Min != other.Min) return other.Min.CompareTo(Min);
            if (Max != other.Max) return Max.CompareTo(other.Max);
            return I.CompareTo(other.I);
        }
    }

    class Program
    {
        static void Main(string[] args)
        {
            var T = Convert.ToUInt64(Console.ReadLine());
            for(ulong i = 1; i <= T; i++)
            {
                var temp = Console.ReadLine().Split();
                var N = Convert.ToUInt64(temp[0]);
                var K = Convert.ToUInt64(temp[1]);
                var res = GetResult(N, K);
                Console.WriteLine(string.Format("Case #{0}: {1}, {2}", i, res.Item1, res.Item2));
            }
            Console.ReadLine();
        }

        private static Tuple<ulong, ulong> GetResult(ulong n, ulong k)
        {
            var L = n;
            var R = k;
            if ((n + 1) / 2 <= k) return new Tuple<ulong, ulong>(0, 0);

            var occupied = new bool[n + 2];
            var queue = new SortedList<Stall, ulong>();

            occupied[0] = true;
            occupied[n + 1] = true;

            for(ulong i = 1; i <= n; i++)
            {
                var stall = new Stall(i, i-1, n-i);
                queue.Add(stall, i);
            }

            while (k > 0)
            {
                var next = queue.Keys[0];
                queue.Remove(next);

                if (occupied[next.I]) continue;

                ulong i = next.I, left = 0, right = 0;
                while (!occupied[i++]) ;
                right = i - next.I - 1;
                i = next.I;
                while (!occupied[i--]) ;
                left = next.I - i - 1;

                if (left == next.L && right == next.R)
                {
                    L = left;
                    R = right;
                    k--;
                    occupied[next.I] = true;
                } else
                {
                    next.L = left;
                    next.R = right;
                    queue.Add(next, next.I);
                }
            }

            return new Tuple<ulong, ulong>(Math.Max(L,R), Math.Min(L, R));
        }
    }
}
