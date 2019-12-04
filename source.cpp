// Example program
#include <iostream>
#include <string>

using namespace std;
string stockFruit[]={"","Apple", "Orange", "Banana", "Guava", "Mango", "Durian", "Jackfruit", "Grapes", "Cherries", "Pomegranate"};
string stockMeat[]={"", "Pork", "Beef", "Lamb", "Goat", "Chicken", "Turkey", "Venison", "Duck", "Wild Boar", "Goose"};
string stockVegetable[]={"", "Lettuce", "Spinach", "Chard", "Cabbage", "Cauliflower", "Broccoli", "Cucumber", "Celery", "Potato", "Onion"};

int checkStock(string& category, string& option ){
    bool check(false);
    if (category == "Fruit"){
        for (int i(1); i <= 10; i++){
            if (option == stockFruit[i]){
                i = 11;
                check = true;
                cout << "Yup, its available.\n";
            }
        }
    }
    else if (category == "Meat"){
        for (int i(1); i <= 10; i++){
            if (option == stockMeat[i]){
                i = 11;
                check = true;
                cout << "Yup, its available.\n";
            }
        }
    }
	else if (category == "Veggies"){
        for (int i(1); i <= 10; i++){
            if (option == stockVegetable[i]){
                i = 11;
                check = true;
                cout << "Yup, its available.\n";
            }
        }
    }
        
    return check;
}



struct list{
    string item;
    int amount;
}Fruit, Meat, Vegetable, Bread;


int main()
{
  string Option, response, Category; int amount(0); bool available(false), shopping(true);
  
  while (shopping == true){
  cout << "Welcome to Norman's Grocery Store, How may i help you?\n OPTIONS: 'Fruit', 'Meat', 'Veggies, 'Bread'\n";
  cin >> Category;
  
  //If they want to purchase fruit
  if (Category == "Fruit"){
      cout << "Current Fruits in Stock:\n";
      for (int i(1); i <= 10; i++){
          cout << stockFruit[i] << endl;
          }
          
          //Repeats if they enter string incorrectly
          while (available == false){
          cout << "What would you like?\n";
          cin >> Option;
          
          //Checks if item is available
            if ( checkStock(Category,Option) == true){
                    Fruit.item = Option;
                    cout << "How many would you like?\n";
                    cin >> amount;
                    Fruit.amount = amount;
                    available = true;
               }
               
            else{cout << "Sorry, we dont have any " << Option << " in stock. Choose another item from stock.\n";}
             
            }
        } 
        
    //If they want to purchase Meat
  else if (Category == "Meat"){
      cout << "Current Meats in Stock:\n";
      for (int i(1); i <= 10; i++){
          cout << stockMeat[i] << endl;
          }
          
          //Repeats if they enter string incorrectly
          while (available == false){
          cout << "What type of meat would you like?\n";
          cin >> Option;
          
          //Checks if item is available
            if ( checkStock(Category,Option) == true){
                    Meat.item = Option;
                    cout << "How many pounds of this meat do you want?\n";
                    cin >> amount;
                    Meat.amount = amount;
                    available = true;
               }
               
            else{cout << "Sorry, we dont have any " << Option << " in stock. Choose another item from stock.\n";}
             
            }
        } 

  //If they want to purchase Meat
  else if (Category == "Veggies"){
      cout << "Current Vegetables in Stock:\n";
      for (int i(1); i <= 10; i++){
          cout << stockVegetable[i] << endl;
          }
          
          //Repeats if they enter string incorrectly
          while (available == false){
          cout << "What type of vegetables would you want?\n";
          cin >> Option;
          
          //Checks if item is available
            if ( checkStock(Category,Option) == true){
                    Vegetable.item = Option;
                    cout << "How many bags of this do you want?\n";
                    cin >> amount;
                    Vegetable.amount = amount;
                    available = true;
               }
               
            else{cout << "Sorry, we dont have any " << Option << " in stock. Choose another item from stock.\n";}
             
            }
        } 
            
            cout << "To continue shopping, press any key. To end this session, press 1.\n";
            cin >> response;
            
            if (response == "1"){cout << "Thanks for shopping at Normans! Hope to see you soon!"; shopping = false;} else{available = false;}
            cout << "\n\n";
  }
  return 0;
}
