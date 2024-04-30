#include <stdio.h>

int main() {
  printf("\n#### ResistorCalc v1.0 ####\n\n");
  printf("Developed by: Nader Fares\n\n");

  // Váriaveis Principais
  float voltage; // (Volts)
  float current; // (Amper)

  printf("Enter the circuit voltage in volts: ");
  scanf("%f", &voltage);

  printf("\nEnter the circuit current in ampers: ");
  scanf("%f", &current);

  // Lei de Ohm: R = V / I
  float resistance = voltage / current;

  printf("\nThe resistance value is: %.2f Ohms", resistance);

  return 0;
}