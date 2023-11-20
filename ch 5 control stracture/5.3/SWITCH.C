#include<stdio.h>
#include<conio.h>

main()
{
      int a,b,c,d;

      clrscr();

      printf("prees 1 for English\n");
      printf("prees 2 for Hindi\n");
      printf("prees 3 for Gujarati\n");

      printf("enter the number=");
      scanf("%d",&a);

      switch(a)
      {
		case 1:
			printf("your choice is English\n");
				printf("press 1 for interntr recharge\n");
				printf("press 2 for Top-up recharge\n");
				printf("press 3 for special recharge\n");

				printf("enter your choice=");
				scanf("%d",&b);
			switch(b)
			{
				case 1:
					printf("you have successfully done interntr recharge\n");
					break;
				case 2:
				       printf("you have successfully done Top-up recharge\n");
				       break;
				case 3:
				       printf("you have successfully done special recharge\n");
				       break;
				default:
					printf("you enter the fales choice");
			}
			break;

	       case 2:
			printf("your choice is hindi\n");

				printf("interntr recharge ke liye 1 dabaiye\n");
				printf("Top-up recharge ke liye 2 dabaiye\n");
				printf("special recharge ke liye 3 dabaiye\n");

				printf("enter your choice=");
				scanf("%d",&c);

			switch(c)
			       {
				case 1:
					printf("aapne sataltapurvak interntr recharge kar liya he.");
					break;
				case 2:
				       printf("aapne sataltapurvak Top-up recharge kar liya he.");
				       break;
				case 3:
				       printf("aapne sataltapurvak special recharge kar liya he.");
				       break;
				default:
					printf("amanay pasadagi pasdagi");
			}
			break;
		 case 3:
			printf("your choice is gujarati");

				printf("interntr recharge mate 1 dabavo");
				printf("Top-up recharge mate 2 dabavo");
				printf("special recharge mate 3 dabavo");

				printf("enter your choice=");
				scanf("%d",&d);

			switch(d)
			       {
				case 1:
					printf("tame safaltapurvak interntr recharge karyi chhe");
					break;
				case 2:
				       printf("tame safaltapurvak top-up recharge karyi chhe");
				       break;
				case 3:
				       printf("tame safaltapurvak special recharge karyi chhe");
				       break;
				default:
					printf("sachu pasand karo");
			}
			break;

      }

      getch();
}