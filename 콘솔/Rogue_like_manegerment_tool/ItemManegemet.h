#ifndef __ITEM_H__
#define __ITEM_H__

//16-06-28 Work Start.
//It made by Ham Si Hawn, Korea, in  Anione High Shcool.

enum whereWear //Where Can Wear?
{
	BODY,
	RING,
	PANT,
	HEAD,
	HAND,  //this is 무기.
};

struct ItemNode
{
	struct ItemNode * next; //다음 아이템을 가르키고 있는 포인터
	char * name; //This Item Name.
	bool itCanWear; //Is Can Wear?
	int ID;//Item ID.
	int str;//Strong. Power.
	int dex;//Dex.
	int mag; //magika.
	int dmg; // it is Normal damege. 
	int dmgrand; //if want demege in  범위. You can use this.
	int getmp; //if eat it, How much to get mp?
	int gethp; //if eat it, How much to get hp ?
};

void readItemData();
void writeItemData();
#endif