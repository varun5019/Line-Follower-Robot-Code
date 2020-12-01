void setup() {
pinMode(9,OUTPUT);
pinMode(6,OUTPUT);
pinMode(10,OUTPUT);
pinMode(11,OUTPUT);
pinMode(2,INPUT);
pinMode(3,INPUT);
  
}

void loop() {
int sen1;
  int sen2;
 int sen3;
 int sen4;
int sen5;
sen1=digitalRead(2);
sen2=digitalRead(3);
sen3=digitalRead(4);
sen4=digitalRead(5);
sen5=digitalRead(7);

if((sen1!=1) && (sen4==1)) 
   { digitalWrite(6, LOW);
     analogWrite(9, 175);
     
     analogWrite(10, 175);
     digitalWrite(11, LOW);
     
   }
   else  if((sen1==1) && (sen4!=1)) 
   { analogWrite(6, 175);
     digitalWrite(9, LOW);
     
     digitalWrite(10, LOW);
     analogWrite(11, 175);;
     
   }
    else if((sen2==1) && (sen3!=1)) 
  { analogWrite(6, 175);
     digitalWrite(9, LOW);
     
     digitalWrite(10, LOW);
     analogWrite(11, 175);
     
   }
   else if((sen2!=1) && (sen3==1)) 
 { digitalWrite(6, LOW);
     analogWrite(9, 175);
     
     analogWrite(10, 175);
     digitalWrite(11, LOW);
     
   }
    else if((((sen1!=1) && (sen4!=1)) && ((sen2!=1) && (sen3!=1))) && (sen5!=1))
   { digitalWrite(6, LOW);
     digitalWrite(9, LOW);
     
     digitalWrite(10, LOW);
     digitalWrite(A3, LOW);
   }
   
    else if(((sen1!=1) && (sen4!=1)) && ((sen2!=1) && (sen3!=1)))
   { digitalWrite(6, LOW);
     analogWrite(9, 80);
     analogWrite(10, 80);
     digitalWrite(11, LOW);
   }
   else
   {analogWrite(6, 120);
     digitalWrite(9, LOW);
     analogWrite(10, 120);
     digitalWrite(11, LOW);
   }
  }
   
