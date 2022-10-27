/**
  ******************************************************************************
  * @file    main.c
  * @author  Hoyem Zaidi
  * @brief   How to develop structured code 
  * @version V1.0.0
  * @date    26-10-2022
  *****************************************************************************/
/* Includes ------------------------------------------------------------------*/

/* Private function prototypes -----------------------------------------------*/

/* Macros --------------------------------------------------------------------*/
#define INTEL 1 /*define the variable INTEL = 1*/
#define NOINTEL 0 /*define the variable NOINTEL = 0*/

#define A 10 /*define the variable A = 10*/
#define B 3  /*define the variable INTEL = 3*/

#define SOM(X,Y) (INTEL)?(X+Y):(X*Y)
#define MUL(X,Y) (NOINTEL)? (X+Y):(X*Y) 
#define MIN(X,Y) (INTEL)?((X<Y)? X : Y): ((X>Y)? X: Y)
#define MAX(X,Y) (NOINTEL)?((X<Y)? X: Y): ((X>Y)? X: Y)
/* Private functions ---------------------------------------------------------*/
/**
  * @brief  Main program
  * @param  None
  * @retval None
  */
int main(void)
{
  int Som = SOM(A,B);
  int Min = MIN(A,B);
  
  int Mul = MUL(A,B);
  int Max = MAX(A,B);
  while (1)
  {}
}




/**************************************END OF FILE**************************************/
