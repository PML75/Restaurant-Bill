#include <iomanip>
#include <iostream>


using namespace std;

int main() {
 // TODO: Create a program that computes the restaurant bill.
 double MEAL_COST;
 double TAX_COST = 0.075;
 double TIP_PERCENT;
 double TOTAL_COST;
 double TIP_MONEY;
 
 cout << "Please input meal cost: ";
 cin >> MEAL_COST;
 
 cout << "Please input tip percentage: ";
 cin >> TIP_PERCENT;
 
 double mTaxes = MEAL_COST * TAX_COST;
 double mTips = MEAL_COST * (TIP_PERCENT/100);
 TOTAL_COST = MEAL_COST + mTaxes + mTips;
 
 cout << "\nRestaurant Bill" << endl;
 cout << "====================" << endl; 
 cout << fixed << setprecision(2) << "Subtotal: $" << MEAL_COST << endl;
 cout << fixed << setprecision(2) << "Taxes: $" << mTaxes << endl;
 cout << fixed << setprecision(2) << "Tip: $" << mTips << endl;
 cout << fixed << "====================" << endl;
 cout << fixed << setprecision(2) << "Total: $" << TOTAL_COST << "\n";
  
 return 0;
}
