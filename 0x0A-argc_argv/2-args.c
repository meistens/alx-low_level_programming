#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: Count arguments
 * @argv: Arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int count = 0;
if (argc > 0)
{
while (count < argc)
{
printf("%s\n", argv[count])
