#include<iostream>
#include<string>
using namespace std;

int gk(){
    
    cout<<"Welcome to the General Knowledge Quiz!"<<endl;
    cout<<"LETS BEGIN!"<<endl;
    int score = 0;
    char answer;

    


    // Question 1
    cout << "\n1. What is the capital of India?\n";
    cout << "A. Mumbai\n";
    cout << "B. New Delhi\n";
    cout << "C. Kolkata\n";
    cout << "D. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'B' || answer == 'b')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is B. New Delhi\n";
    }

    // Question 2
    cout << "\n2. Which planet is known as the Red Planet?\n";
    cout << "A. Venus\n";
    cout << "B. Earth\n";
    cout << "C. Mars\n";
    cout << "D. Jupiter\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is C. Mars\n";
    }

    // Question 3
    cout << "\n3. How many days are there in a leap year?\n";
    cout << "A. 365\n";
    cout << "B. 364\n";
    cout << "C. 366\n";
    cout << "D. 360\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is C. 366\n";
    }

    // Question 4
    cout << "\n4. Which is the largest ocean on Earth?\n";
    cout << "A. Atlantic Ocean\n";
    cout << "B. Indian Ocean\n";
    cout << "C. Arctic Ocean\n";
    cout << "D. Pacific Ocean\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'D' || answer == 'd')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is D. Pacific Ocean\n";
    }

    // Question 5
    cout << "\n5. Who wrote the Indian National Anthem?\n";
    cout << "A. Mahatma Gandhi\n";
    cout << "B. Rabindranath Tagore\n";
    cout << "C. Jawaharlal Nehru\n";
    cout << "D. Subhas Chandra Bose\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'B' || answer == 'b')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is B. Rabindranath Tagore\n";
    }

    // Question 6
    cout << "\n6. Which animal is known as the King of the Jungle?\n";
    cout << "A. Tiger\n";
    cout << "B. Elephant\n";
    cout << "C. Lion\n";
    cout << "D. Leopard\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is C. Lion\n";
    }

    // Question 7
    cout << "\n7. Which gas do plants absorb from the atmosphere?\n";
    cout << "A. Oxygen\n";
    cout << "B. Nitrogen\n";
    cout << "C. Carbon Dioxide\n";
    cout << "D. Hydrogen\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout << "Wrong! Correct answer is C. Carbon Dioxide\n";
    }

    // Question 8
    cout << "\n8. How many continents are there in the world?\n";
    cout << "A. 5\n";
    cout << "B. 6\n";
    cout << "C. 7\n";
    cout << "D. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 'C' || answer == 'c')
    {
        cout << "Correct!\n";
        score++;
    }
    else
    {
        cout<< "Wrong! Correct answer is C. 7\n";
    }

cout<<"Your total score is: "<<score<<"/8"<<endl;
if(score>=5){
    cout<<"Congratulations! You passed the quiz!"<<endl;
}
else{
    cout<<"Sorry! You failed the quiz. Better luck next time!"<<endl;
}

    return 0;
}









int science(){
    cout<<"Welcome to the Science Quiz!"<<endl;
    cout<<"LETS BEGIN!"<<endl;
    int score = 0;
    char answer;

    cout << "\n1. What is the chemical symbol for water?\n";
    cout << "A. CO2\n";
    cout << "B. H2O\n";
    cout << "C. O2\n";
    cout << "D. NaCl\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'B' || answer == 'b'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is B. H2O\n";
    }

    cout << "\n2. What planet is known for its rings?\n";
    cout << "A. Mars\n";
    cout << "B. Venus\n";
    cout << "C. Saturn\n";
    cout << "D. Mercury\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'C' || answer == 'c'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C. Saturn\n";
    }

    cout << "\n3. Which gas do plants use during photosynthesis?\n";
    cout << "A. Oxygen\n";
    cout << "B. Carbon Dioxide\n";
    cout << "C. Hydrogen\n";
    cout << "D. Nitrogen\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'B' || answer == 'b'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is B. Carbon Dioxide\n";
    }

    cout << "\n4. What force pulls objects toward Earth?\n";
    cout << "A. Friction\n";
    cout << "B. Gravity\n";
    cout << "C. Magnetism\n";
    cout << "D. Electricity\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'B' || answer == 'b'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is B. Gravity\n";
    }

    cout << "\n5. What is the center of an atom called?\n";
    cout << "A. Electron\n";
    cout << "B. Proton\n";
    cout << "C. Nucleus\n";
    cout << "D. Neutron\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'C' || answer == 'c'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C. Nucleus\n";
    }

    cout << "\n6. What is the boiling point of water at sea level in Celsius?\n";
    cout << "A. 50\n";
    cout << "B. 100\n";
    cout << "C. 150\n";
    cout << "D. 200\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'B' || answer == 'b'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is B. 100\n";
    }

    cout << "\n7. Which part of the plant transports water from roots to leaves?\n";
    cout << "A. Stem\n";
    cout << "B. Flower\n";
    cout << "C. Xylem\n";
    cout << "D. Leaf\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'C' || answer == 'c'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C. Xylem\n";
    }

    cout << "\n8. What form of energy is produced by the sun?\n";
    cout << "A. Solar energy\n";
    cout << "B. Sound energy\n";
    cout << "C. Nuclear energy\n";
    cout << "D. Mechanical energy\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'A' || answer == 'a'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is A. Solar energy\n";
    }

    cout << "Your total score is: " << score << "/8" << endl;
    if(score>=5){
        cout << "Congratulations! You passed the quiz!" << endl;
    } else {
        cout << "Sorry! You failed the quiz. Better luck next time!" << endl;
    }

    return 0;
}

int coding(){
    cout<<"Welcome to the Coding Quiz!"<<endl;
    cout<<"LETS BEGIN!"<<endl;
    int score = 0;
    char answer;

    cout << "\n1. Which keyword is used to print output in C++?\n";
    cout << "A. printf\n";
    cout << "B. cout\n";
    cout << "C. scanf\n";
    cout << "D. input\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'B' || answer == 'b'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is B. cout\n";
    }

    cout << "\n2. What symbol ends a statement in C++?\n";
    cout << "A. ,\n";
    cout << "B. .\n";
    cout << "C. ;\n";
    cout << "D. :\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'C' || answer == 'c'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C. ;\n";
    }

    cout << "\n3. Which data type stores true or false values?\n";
    cout << "A. int\n";
    cout << "B. char\n";
    cout << "C. bool\n";
    cout << "D. float\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'C' || answer == 'c'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C. bool\n";
    }

    cout << "\n4. Which loop is best when the number of iterations is known?\n";
    cout << "A. while\n";
    cout << "B. do-while\n";
    cout << "C. for\n";
    cout << "D. if\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'C' || answer == 'c'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C. for\n";
    }

    cout << "\n5. What does an if statement do?\n";
    cout << "A. Repeats code\n";
    cout << "B. Checks a condition\n";
    cout << "C. Defines a function\n";
    cout << "D. Declares a variable\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'B' || answer == 'b'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is B. Checks a condition\n";
    }

    cout << "\n6. Which operator is used for addition?\n";
    cout << "A. -\n";
    cout << "B. *\n";
    cout << "C. +\n";
    cout << "D. /\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'C' || answer == 'c'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C. +\n";
    }

    cout << "\n7. Which keyword is used to define a function that does not return a value?\n";
    cout << "A. int\n";
    cout << "B. void\n";
    cout << "C. return\n";
    cout << "D. func\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'B' || answer == 'b'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is B. void\n";
    }

    cout << "\n8. Which header is needed for cin and cout?\n";
    cout << "A. <cmath>\n";
    cout << "B. <string>\n";
    cout << "C. <iostream>\n";
    cout << "D. <vector>\n";
    cout << "Enter your answer: ";
    cin >> answer;
    if (answer == 'C' || answer == 'c'){
        cout << "Correct!\n";
        score++;
    } else {
        cout << "Wrong! Correct answer is C. <iostream>\n";
    }

    cout << "Your total score is: " << score << "/8" << endl;
    if(score>=5){
        cout << "Congratulations! You passed the quiz!" << endl;
    } else {
        cout << "Sorry! You failed the quiz. Better luck next time!" << endl;
    }

    return 0;
}

int main(){
 
    cout<<"WELCOME TO MY QUIZ GAME"<<endl;

    cout<<"Please enter your name: ";
    string name;    
    cin>>name;  
    cout<<"Hello "<<name<<", let's start the quiz!"<<endl;
    cout<<"So which theme do you want to continue with?"<<endl;
    cout<<"1. General Knowledge"<<endl;
    cout<<"2. Science"<<endl;
    cout<<"3. Coding"<<endl;

    int choice;
    cout<<"Enter your choice: ";
    cin>>choice;

    if(choice==1){
        cout<<"You have selected General Knowledge."<<endl;
        gk();
    }
    else if(choice==2){
        cout<<"You have selected Science."<<endl;
        science();
    }
    else if(choice==3){
        cout<<"You have selected Coding."<<endl;
        coding();
    }
    else{
        cout<<"Invalid choice! Please select a valid option."<<endl;
    }

    



    return 0;


}



