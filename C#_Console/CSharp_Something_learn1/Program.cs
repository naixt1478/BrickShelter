using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace CSharp_Something_learn1
{
    class Program
    {
        static void Main(string[] args)
        {
            /*
            int[] num1 = new int[] {1, 2, 3, 4};
            string[] str1 = new string[] {"One", "Two", "Three", "Four"};
            */
            int[] num2 = {1, 2, 3, 4};
            string[] str2 = {"One", "Two", "Three", "Four"};
            foreach (int i in num2)
            {
                System.Console.Write("{0} ", i);
            }
            System.Console.Write("\n");
            foreach (string str in str2)
            {
                System.Console.Write("{0} ", str);
            }
        }
    }
}
