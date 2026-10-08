/* 1.Programming Paradigm - apporach of writing program

 2.Monolithic Programming- one big block of code
  ┌─────────────────────────┐
  │                         │
  │   Complete Program      │
  │                         │
  │   Input                 │  in one large block everything.
  │   Calculation           │
  │   Checking              │
  │   Output                │
  │   More Code             │
  │                         │
  └─────────────────────────┘

 Disadvantage : not manageable, difficult to understand, debug, modification

goto based approach


 3.Procedural Programming - divides code in Functions

 example: void input(){   }
          void  calculate(){   }
          void display(){   }

Disadvantage: Data and Functions are generally separated
              In large programs data protection is difficult


 4. Structured Programming - more organized form of procedural programming

     uses logical structures like if/else, switch, for, while

 example:
     if(marks >= 40)
     {
     cout << "Pass";
     }else
     {
       cout << "Fail";
     }

  Loop:
    for(int i = 0; i < 5; i++)
    {
      cout << i;
    }

    instead of unnecessary jumping, program flow logically maintained
    structured Programming = Proper Logical Structure

 5.Object-Oriented Programming
   
   main idea: Real-World objects -> represent in program
   eg: College System -
         Student, Teacher, Course, Exam, Department

         Student-- Object 
          -> Data: name, rollname, marks
          -> Functions/Actions: study(), giveExam(), display()

*/

