#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

void mult()
{
    int num,i,j;

    printf("Enter any number : ");

    scanf("%d",&num);

    for(i=1;i<=10;i++)
    {
        printf("%d",i*num);
        printf("\n");
    }
}

void sum()
{
        int nm,i,sum=0;
        printf("Enter the number : ");
        scanf("%d",&nm);
        /*for(i=1;i<=nm;i++)      => O(n)
        {
            sum = sum + i;
        }*/
        sum = (nm*(nm+1))/2;   // O(1)
        printf("%d",sum);


}

void largest()
{
    int len,i,j,l;
    printf("Enter Size of the array: ");
    scanf("%d",&len);
    int ar[len];
    printf("Enter array elements: ");
    for(i=0;i<len;i++)                     
    {
        scanf("%d",&ar[i]);
    }
    int max=ar[i];
    /*for ( i = 0; i < len; i++ )
    {
        for ( j = 1; j < len; j++ )   => n(n-1) => n2 - n => n^2 => O(n^2)
        {
            if(ar[i]<ar[j])
            {
                max = ar[j];
            }
        }
    }*/
    for(i=1;i<len;i++)      // => O(n)
    {
        if(max<ar[i])
        {
            max=ar[i];
        }
    }
    printf("%d",max);
    
}

void prime()
{
    int n,i,j,check=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for (i = 1; i <= n; i++)
    {
        if(n%i==0)
        {
            check = check +1;
        }
    }
    if(check>2)
    {
        printf("NOT PRIME!");
    }
    else
    {
        printf("PRIME!");
    }
    
    
}
void decbin()
{
    int n,x=0,i=0,j;
    printf("Enter a decimal number: ");
    scanf("%d",&n);
    int res[10];
    while(n >= 1)
    {
        x = n%2;
        n=n/2;
        res[i] = x;
        i++;
    }
    for(j=i-1;j>=0;j--)
    {
        printf("%d",res[j]);
    }
    

}


void numrev()
{                               // 123 , ld=3 num = 12 , 
    int num=0,ld=0;
    printf("Enter a number to reverse: ");
    scanf("%d",&num);
    while(num>=1)
    {
        ld = num % 10;
        num = num / 10;
        printf("%d",ld);
    }
}

void fact()
{
    // 5 => 5*4*3*2*1
    int n,fact=1,i;
    printf("Enter any number: ");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        fact = fact * i ;
    }
    printf("%d",fact);
}

void star()
{
    /*
        *
        * *
        * * *
        * * * *
    */
    int r , c ,x=0;
    printf("Enter number of rows: ");
    scanf("%d",&r);
    for(int i=0;i<r;i++)      
    {
        for (int j = 0; j < i+1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
}    

void rev()
{
    char s[20];
    int c=0;
    printf("Enter a string: ");
    gets(s,20);
    for(int i=0;s[i]!='\0';i++)
    {
        c=c+1;
    }
    printf("Reverse string is :- ");
    for(int i=c;i>=0;i--)
    {
        printf("%c",s[i]);
    }
}

void vowel()
{
    char s[50];
    int c=0;
    printf("Enter a string: ");
    gets(s,50);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        {
            c = c + 1;
        }
    }
    printf("Toal number of vowels in the string is %d",c);
}
void swap()
{
    int a , b;                      
    printf("Enter value of a and b: ");
    scanf("%d%d",&a,&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("%d%d",a,b);
}

void fibo()
{
    int n,sum=0,lx=0;
    printf("Enter value of n: ");
    scanf("%d",&n);
    int f = 0;
    int l = 1;
    printf("%d\t",f);
    printf("%d\t",l);
    for(int i=3;i<=n;i++)
    {
        
        lx = f + l;    // 1
        printf("%d\t",lx);
        l = lx + l; // 2
        f = lx;   // 2
        printf("%d\t",l);

    }
}

void pali()
{
    int n , nc ,b=0;
    printf("Enter any number: ");
    scanf("%d",&n);
    nc = n;
    int rem ;
    while(n>0)
    {
        rem = n%10;
        b = (10*b)+rem;
        n=n/10;
    }
    if(b==nc)
    {
        printf("Plaindrome ");
    }
    else
    {
        printf("!Palindrome");
    }
    
}

void arms()
{
    int n,rem,b=0,sum=0,nc;
    printf("Enter any number: ");
    scanf("%d",&n);
    nc=n;
    while(n>0)
    {
        rem = n%10;
        sum = (rem*rem*rem)+sum;
        b=(b*10)+rem;
        n = n/10;
    }
    if(nc==sum)
    {
        printf("Armstrong");
    }
    else
    {
        printf("!Armstrong");
    }
    
}

void revar()
{
    int n=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    //printf("%d",a[0]);
    printf("Reversing the array.....\n");
    for(int j = n-1; j >= 0; j--)
    {
        printf("%d\t",a[j]);
    }
    

}

void adder()
{
    int ar[1000],n,ch=0;
    printf("Enter array size: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    printf("Want to add more elements:(0 for NO , 1 for YES) ");
    scanf("%d",&ch);
    if(ch==1)
    {
        int pos=0,val=0;
        printf("Enter the position: ");
        scanf("%d",&pos);
        printf("Enter the value: ");
        scanf("%d",&val);
        for(int c = n-1;c>=pos-1;c--)
        {
            ar[c+1] = ar[c];    //ar[3] = ar[2] => 3 , ar[2] = ar[1] => 2 , ar[1] = 1
        }
        ar[pos-1] = val;    
    }
    for(int i=0;i<=n;i++)
    {
        printf("%d",ar[i]);
    }
}
void remover()
{
    int ar[100],n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int pos;
    printf("Enter the index of element you want to delete: ");
    scanf("%d",&pos);
    for (int i = pos; i<n-1; i++)
    {
        ar[i] = ar[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d",ar[i]);
    }
    

}
void lsar()
{
    int ar[100],n;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int max = ar[0];
    int min = ar[0];
    for (int i = 1; i < n; i++)
    {
        if(max < ar[i])
        {
            max = ar[i];
        }
        if(min > ar[i])
        {
            min = ar[i];
        }
    }
    printf("Largest element is: %d\n",max);
    printf("Smallest element is: %d",min);
    
}
void dup() //sorted_array
{
    int ar[100],n , nar[100];
    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("Enter array elements: ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    int j=0;
    for(int i=0;i<n-1;i++)
    {
        if(ar[i]!=ar[i+1])
        {
            nar[j] = ar[i];         // i=1 nar[0]=ar[1]=>1   i=2 nar[1] = ar[2] => 
            j++;
        }
        
    }
    nar[j] = ar[n-1];
    for (int i = 0; i < n-1 ; i++)
    {
        printf("%d",nar[i]);
    }

}
//========================================Matrics==============================

void sym()
{
    int a[100][100],b[100][100] , m ,n ,c=0;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    if(m==n)
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("Enter value for a[%d][%d]: ",i,j);
                scanf("%d",&a[i][j]);
            }
            
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                b[j][i] = a[i][j];
            }
            
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("b[%d][%d]: %d\n",i,j,b[i][j]);
            }
            
        }
        
        for(int i=0;i<m;i++)
        {
			for(int j=0;j<n;j++)
			{
				if(a[i][j]==b[i][j])
				{
					c++;
				}
			}
		}
		
		if(c==m*n)
		{
			printf("Symmetric");
		}
		else
		{
			printf("Not symmetric");
		}
		
        
        
    }

    else
    {
        printf("can't process non-square matrics!");
        exit(-1);
    }
    

}

void spa()
{
	
	int a[100][100],b=0 , m ,n ,c=0;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("Enter value for a[%d][%d]: ",i,j);
                scanf("%d",&a[i][j]);
                if(a[i][j]==0)
				{
					c++;
				}
				else if(a[i][j]>0)
				{
					b++;
				}
            }
            
        }
        
	if(c>b)
	{
		printf("This is sparse matrix");
	}
	else
	{
		printf("This is not a sparse matrix");
	}
   
}

void tnm()
{
    int a[100][100],b=0 , m ,n ,trace=0,normal=0;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    if(m==n)
    {
    for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("Enter value for a[%d][%d]: ",i,j);
                scanf("%d",&a[i][j]);
                normal = normal + (a[i][j]*a[i][j]);

            }
        }
        int sum=0;
        while(sum<=n)
        {
            trace = trace + a[sum][sum];
            sum++;
        }
        double nom = sqrt(normal);
        printf("Trace of the matrix is : %d\n",trace);
        printf("Normal of the matrix is: %f",nom);
    }
    else
    {
        printf("We can't find the normal and trace of a non-square matrix !");
    }
        
}

void sum_m()
{
    int a[100][100],b[100][100] , m ,n ;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                printf("Enter value for a[%d][%d]: ",i,j);
                scanf("%d",&a[i][j]);
                printf("Enter value for b[%d][%d]: ",i,j);
                scanf("%d",&b[i][j]);
                a[i][j] = a[i][j] + b[i][j];
                b[i][j] = a[i][j] - b[i][j];
            }
        }
        printf("Sum of the two matrices : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",a[i][j]);
        }

        printf("\n");
        
    }

    printf("Difference of the two matrices : \n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d\t",b[i][j]);
        }

        printf("\n");
        
    }
}

void m_mat()
{
    int a[100][100],b[100][100] , m ,n ,o,p,sum=0,i=0,j=0,k=0;
    printf("Enter number of rows: ");
    scanf("%d",&m);
    printf("Enter number of columns: ");
    scanf("%d",&n);
    for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                printf("Enter value for a[%d][%d]: ",i,j);
                scanf("%d",&a[i][j]);
                
            }
            
        }
    printf("Enter number of rows: ");
    scanf("%d",&o);
    printf("Enter number of columns: ");
    scanf("%d",&p);
    for (i = 0; i < o; i++)
        {
            for (j = 0; j < p; j++)
            {
                printf("Enter value for b[%d][%d]: ",i,j);
                scanf("%d",&b[i][j]);
                
            }
            // 2x3 -> 3x2 : 2x3
        }
    int c[m][p];
    if(n==o)
    {
    for(i=0;i<m;i++)
    {
        for(j=0;j<p;j++)
        {
            for(k=0;k<n;k++)
            {
                sum += a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;

        }
    }
    }
    else
    {
        printf("Can't multiply these matrices.");
        exit(-1);
    }
    
        printf("Multiplication of matrices is :\n ");
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j < p; j++)
        {
            printf("%d",c[i][j]);
            printf("\t");
        }
        printf("\n");
        
    }    

}
int main()
{
    //mult();
    //sum();
    //largest();
    //prime();
    //decbin();
    //numrev();
    //fact();
    //star();
    //rev();
   // vowel();
   // swap();
   // fibo();
   // pali();
   // arms();
   // revar();
   // adder();
   // remover();
   // lsar();
  //dup(); //I am still with confused with this , I don't know why ........
  // sym();
	// spa();
    //tnm();
   // sum_m();
   m_mat();
}
