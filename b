using System;

namespace matheus
{
	class Program
	{
		public static void Main(string[] args)
		{
			
	       Console.WriteLine("Digite um numero inteiro:");
           int num1 = Convert.ToInt32(Console.ReadLine());
           
           Console.WriteLine("Digite outro numero inteiro:");
           int num2 = Convert.ToInt32(Console.ReadLine());
           
           
       
       
           

           if (num1 < num2)

		{
		 
		 Console.WriteLine("o primeiro numero e menor que o segundo:");
		 Console.WriteLine();
		
	    }
	
	else
		
	   {   
		
		Console.WriteLine("o primeiro numero nao e menor que o segundo:");
		
	}
           
           
           
			Console.Write("Press any key to continue . . . ");
			Console.ReadKey(true);
		}
	
	}
}
