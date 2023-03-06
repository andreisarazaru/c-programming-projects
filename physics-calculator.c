#include <stdio.h>
#include <stdlib.h>

int main () {
system("cls");
int start;
int formula;
float speed, speed_time, speed_distance; 
float acceleration, init_velocity, final_velocity, acc_time; 
float density_mass, density_volume, density;
float power_work, power_time, power; 
float weight_mass, weight_gravity, weight;
float pressure, pressure_force, pressure_area;

printf("Welcome to the Physics Calculator!\n");
printf("Press 1 to START.\n");
scanf("%d", &start);

if (start == 1);
printf("Choose your formula.\n");
printf("1 for Speed.\n");
printf("2 for Acceleration.\n");
printf("3 for Density.\n");
printf("4 for Power.\n");
printf("5 for Weight.\n");
printf("6 for Pressure.\n");
scanf("%d", &formula);

if (formula == 1)
  { printf("Speed\n");
    printf("The formula for speed is: \n speed = distance / time");
    printf("\nPlease enter the distance:\n ");
      scanf("%f", &speed_distance);
    printf("Please enter the time: \n");
      scanf("%f", &speed_time);
  
    printf("%f / %f", speed_distance, speed_time);
    
    speed = speed_distance / speed_time;
    
    printf("Speed = %f", speed);}
  
  
else if (formula == 2)
 { printf("Acceleration\n");
   printf("The formula for acceleration is: \n acceleration = final velocity - initial velocity / time taken\n");
   printf("Please enter the final velocity: \n");
    scanf("%f", &final_velocity);
   printf("Please enter the initial velocity: \n");
    scanf("%f", &init_velocity);
   printf("Please enter the time taken: \n");
    scanf("%f", &acc_time);

  acceleration = (final_velocity - init_velocity) / acc_time;

   printf("Acceleration = %f ", acceleration); 
   }


else if (formula == 3)
  { printf("Density\n");
    printf("The formula for density is : \n density = mass / volume\n");
    printf("Please enter the mass: \n");
      scanf("%f", &density_mass);
    printf("Please enter the volume:\n");
      scanf("%f", &density_volume);
    density = density_mass / density_volume;

   printf("Density = %f", density); }
else if (formula == 4)
  { printf("Power\n");
    printf("The formula for power is: \n power = work / time taken\n");
    printf("Please enter work:\n ");
      scanf("%f", &power_work);
    printf("Please enter time taken: \n");
      scanf("%f", &power_time);

    power = power_work / power_time;

    printf("Power = %f", power); }
else if (formula == 5)
  { printf("Weight\n");
    printf("The formula for weight is: \n weight = m x g\n");
    printf("Please enter mass:\n ");
      scanf("%f", &weight_mass);
    printf("Please enter gravity:\n ");
      scanf("%f", &weight_gravity);
    
    weight = weight_mass * weight_gravity;

    printf("Weight = %f", weight); }


else if (formula == 6)
  { printf("Pressure\n");
    printf("The formula for pressure is: \n pressure = force applied / total area\n");
    printf("Please enter the force applied: \n");
      scanf("%f", &pressure_force);
    printf("Please enter the total area: \n");
      scanf("%f", &pressure_area);
    
    pressure = pressure_force / pressure_area;

    printf("Pressure = %f", pressure); }



return 0;
      

    }


      
    
  

