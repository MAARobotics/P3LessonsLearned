#include <kipr/wombat.h>

//Ports
//arm port 3
//claw port 0
//wrist port 2
//motor 3 is the right wheel
//motor 0 is the left wheel

//Botguy numbers
//arm up 608
//close claw 1264 
//wrist 236

//Orange ball numbers
//arm up 769
//close claw 798
//wrist 331

//Cuptler numbers
//arm down 1557
//claw open 468
//wrist 766

//motor 3 is the right wheel
//motor 0 is the left wheel
//claw close 1500
//no light 160
//light 1400
//arm port 3
//claw port 0
//motor 0 is red
//motor 3 is black
//wrist down 0
//turn left 0 is less
//turn right 3 is less

int main()
{
     wait_for_light(0);
    printf("Everybody but Neemah, I see the light!\n");  
 	
    enable_servos(); //starting position for the arm
    set_servo_position (3,0);
    msleep (500);
    
    motor(0,100);//move forward to cuptler
    motor(3,100);
    msleep(500);
    ao();
    
    set_servo_position (3,860);// drop the arm onto cuplter
    msleep (500);
        
    set_servo_position (2, 171); //move the wrist to 
    msleep (500);
    
    set_servo_position (0, 608);// postion for claw for cuptler
    msleep (500);
    
    motor(0,-100); //move back with cuptler
    motor(3,-100);
    msleep(1500);
    ao();
    
  // put up arm to let go off cuptler
    set_servo_position(3,0);
    msleep(500);
    
    set_servo_position(2,1200);
    msleep(500);
    
    
    motor(0,100);// move forward
    motor(3,100);
    msleep(500);
    ao();
    
    motor(0,50);// turn from cuptler
    motor(3,100);
    msleep(1000);
    ao();
    
    motor(0,100);
    motor(3,50);
    msleep(2000);
    ao();
    
    motor(0,100);//go forward to ramp
    motor(3,100);
    msleep(1000);
    ao();

    motor(0,100);// turning towards the ramp
    motor(3,0);
    msleep(600);
    ao();
    
    motor(0,100);//go up the ramp
    motor(3,100);
    msleep(4150);
    ao();
    
    motor(0,100);//turning left to botguy
    motor(3,25);
    msleep(1223);
    ao();
    
    enable_servos();
    
    set_servo_position(3,0);// arm position for bot guy
    msleep(500);
    
    set_servo_position(2,811); //wrist position for botguy
    msleep(200);
    
    set_servo_position(0,0);// claw postion for botguy
    msleep(500);
    disable_servos();
    
    motor(0,100);// go to botguy
    motor(3,100);
    msleep(2500);
    ao();
    
    motor(0,90);//turning straighter
    motor(3,100);
    msleep(500);
    ao();
    
    enable_servos();//grabbing botguy
    
    set_servo_position(2,911);// wrist position for bot guy
    msleep(500);
    
    set_servo_position(3,0);//arm position for botguy
    msleep(500);
    
    set_servo_position(0,1570);// claw postion for botguy
    msleep(500);
    disable_servos();
    
    motor(0,-100);// move back with botguy 
    motor(3,-100);
    msleep(1000);
    
    motor(0,70);// turn left to drop botguy
    motor(3,0);
    msleep(1000);
    ao();
    
    enable_servos();//open to let go of botguy
    set_servo_position(0,0);
    msleep(500);
    disable_servos();
    
    motor(0,0); //turn right to get back straight
    motor(3,70);
    msleep(1000);
    ao();
    
    motor(0,-100);//going backwards off the ramp
    motor(3,-100);
    msleep(3000);
    ao();
    
    motor(0,-100);
    motor(3,-25);
    msleep(1223);
    ao();
    
    
    return 0;
}
