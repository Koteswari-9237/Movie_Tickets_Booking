#include<stdio.h>
void main(){
    int moviename,payment,nooftickets,paymentmethod;;
    printf("*******WELCOME*******\n");
    printf("----------------------------\n");
    printf("***AVAILABLE MOVIES LIST***\n");
    printf("----------------------------\n");
    printf("NOTE:-");
    printf("----------------------------\n");
    printf("While You are Bookng Tickets Please check these following\n");
    
    printf("-----*TIMINGS*-----\n");
    printf("----------------------------\n");
    printf("BENFIT SHOW-     4.30AM TO 7.30PM\n");
   
    printf("MORNING SHOW-    9.30AM TO 12.30PM\n");
   
    printf("MATINEE SHOW-    2.30PM TO 5.30PM\n");
    
    printf("FIRST SHOW-      6.30PM TO 9.30PM\n");
    
    printf("SECOND SHOW-10.30PM TO 1.30AM\n");
    printf("----------------------------\n");
    printf("!-MOVIES IN SRIKAKULAM IN THIS WEEK-!\n");
    printf("----------------------------\n");
    printf("1.Yashoda\n");
   
    printf("2.Masooda\n");
    
    printf("3.Galodu\n");
    
    printf("4.Kantara\n");
    
    printf("5.Wakanda forever\n");
    printf("----------------------------\n");
    printf("ENTER THE CHOICE");
    scanf("%d",&moviename);
    int Theatrename;
    switch(moviename){
           case 1:
               printf("You Select Yashoda\n");
               printf("Available theaters\n");
               printf("1.Kinnera          Timings:Morning show\n");
               printf("2.Keerthana        Timings:Matinee show\n");
               printf("3.Surya mahal      Timings:First show\n");
               printf("4.Sridevi mahal    Timings:second show\n");
               printf("5.Chandra mahal    Timings:Matinee show\n");
               printf("SELECT THE THEATRE\n");
               scanf("%d",&Theatrename);
               int seatcount;
               int seatnumber;
               switch(Theatrename){
                  case 1:
                        printf("You selected  Yashoda Morning show in kinnera theatre\n");
                        break;
                  
                 case 2:
                          printf("You selected  Yashoda Matniee show in keerthana theatre\n");
                        
                          break;
                 case 3:
                         printf("You selected  Yashoda first show in surya mahal theatre\n");
                        
                         break;
                 case 4:
                        printf("You selected  Yashoda second show in sridevi mahal theatre\n");
                        break;
                 case 5:
                        printf("You selected  Yashoda morning show in chandra mahal theatre\n");
                        
                        break;
                }
                break;
            case 2:
               printf("You Select Masooda\n");
               printf("Available theaters\n");
               printf("1.Kinnera          Timings:matinee show\n");
               printf("2.Keerthana        Timings:first show\n");
               printf("3.Surya mahal      Timings:morning show\n");
               printf("4.Sridevi mahal    Timings:morning show\n");
               printf("5.Chandra mahal    Timings:second show\n");
               printf("SELECT THE THEATRE\n");
               scanf("%d",&Theatrename);
               seatnumber,seatcount;
               switch(Theatrename){
                   case 1:
                        printf("You selected  Masooda matinee show in kinnera theatre\n");
                        break;
                  
                   case 2:
                        printf("You selected  Masooda First show in keerthana theatre\n");
                        
                        break;
                   case 3:
                        printf("You selected  Masooda  morning show in surya mahal theatre\n");
                        
                        break;
                   case 4:
                        printf("You selected  Masooda morning show in sridevi mahal theatre\n");
                        
                        break;
                   case 5:
                        printf("You selected  Masooda second show in chandra mahal theatre\n");
                        
                        break;
                }
                break;
        case 3:
               printf("You Select Galodu\n");
               printf("Available theaters\n");
               printf("1.Kinnera          Timings:Second show\n");
               printf("2.Keerthana        Timings:Morning show\n");
               printf("3.Surya mahal      Timings:second show\n");
               printf("4.Sridevi mahal    Timings:Matinee show\n");
               printf("5.Chandra mahal    Timings:First show\n");
               printf("SELECT THE THEATRE\n");
               scanf("%d",&Theatrename);
        
                seatnumber,seatcount;
               switch(Theatrename){
                   case 1:
                        printf("You selected  Galodu second show in kinnera theatre\n");
                        
                        break;
                  
                  case 2:
                        printf("You selected  Galodu morning show in keerthana theatre\n");
                        
                        break;
                  case 3:
                        printf("You selected  Yashoda second show in surya mahal theatre\n");
                        
                        break;
                  case 4:
                        printf("You selected  Galodu matinee show in sridevi mahal theatre\n");
                        
                       break;
                  case 5:
                        printf("You selected  Galodu  First show in chandra mahal theatre\n");
                        
                       break;
                }
                break;
            case 4:
               printf("You Select Kantara\n");
               printf("Available theaters\n");
               printf("1.Kinnera          Timings:First show\n");
               printf("2.Keerthana        Timings:second show\n");
               printf("3.Surya mahal      Timings:matinee show\n");
               printf("4.Sridevi mahal    Timings:First show\n");
               printf("5.Chandra mahal    Timings:Morning show\n");
               printf("SELECT THE THEATRE\n");
               scanf("%d",&Theatrename);
               seatcount;
                seatnumber;
               switch(Theatrename){
                   case 1:
                        printf("You selected  Kantara First show in kinnera theatre\n");
                        
                        break;
                  
                   case 2:
                        printf("You selected  Kantara second show in keerthana theatre\n");
                        
                        break;
                   case 3:
                        printf("You selected  Kantara matinee show in surya mahal theatre\n");
                       
                   case 4:
                        printf("You selected  Kantara First show in sridevi mahal theatre\n");
                        
                        break;
                   case 5:
                        printf("You selected  Kantara Second show in chandra mahal theatre\n");
                        
                        break;
                }
                break;
            case 5:
               printf("You Select Wakanda Forever\n");
               printf("Available theaters\n");
               printf("1.Kinnera          Timings:Benfit show\n");
               printf("2.Keerthana        Timings:First show\n");
               printf("3.Surya mahal      Timings:First  show\n");
               printf("4.Sridevi mahal    Timings:matinee show\n");
               printf("5.Chandra mahal    Timings:Morning show\n");
               printf("SELECT THE THEATRE\n");
               scanf("%d",&Theatrename);
               seatcount;
                seatnumber;
               switch(Theatrename){
                   case 1:
                        printf("You selected  Wakanda forever Benfit show in kinnera theatre\n");
                        
                        break;
                  
                   case 2:
                        printf("You selected  Wakanda forever second show in keerthana theatre\n");
                        
                        break;
                   case 3:
                        printf("You selected  Wakanda forever matniee show in surya mahal theatre\n");
                        
                        break;
                   case 4:
                        printf("You selected  Wakanda forever First show in sridevi mahal theatre\n");
                        
                        break;
                   case 5:
                        printf("You selected  Wakanda forever Benfit show in chandra mahal theatre\n");
                        
                        break;
            }
            break;

         }                  
                            int seatcount,seatnumber; 
                            printf("Enter how many tickets you want to book\n");
                            scanf("%d",&seatcount); 
                            if(seatcount==1){
                            printf("***Seat numbers***\n");
                            printf("Seat are allocated as follows\n");
                            printf("1.A1-A10\n");
                            printf("2.B1-B10\n");
                            printf("3.C1-C10\n");
                            printf("4.D1-D10\n");
                            printf("5.E1-E10\n");
                            printf("6.F1-F10\n");
                            printf("Enter seat numbers which are not filled\n ");
                            printf("Enter the seat number:\n");
                            scanf("%d",&seatnumber);
                            switch(seatnumber){
                                 case 1 ... 10:
                                    printf("You booked a ticket in first row");
                                    break;
                                 case 11 ... 20:
                                    printf("You booked a ticket in Second  row");
                                    break;
                                  case 21 ... 30:
                                    printf("You booked a ticket in Third row");
                                    break;
                                 case 31 ... 40:
                                    printf("You booked a ticket in Third row");
                                    break;
                                 case 41 ... 50:
                                    printf("You booked a ticket in Fourth row");
                                    break;
                                 case 51 ... 60:
                                    printf("You booked a ticket in Fifth row");
                                    break;
                                 case 61 ... 70:
                                    printf("You booked a ticket in last  row");
                                    break;
                            }
                           
                        
                         }
                    else if(seatcount==2){
                            printf("***Seat numbers***\n");
                            printf("Seat are allocated as follows\n");
                            printf("1.A1-A10\n");
                            printf("2.B1-B10\n");
                            printf("3.C1-C10\n");
                            printf("4.D1-D10\n");
                            printf("5.E1-E10\n");
                            printf("6.F1-F10\n");
                            printf("Enter seat numbers which are not filled\n ");
                            printf("Enter the seat number:\n");
                            scanf("%d %d",&seatnumber,&seatnumber);
                            switch(seatnumber){
                                 case 1 ... 10:
                                    printf("You booked a ticket in first row");
                                    break;
                                 case 11 ... 20:
                                    printf("You booked a ticket in Second  row");
                                    break;
                                  case 21 ... 30:
                                    printf("You booked a ticket in Third row");
                                    break;
                                 case 31 ... 40:
                                    printf("You booked a ticket in Third row");
                                    break;
                                 case 41 ... 50:
                                    printf("You booked a ticket in Fourth row");
                                    break;
                                 case 51 ... 60:
                                    printf("You booked a ticket in Fifth row");
                                    break;
                                 case 61 ... 70:
                                    printf("You booked a ticket in last  row");
                                    break;
                            }
                           
                        
                    }
                    else if(seatcount==3){
                            printf("***Seat numbers***\n");
                            printf("Seat are allocated as follows\n");
                            printf("1.A1-A10\n");
                            printf("2.B1-B10\n");
                            printf("3.C1-C10\n");
                            printf("4.D1-D10\n");
                            printf("5.E1-E10\n");
                            printf("6.F1-F10\n");
                            printf("Enter seat numbers which are not filled\n ");
                            printf("Enter the seat number:\n");
                            scanf("%d %d %d",&seatnumber,&seatnumber,&seatnumber);
                            switch(seatnumber){
                                 case 1 ... 10:
                                    printf("You booked a ticket in first row");
                                    break;
                                 case 11 ... 20:
                                    printf("You booked a ticket in Second  row");
                                    break;
                                  case 21 ... 30:
                                    printf("You booked a ticket in Third row");
                                    break;
                                 case 31 ... 40:
                                    printf("You booked a ticket in Third row");
                                    break;
                                 case 41 ... 50:
                                    printf("You booked a ticket in Fourth row");
                                    break;
                                 case 51 ... 60:
                                    printf("You booked a ticket in Fifth row");
                                    break;
                                 case 61 ... 70:
                                    printf("You booked a ticket in last  row");
                                    break;
                            }
                        
                        
                      }
                          else if(seatcount==4){
                            printf("***Seat numbers***\n");
                            printf("Seat are allocated as follows\n");
                            printf("1.A1-A10\n");
                            printf("2.B1-B10\n");
                            printf("3.C1-C10\n");
                            printf("4.D1-D10\n");
                            printf("5.E1-E10\n");
                            printf("6.F1-F10\n");
                            printf("Enter seat numbers which are not filled\n ");
                            printf("Enter the seat number:\n");
                            scanf("%d %d %d %d",&seatnumber,&seatnumber,&seatnumber,&seatnumber);
                            switch(seatnumber){
                                 case 1 ... 10:
                                    printf("You booked a ticket in first row");
                                    break;
                                 case 11 ... 20:
                                    printf("You booked a ticket in Second  row");
                                    break;
                                  case 21 ... 30:
                                    printf("You booked a ticket in Third row");
                                    break;
                                 case 31 ... 40:
                                    printf("You booked a ticket in Third row");
                                    break;
                                 case 41 ... 50:
                                    printf("You booked a ticket in Fourth row");
                                    break;
                                 case 51 ... 60:
                                    printf("You booked a ticket in Fifth row");
                                    break;
                                 case 61 ... 70:
                                    printf("You booked a ticket in last  row");
                                    break;
                            }
                            
                        }
                    else{
                              printf("If YOU Want to book more than 4 first book 4 and next book remaining\n");
                      }
                           printf("\n\nYOUR TICKET BOOKING CONFIRMED\n");
                            printf("Enter How Many Tickets You Booked above\n");
                            scanf("%d",&nooftickets);
                            payment=nooftickets*250;
                             printf("YOU HAVE TO PAY %dFOR TICKET PRICE \n",payment);
                            printf("PAYMENT METHODS:\n");
                            printf("1.Phonepay\n");
                            printf("2.Credit card\n");
                            printf("Enter the payment method");
                            scanf("%d",&paymentmethod); 
                            int pin;
                             switch(paymentmethod){
                                 case 1:
                                     printf("Scan QR code\n");
                                     printf("processing......");
                                      printf("payment successful");
                                      break;
                                 case 2:
                                      printf("Enter the pin\n");
                                       scanf("%d",&pin);
                                       printf("processing......@\n");
                                       printf("payment successful\n");
                                       break;
                             }
                             printf("\n*****THANK YOU FOR VISITING*******\n");
                             printf("---       @@@VISIT AGAIN@@@         --- ");        
   
}         


    
    