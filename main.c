#include <stdio.h>

int main(void) {
  int age, totalAge, qtyPeople, qty018, qty1940, qty4165, qtyPlus65, qtyUnderweight, qtyNormal, qtyOverweight, qtyObesityI, qtyObesityII, qtyObesityIII;
  double weight, totalWeight, height, totalHeight, bmi, averageAge, averageHeight, averageWeight;

  qty018 = 0; qty1940 = 0; qty4165 = 0; qtyPlus65 = 0; qtyUnderweight = 0; qtyNormal = 0; qtyOverweight = 0; qtyObesityI = 0; qtyObesityII = 0; qtyObesityIII = 0; age = 0; totalAge = 0; totalWeight = 0; totalHeight = 0; qtyPeople = 0;

  while (age >= 0) {
  printf("Enter your age: ");
    scanf("%d",&age);
       if ((age >=0) && (age <= 18)) {
       qty018++;
}
           if (age<0) {
            printf("\n");
            break;
}    
      else if ((age >= 19) && (age <= 40)) {
      qty1940++;
}
      else if ((age >= 41) && (age <= 65)) {
      qty4165++;
}
      else if ((age > 65)) {
      qtyPlus65++;
}
  printf("Enter your height (Ex: 0.00): ");
    scanf("%lf",&height);
  printf("Enter your weight in kilos: ");
    scanf("%lf",&weight);
  printf("\n");  

    qtyPeople++;

totalAge = totalAge + age;
averageAge = totalAge/qtyPeople;
totalWeight = totalWeight + weight;
averageWeight = totalWeight/qtyPeople;
totalHeight = totalHeight + height;
averageHeight = totalHeight/qtyPeople; 


bmi = weight/(height*height);
  if (bmi < 18.5) {
    qtyUnderweight++; 
  }
    else if ((bmi >= 18.5) && (bmi < 24.9)) {
     qtyNormal++;  
      }    
    else if ((bmi >= 25) && (bmi < 29.9)) {
    qtyOverweight++;
      }      
    else if ((bmi >= 30) && (bmi < 34.9)) {
     qtyObesityI++;
      }
    else if ((bmi >= 35) && (bmi < 39.9)) {
     qtyObesityII++;
      }
    else if (bmi >= 40) {
     qtyObesityIII++;
      }
    
      
  }

printf("\n================================================================\n\n");
printf("The total number of people is: %d\n",qtyPeople);
printf("The average age is: %.2f years old.\n",averageAge);
printf("The average height is: %.2fm\n",averageHeight);
printf("The average weight is: %.2fkg\n",averageWeight);
printf("\n");
printf("The number of people between 0 and 18 years old is: %d\n",qty018); 
printf("The number of people between 19 and 40 years old is: %d\n",qty1940);  
printf("The number of people between 41 and 65 years old is: %d\n",qty4165);
printf("The number of people over 65 years old is: %d\n",qtyPlus65);
printf("\n");
printf("The number of people with Underweight BMI is: %d\n",qtyUnderweight);  
printf("The number of people with Normal BMI is: %d\n",qtyNormal); 
printf("The number of people with Overweight BMI is: %d\n",qtyOverweight); 
printf("The number of people with Obesity I BMI is: %d\n",qtyObesityI); 
printf("The number of people with Obesity II BMI is: %d\n",qtyObesityII); 
printf("The number of people with Obesity III BMI is: %d\n",qtyObesityIII);   
  return 0;
}
