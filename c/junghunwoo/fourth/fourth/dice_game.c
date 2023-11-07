#include "dice_game.h"

#include "random_generator.h"

int player_each_dice_number[MAX_PLAYER_NUMBER];

const int min = 1;
const int max = 6;

void roll_dice(const int index) 
{
	player_each_dice_number[index] = generate_random(min, max);

}

void print_dice_number(const int index)
{
	printf("%d�� �÷��̾��� �ֻ��� ������ %d\n", index, player_each_dice_number[index]);
}