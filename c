using System;

namespace 
{
	class Program
	{
		public static void Main(string[] args)
		{
			
	       Console.WriteLine("Digite um numero inteiro:");
           int num1 = Convert.ToInt32(Console.ReadLine());
           
           Console.WriteLine("Digite outro numero inteiro:");
           int num2 = Convert.ToInt32(Console.ReadLine());
           
           
       
       
           

           if (num1 == num2)

           {
		 
		 Console.WriteLine("o primeiro numero e igual ao segundo numero:");
		 Console.ReadLine();
           } 
           
           else
           {
            Console.WriteLine("o primeiro numero nao e igual ao segundo: ");
            Console.ReadLine();
           }
           
           
           
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	}
}
