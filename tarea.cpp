#include <stdio.h>  
int temp_data = 1523;  
static int temp_bss;  
void print_addr ( void )  
{  
int local_var = 1997;  
int *code_segment_address = ( int* ) &print_addr;  
int *data_segment_address = &temp_data;  
int *bss_address = &temp_bss;  
int *stack_segment_address = &local_var;  
printf ( "\nDirección de los semgentos:" );  
printf ( "\n\tCode: %p" , code_segment_address );  
printf ( "\n\tData: %p" , data_segment_address );  
printf ( "\n\tBSS: %p" , bss_address );  
printf ( "\n\tStack: %p\n" , stack_segment_address );  
}  
int main ( )  
{  
print_addr ();  
return 0;  
} 