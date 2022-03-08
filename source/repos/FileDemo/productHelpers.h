
//Macro
#define NAME_SIZE 30

//Structure
struct Product
{
int sku;
double price;
char name[NAME_SIZE + 1];
};

//Function prototypes
#pragma region UI_Functions

void startProductManager(struct Product products[], int arrsize);

void addNewProduct(struct Product products[], int arrSize);

int getMenuSelection(void);

void displayProduct(const struct Product* product);

void displayproducts(struct Product products[], int arrSize);

void getProductData(struct Product* product);
