# 1 "c:\\vugentutorial\\vugenscripts\\recordingscriptsinvugen\\\\combined_RecordingScriptsInVugen.c"
# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h" 1
 
 












 











# 103 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





















































		


		typedef unsigned size_t;
	
	
        
	

















	

 



















 
 
 
 
 


 
 
 
 
 
 














int     lr_start_transaction   (char * transaction_name);
int lr_start_sub_transaction          (char * transaction_name, char * trans_parent);
long lr_start_transaction_instance    (char * transaction_name, long parent_handle);
int   lr_start_cross_vuser_transaction		(char * transaction_name, char * trans_id_param); 



int     lr_end_transaction     (char * transaction_name, int status);
int lr_end_sub_transaction            (char * transaction_name, int status);
int lr_end_transaction_instance       (long transaction, int status);
int   lr_end_cross_vuser_transaction	(char * transaction_name, char * trans_id_param, int status);


 
typedef char* lr_uuid_t;
 



lr_uuid_t lr_generate_uuid();

 


int lr_generate_uuid_free(lr_uuid_t uuid);

 



int lr_generate_uuid_on_buf(lr_uuid_t buf);

   
# 273 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int lr_start_distributed_transaction  (char * transaction_name, lr_uuid_t correlator, long timeout  );

   







int lr_end_distributed_transaction  (lr_uuid_t correlator, int status);


double lr_stop_transaction            (char * transaction_name);
double lr_stop_transaction_instance   (long parent_handle);


void lr_resume_transaction           (char * trans_name);
void lr_resume_transaction_instance  (long trans_handle);


int lr_update_transaction            (const char *trans_name);


 
void lr_wasted_time(long time);


 
int lr_set_transaction(const char *name, double duration, int status);
 
long lr_set_transaction_instance(const char *name, double duration, int status, long parent_handle);


int   lr_user_data_point                      (char *, double);
long lr_user_data_point_instance                   (char *, double, long);
 



int lr_user_data_point_ex(const char *dp_name, double value, int log_flag);
long lr_user_data_point_instance_ex(const char *dp_name, double value, long parent_handle, int log_flag);


int lr_transaction_add_info      (const char *trans_name, char *info);
int lr_transaction_instance_add_info   (long trans_handle, char *info);
int lr_dpoint_add_info           (const char *dpoint_name, char *info);
int lr_dpoint_instance_add_info        (long dpoint_handle, char *info);


double lr_get_transaction_duration       (char * trans_name);
double lr_get_trans_instance_duration    (long trans_handle);
double lr_get_transaction_think_time     (char * trans_name);
double lr_get_trans_instance_think_time  (long trans_handle);
double lr_get_transaction_wasted_time    (char * trans_name);
double lr_get_trans_instance_wasted_time (long trans_handle);
int    lr_get_transaction_status		 (char * trans_name);
int	   lr_get_trans_instance_status		 (long trans_handle);

 



int lr_set_transaction_status(int status);

 



int lr_set_transaction_status_by_name(int status, const char *trans_name);
int lr_set_transaction_instance_status(int status, long trans_handle);


typedef void* merc_timer_handle_t;
 

merc_timer_handle_t lr_start_timer();
double lr_end_timer(merc_timer_handle_t timer_handle);


 
 
 
 
 
 











 



int   lr_rendezvous  (char * rendezvous_name);
 




int   lr_rendezvous_ex (char * rendezvous_name);



 
 
 
 
 
char *lr_get_vuser_ip (void);
void   lr_whoami (int *vuser_id, char ** sgroup, int *scid);
char *	  lr_get_host_name (void);
char *	  lr_get_master_host_name (void);

 
long     lr_get_attrib_long	(char * attr_name);
char *   lr_get_attrib_string	(char * attr_name);
double   lr_get_attrib_double      (char * attr_name);

char * lr_paramarr_idx(const char * paramArrayName, unsigned int index);
char * lr_paramarr_random(const char * paramArrayName);
int    lr_paramarr_len(const char * paramArrayName);

int	lr_param_unique(const char * paramName);
int lr_param_sprintf(const char * paramName, const char * format, ...);


 
 
static void *ci_this_context = 0;






 








void lr_continue_on_error (int lr_continue);
char *   lr_unmask (const char *EncodedString);
char *   lr_decrypt (const char *EncodedString);


 
 
 
 
 
 



 







 















void   lr_abort (void);
void lr_exit(int exit_option, int exit_status);
void lr_abort_ex (unsigned long flags);

void   lr_peek_events (void);


 
 
 
 
 


void   lr_think_time (double secs);

 


void lr_force_think_time (double secs);


 
 
 
 
 



















int   lr_msg (char * fmt, ...);
int   lr_debug_message (unsigned int msg_class,
									    char * format,
										...);
# 513 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_new_prefix (int type,
                                 char * filename,
                                 int line);
# 516 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_log_message (char * fmt, ...);
int   lr_message (char * fmt, ...);
int   lr_error_message (char * fmt, ...);
int   lr_output_message (char * fmt, ...);
int   lr_vuser_status_message (char * fmt, ...);
int   lr_error_message_without_fileline (char * fmt, ...);
int   lr_fail_trans_with_error (char * fmt, ...);

 
 
 
 
 
# 540 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

 
 
 
 
 





int   lr_next_row ( char * table);
int lr_advance_param ( char * param);



														  
														  

														  
														  

													      
 


char *   lr_eval_string (char * str);
int   lr_eval_string_ext (const char *in_str,
                                     unsigned long const in_len,
                                     char ** const out_str,
                                     unsigned long * const out_len,
                                     unsigned long const options,
                                     const char *file,
								     long const line);
# 574 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_eval_string_ext_free (char * * pstr);

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
int lr_param_increment (char * dst_name,
                              char * src_name);
# 597 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"













											  
											  

											  
											  
											  

int	  lr_save_var (char *              param_val,
							  unsigned long const param_val_len,
							  unsigned long const options,
							  char *			  param_name);
# 621 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_save_string (const char * param_val, const char * param_name);



int   lr_set_custom_error_message (const char * param_val, ...);

int   lr_remove_custom_error_message ();


int   lr_free_parameter (const char * param_name);
int   lr_save_int (const int param_val, const char * param_name);
int   lr_save_timestamp (const char * tmstampParam, ...);
int   lr_save_param_regexp (const char *bufferToScan, unsigned int bufSize, ...);

int   lr_convert_double_to_integer (const char *source_param_name, const char * target_param_name);
int   lr_convert_double_to_double (const char *source_param_name, const char *format_string, const char * target_param_name);

 
 
 
 
 
 
# 700 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_save_datetime (const char *format, int offset, const char *name);









 











 
 
 
 
 






 



char * lr_error_context_get_entry (char * key);

 



long   lr_error_context_get_error_id (void);


 
 
 

int lr_table_get_rows_num (char * param_name);

int lr_table_get_cols_num (char * param_name);

char * lr_table_get_cell_by_col_index (char * param_name, int row, int col);

char * lr_table_get_cell_by_col_name (char * param_name, int row, const char* col_name);

int lr_table_get_column_name_by_index (char * param_name, int col, 
											char * * const col_name,
											size_t * col_name_len);
# 761 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int lr_table_get_column_name_by_index_free (char * col_name);

 
 
 
 
# 776 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
int   lr_zip (const char* param1, const char* param2);
int   lr_unzip (const char* param1, const char* param2);

 
 
 
 
 
 
 
 

 
 
 
 
 
 
int   lr_param_substit (char * file,
                                   int const line,
                                   char * in_str,
                                   size_t const in_len,
                                   char * * const out_str,
                                   size_t * const out_len);
# 800 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
void   lr_param_substit_free (char * * pstr);


 
# 812 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"





char *   lrfnc_eval_string (char * str,
                                      char * file_name,
                                      long const line_num);
# 820 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


int   lrfnc_save_string ( const char * param_val,
                                     const char * param_name,
                                     const char * file_name,
                                     long const line_num);
# 826 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lrfnc_free_parameter (const char * param_name );







typedef struct _lr_timestamp_param
{
	int iDigits;
}lr_timestamp_param;

extern const lr_timestamp_param default_timestamp_param;

int   lrfnc_save_timestamp (const char * param_name, const lr_timestamp_param* time_param);

int lr_save_searched_string(char * buffer, long buf_size, unsigned int occurrence,
			    char * search_string, int offset, unsigned int param_val_len, 
			    char * param_name);

 
char *   lr_string (char * str);

 
# 929 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"

int   lr_save_value (char * param_val,
                                unsigned long const param_val_len,
                                unsigned long const options,
                                char * param_name,
                                char * file_name,
                                long const line_num);
# 936 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


 
 
 
 
 











int   lr_printf (char * fmt, ...);
 
int   lr_set_debug_message (unsigned int msg_class,
                                       unsigned int swtch);
# 958 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
unsigned int   lr_get_debug_message (void);


 
 
 
 
 

void   lr_double_think_time ( double secs);
void   lr_usleep (long);


 
 
 
 
 
 




int *   lr_localtime (long offset);


int   lr_send_port (long port);


# 1034 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"



struct _lr_declare_identifier{
	char signature[24];
	char value[128];
};

int   lr_pt_abort (void);

void vuser_declaration (void);






# 1063 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"


# 1075 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrun.h"
















 
 
 
 
 







int    _lr_declare_transaction   (char * transaction_name);


 
 
 
 
 







int   _lr_declare_rendezvous  (char * rendezvous_name);

 
 
 
 
 


typedef int PVCI;






typedef int VTCERR;









PVCI   vtc_connect(char * servername, int portnum, int options);
VTCERR   vtc_disconnect(PVCI pvci);
VTCERR   vtc_get_last_error(PVCI pvci);
VTCERR   vtc_query_column(PVCI pvci, char * columnName, int columnIndex, char * *outvalue);
VTCERR   vtc_query_row(PVCI pvci, int rowIndex, char * **outcolumns, char * **outvalues);
VTCERR   vtc_send_message(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_if_unique(PVCI pvci, char * column, char * message, unsigned short *outRc);
VTCERR   vtc_send_row1(PVCI pvci, char * columnNames, char * messages, char * delimiter, unsigned char sendflag, unsigned short *outUpdates);
VTCERR   vtc_search_row(PVCI pvci, char * columnNames, char * messages, char * delimiter, char * **outcolumns, char * **outvalues);
VTCERR   vtc_update_message(PVCI pvci, char * column, int index , char * message, unsigned short *outRc);
VTCERR   vtc_update_message_ifequals(PVCI pvci, char * columnName, int index,	char * message, char * ifmessage, unsigned short 	*outRc);
VTCERR   vtc_update_row1(PVCI pvci, char * columnNames, int index , char * messages, char * delimiter, unsigned short *outUpdates);
VTCERR   vtc_retrieve_message(PVCI pvci, char * column, char * *outvalue);
VTCERR   vtc_retrieve_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues);
VTCERR   vtc_retrieve_row(PVCI pvci, char * **outcolumns, char * **outvalues);
VTCERR   vtc_rotate_message(PVCI pvci, char * column, char * *outvalue, unsigned char sendflag);
VTCERR   vtc_rotate_messages1(PVCI pvci, char * columnNames, char * delimiter, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_rotate_row(PVCI pvci, char * **outcolumns, char * **outvalues, unsigned char sendflag);
VTCERR   vtc_increment(PVCI pvci, char * column, int index , int incrValue, int *outValue);
VTCERR   vtc_clear_message(PVCI pvci, char * column, int index , unsigned short *outRc);
VTCERR   vtc_clear_column(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_ensure_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_drop_index(PVCI pvci, char * column, unsigned short *outRc);
VTCERR   vtc_clear_row(PVCI pvci, int rowIndex, unsigned short *outRc);
VTCERR   vtc_create_column(PVCI pvci, char * column,unsigned short *outRc);
VTCERR   vtc_column_size(PVCI pvci, char * column, int *size);
void   vtc_free(char * msg);
void   vtc_free_list(char * *msglist);
VTCERR   vtc_update_all_message_ifequals(PVCI pvci, char * columnNames, char * message, char * ifmessage, char * delimiter, unsigned short *outRc);

VTCERR   lrvtc_connect(char * servername, int portnum, int options);
VTCERR   lrvtc_connect_ex(char * vtc_first_param, ...);
VTCERR   lrvtc_connect_ex_no_ellipsis(const char *vtc_first_param, char ** arguments, int argCount);
VTCERR   lrvtc_disconnect();
VTCERR   lrvtc_query_column(char * columnName, int columnIndex);
VTCERR   lrvtc_query_row(int columnIndex);
VTCERR   lrvtc_send_message(char * columnName, char * message);
VTCERR   lrvtc_send_if_unique(char * columnName, char * message);
VTCERR   lrvtc_send_row1(char * columnNames, char * messages, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_search_row(char * columnNames, char * messages, char * delimiter);
VTCERR   lrvtc_update_message(char * columnName, int index , char * message);
VTCERR   lrvtc_update_message_ifequals(char * columnName, int index, char * message, char * ifmessage);
VTCERR   lrvtc_update_row1(char * columnNames, int index , char * messages, char * delimiter);
VTCERR   lrvtc_retrieve_message(char * columnName);
VTCERR   lrvtc_retrieve_messages1(char * columnNames, char * delimiter);
VTCERR   lrvtc_retrieve_row();
VTCERR   lrvtc_rotate_message(char * columnName, unsigned char sendflag);
VTCERR   lrvtc_rotate_messages1(char * columnNames, char * delimiter, unsigned char sendflag);
VTCERR   lrvtc_rotate_row(unsigned char sendflag);
VTCERR   lrvtc_increment(char * columnName, int index , int incrValue);
VTCERR   lrvtc_noop();
VTCERR   lrvtc_clear_message(char * columnName, int index);
VTCERR   lrvtc_clear_column(char * columnName); 
VTCERR   lrvtc_ensure_index(char * columnName); 
VTCERR   lrvtc_drop_index(char * columnName); 
VTCERR   lrvtc_clear_row(int rowIndex);
VTCERR   lrvtc_create_column(char * columnName);
VTCERR   lrvtc_column_size(char * columnName);
VTCERR   lrvtc_update_all_message_ifequals(char * columnNames, char * message, char * ifmessage, char * delimiter);



 
 
 
 
 

 
int lr_enable_ip_spoofing();
int lr_disable_ip_spoofing();


 




int lr_convert_string_encoding(char * sourceString, char * fromEncoding, char * toEncoding, char * paramName);
int lr_read_file(const char *filename, const char *outputParam, int continueOnError);

int lr_get_char_count(const char * string);


 
int lr_db_connect (char * pFirstArg, ...);
int lr_db_disconnect (char * pFirstArg,	...);
int lr_db_executeSQLStatement (char * pFirstArg, ...);
int lr_db_dataset_action(char * pFirstArg, ...);
int lr_checkpoint(char * pFirstArg,	...);
int lr_db_getvalue(char * pFirstArg, ...);







 
 



















# 1 "c:\\vugentutorial\\vugenscripts\\recordingscriptsinvugen\\\\combined_RecordingScriptsInVugen.c" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h" 1



 
 
 
 
# 100 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/SharedParameter.h"






typedef int PVCI2;






typedef int VTCERR2;


 
 
 

 
extern PVCI2    vtc_connect(char *servername, int portnum, int options);
extern VTCERR2  vtc_disconnect(PVCI2 pvci);
extern VTCERR2  vtc_get_last_error(PVCI2 pvci);

 
extern VTCERR2  vtc_query_column(PVCI2 pvci, char *columnName, int columnIndex, char **outvalue);
extern VTCERR2  vtc_query_row(PVCI2 pvci, int columnIndex, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_send_message(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_if_unique(PVCI2 pvci, char *column, char *message, unsigned short *outRc);
extern VTCERR2  vtc_send_row1(PVCI2 pvci, char *columnNames, char *messages, char *delimiter,  unsigned char sendflag, unsigned short *outUpdates);
extern VTCERR2  vtc_search_row(PVCI2 pvci, char *columnNames, char *messages, char *delimiter, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_update_message(PVCI2 pvci, char *column, int index , char *message, unsigned short *outRc);
extern VTCERR2  vtc_update_message_ifequals(PVCI2 pvci, char	*columnName, int index,	char *message, char	*ifmessage,	unsigned short 	*outRc);
extern VTCERR2  vtc_update_row1(PVCI2 pvci, char *columnNames, int index , char *messages, char *delimiter, unsigned short *outUpdates);
extern VTCERR2  vtc_retrieve_message(PVCI2 pvci, char *column, char **outvalue);
extern VTCERR2  vtc_retrieve_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues);
extern VTCERR2  vtc_retrieve_row(PVCI2 pvci, char ***outcolumns, char ***outvalues);
extern VTCERR2  vtc_rotate_message(PVCI2 pvci, char *column, char **outvalue, unsigned char sendflag);
extern VTCERR2  vtc_rotate_messages1(PVCI2 pvci, char *columnNames, char *delimiter, char ***outvalues, unsigned char sendflag);
extern VTCERR2  vtc_rotate_row(PVCI2 pvci, char ***outcolumns, char ***outvalues, unsigned char sendflag);
extern VTCERR2	vtc_increment(PVCI2 pvci, char *column, int index , int incrValue, int *outValue);
extern VTCERR2  vtc_clear_message(PVCI2 pvci, char *column, int index , unsigned short *outRc);
extern VTCERR2  vtc_clear_column(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_clear_row(PVCI2 pvci, int rowIndex, unsigned short *outRc);

extern VTCERR2  vtc_create_column(PVCI2 pvci, char *column,unsigned short *outRc);
extern VTCERR2  vtc_column_size(PVCI2 pvci, char *column, int *size);
extern VTCERR2  vtc_ensure_index(PVCI2 pvci, char *column, unsigned short *outRc);
extern VTCERR2  vtc_drop_index(PVCI2 pvci, char *column, unsigned short *outRc);

extern VTCERR2  vtc_noop(PVCI2 pvci);

 
extern void vtc_free(char *msg);
extern void vtc_free_list(char **msglist);

 


 




 




















 




 
 
 

extern VTCERR2  lrvtc_connect(char *servername, int portnum, int options);
 
 
extern VTCERR2  lrvtc_disconnect();
extern VTCERR2  lrvtc_query_column(char *columnName, int columnIndex);
extern VTCERR2  lrvtc_query_row(int columnIndex);
extern VTCERR2  lrvtc_send_message(char *columnName, char *message);
extern VTCERR2  lrvtc_send_if_unique(char *columnName, char *message);
extern VTCERR2  lrvtc_send_row1(char *columnNames, char *messages, char *delimiter,  unsigned char sendflag);
extern VTCERR2  lrvtc_search_row(char *columnNames, char *messages, char *delimiter);
extern VTCERR2  lrvtc_update_message(char *columnName, int index , char *message);
extern VTCERR2  lrvtc_update_message_ifequals(char *columnName, int index, char 	*message, char *ifmessage);
extern VTCERR2  lrvtc_update_row1(char *columnNames, int index , char *messages, char *delimiter);
extern VTCERR2  lrvtc_retrieve_message(char *columnName);
extern VTCERR2  lrvtc_retrieve_messages1(char *columnNames, char *delimiter);
extern VTCERR2  lrvtc_retrieve_row();
extern VTCERR2  lrvtc_rotate_message(char *columnName, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_messages1(char *columnNames, char *delimiter, unsigned char sendflag);
extern VTCERR2  lrvtc_rotate_row(unsigned char sendflag);
extern VTCERR2  lrvtc_increment(char *columnName, int index , int incrValue);
extern VTCERR2  lrvtc_clear_message(char *columnName, int index);
extern VTCERR2  lrvtc_clear_column(char *columnName);
extern VTCERR2  lrvtc_clear_row(int rowIndex);
extern VTCERR2  lrvtc_create_column(char *columnName);
extern VTCERR2  lrvtc_column_size(char *columnName);
extern VTCERR2  lrvtc_ensure_index(char *columnName);
extern VTCERR2  lrvtc_drop_index(char *columnName);

extern VTCERR2  lrvtc_noop();

 
 
 

                               


 
 
 





















# 2 "c:\\vugentutorial\\vugenscripts\\recordingscriptsinvugen\\\\combined_RecordingScriptsInVugen.c" 2

# 1 "globals.h" 1
 
 

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 1







# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h" 1



























































 




 



 











 





















 
 
 

  int
	web_add_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_add_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
	
  int
	web_add_auto_header(
		const char *		mpszHeader,
		const char *		mpszValue);

  int
	web_add_header(
		const char *		mpszHeader,
		const char *		mpszValue);
  int
	web_add_cookie(
		const char *		mpszCookie);
  int
	web_cleanup_auto_headers(void);
  int
	web_cleanup_cookies(void);
  int
	web_concurrent_end(
		const char * const	mpszReserved,
										 
		...								 
	);
  int
	web_concurrent_start(
		const char * const	mpszConcurrentGroupName,
										 
										 
		...								 
										 
	);
  int
	web_create_html_param(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim);
  int
	web_create_html_param_ex(
		const char *		mpszParamName,
		const char *		mpszLeftDelim,
		const char *		mpszRightDelim,
		const char *		mpszNum);
  int
	web_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_custom_request(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_disable_keep_alive(void);
  int
	web_enable_keep_alive(void);
  int
	web_find(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_get_int_property(
		const int			miHttpInfoType);
  int
	web_image(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_image_check(
		const char *		mpszName,
		...);
  int
	web_java_check(
		const char *		mpszName,
		...);
  int
	web_link(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

	
  int
	web_global_verification(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
  int
	web_reg_find(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
				
  int
	web_reg_save_param(
		const char *		mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 

  int
	web_convert_param(
		const char * 		mpszParamName, 
										 
		...);							 
										 
										 


										 

										 
  int
	web_remove_auto_filter(
		const char *		mpszArg,
		...
	);									 
										 
				
  int
	web_remove_auto_header(
		const char *		mpszHeaderName,
		...);							 
										 



  int
	web_remove_cookie(
		const char *		mpszCookie);

  int
	web_save_header(
		const char *		mpszType,	 
		const char *		mpszName);	 
  int
	web_set_certificate(
		const char *		mpszIndex);
  int
	web_set_certificate_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_set_connections_limit(
		const char *		mpszLimit);
  int
	web_set_max_html_param_len(
		const char *		mpszLen);
  int
	web_set_max_retries(
		const char *		mpszMaxRetries);
  int
	web_set_proxy(
		const char *		mpszProxyHost);
  int
	web_set_pac(
		const char *		mpszPacUrl);
  int
	web_set_proxy_bypass(
		const char *		mpszBypass);
  int
	web_set_secure_proxy(
		const char *		mpszProxyHost);
  int
	web_set_sockets_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue
	);
  int
	web_set_option(
		const char *		mpszOptionID,
		const char *		mpszOptionValue,
		...								 
	);
  int
	web_set_timeout(
		const char *		mpszWhat,
		const char *		mpszTimeout);
  int
	web_set_user(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);

  int
	web_sjis_to_euc_param(
		const char *		mpszParamName,
										 
		const char *		mpszParamValSjis);
										 

  int
	web_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	spdy_submit_data(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_submit_form(
		const char *		mpszStepName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										  
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
  int
	web_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	spdy_url(
		const char *		mpszUrlName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_set_proxy_bypass_local(
		const char * mpszNoLocal
		);

  int 
	web_cache_cleanup(void);

  int
	web_create_html_query(
		const char* mpszStartQuery,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int 
	web_create_radio_button_param(
		const char *NameFiled,
		const char *NameAndVal,
		const char *ParamName
		);

  int
	web_convert_from_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 
										
  int
	web_convert_to_formatted(
		const char * mpszArg1,
		...);							 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_ex(
		const char * mpszParamName,
		...);							 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_xpath(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_json(
		const char * mpszParamName,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_regexp(
		 const char * mpszParamName,
		 ...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_reg_save_param_attrib(
		const char * mpszParamName,
		...);
										 
										 
										 
										 
										 
										 
										 		
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_run(
		const char * mpszCode,
		...);							
										 
										 
										 
										 
										 
										 
										 
										 
										 

  int
	web_js_reset(void);

  int
	web_convert_date_param(
		const char * 		mpszParamName,
		...);










# 789 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


# 802 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"



























# 840 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"

 
 
 


  int
	FormSubmit(
		const char *		mpszFormName,
		...);
  int
	InitWebVuser(void);
  int
	SetUser(
		const char *		mpszUserName,
		const char *		mpszPwd,
		const char *		mpszHost);
  int
	TerminateWebVuser(void);
  int
	URL(
		const char *		mpszUrlName);
























# 908 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/as_web.h"


  int
	web_rest(
		const char *		mpszReqestName,
		...);							 
										 
										 
										 
										 

  int
web_stream_open(
	const char *		mpszArg1,
	...
);
  int
	web_stream_wait(
		const char *		mpszArg1,
		...
	);

  int
	web_stream_close(
		const char *		mpszArg1,
		...
	);

  int
web_stream_play(
	const char *		mpszArg1,
	...
	);

  int
web_stream_pause(
	const char *		mpszArg1,
	...
	);

  int
web_stream_seek(
	const char *		mpszArg1,
	...
	);

  int
web_stream_get_param_int(
	const char*			mpszStreamID,
	const int			miStateType
	);

  double
web_stream_get_param_double(
	const char*			mpszStreamID,
	const int			miStateType
	);

  int
web_stream_get_param_string(
	const char*			mpszStreamID,
	const int			miStateType,
	const char*			mpszParameterName
	);

  int
web_stream_set_param_int(
	const char*			mpszStreamID,
	const int			miStateType,
	const int			miStateValue
	);

  int
web_stream_set_param_double(
	const char*			mpszStreamID,
	const int			miStateType,
	const double		mdfStateValue
	);

  int
web_stream_set_custom_mpd(
	const char*			mpszStreamID,
	const char*			aMpdBuf
	);

 
 
 






# 9 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/web_api.h" 2

















 







 















  int
	web_reg_add_cookie(
		const char *		mpszCookie,
		...);							 
										 

  int
	web_report_data_point(
		const char *		mpszEventType,
		const char *		mpszEventName,
		const char *		mpszDataPointName,
		const char *		mpszLAST);	 
										 
										 
										 

  int
	web_text_link(
		const char *		mpszStepName,
		...);

  int
	web_element(
		const char *		mpszStepName,
		...);

  int
	web_image_link(
		const char *		mpszStepName,
		...);

  int
	web_static_image(
		const char *		mpszStepName,
		...);

  int
	web_image_submit(
		const char *		mpszStepName,
		...);

  int
	web_button(
		const char *		mpszStepName,
		...);

  int
	web_edit_field(
		const char *		mpszStepName,
		...);

  int
	web_radio_group(
		const char *		mpszStepName,
		...);

  int
	web_check_box(
		const char *		mpszStepName,
		...);

  int
	web_list(
		const char *		mpszStepName,
		...);

  int
	web_text_area(
		const char *		mpszStepName,
		...);

  int
	web_map_area(
		const char *		mpszStepName,
		...);

  int
	web_eval_java_script(
		const char *		mpszStepName,
		...);

  int
	web_reg_dialog(
		const char *		mpszArg1,
		...);

  int
	web_reg_cross_step_download(
		const char *		mpszArg1,
		...);

  int
	web_browser(
		const char *		mpszStepName,
		...);

  int
	web_control(
		const char *		mpszStepName,
		...);

  int
	web_set_rts_key(
		const char *		mpszArg1,
		...);

  int
	web_save_param_length(
		const char * 		mpszParamName,
		...);

  int
	web_save_timestamp_param(
		const char * 		mpszParamName,
		...);

  int
	web_load_cache(
		const char *		mpszStepName,
		...);							 
										 

  int
	web_dump_cache(
		const char *		mpszStepName,
		...);							 
										 
										 

  int
	web_reg_find_in_log(
		const char *		mpszArg1,
		...);							 
										 
										 

  int
	web_get_sockets_info(
		const char *		mpszArg1,
		...);							 
										 
										 
										 
										 

  int
	web_add_cookie_ex(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

  int
	web_hook_java_script(
		const char *		mpszArg1,
		...);							 
										 
										 
										 

 
 
 
 
 
 
 
 
 
 
 
 
  int
	web_reg_async_attributes(
		const char *		mpszArg,
		...
	);

 
 
 
 
 
 
  int
	web_sync(
		 const char *		mpszArg1,
		 ...
	);

 
 
 
 
  int
	web_stop_async(
		const char *		mpszArg1,
		...
	);

 
 
 
 
 

 
 
 

typedef enum WEB_ASYNC_CB_RC_ENUM_T
{
	WEB_ASYNC_CB_RC_OK,				 

	WEB_ASYNC_CB_RC_ABORT_ASYNC_NOT_ERROR,
	WEB_ASYNC_CB_RC_ABORT_ASYNC_ERROR,
										 
										 
										 
										 
	WEB_ASYNC_CB_RC_ENUM_COUNT
} WEB_ASYNC_CB_RC_ENUM;

 
 
 

typedef enum WEB_CONVERS_CB_CALL_REASON_ENUM_T
{
	WEB_CONVERS_CB_CALL_REASON_BUFFER_RECEIVED,
	WEB_CONVERS_CB_CALL_REASON_END_OF_TASK,

	WEB_CONVERS_CB_CALL_REASON_ENUM_COUNT
} WEB_CONVERS_CB_CALL_REASON_ENUM;

 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 

typedef
int														 
	(*RequestCB_t)();

typedef
int														 
	(*ResponseBodyBufferCB_t)(
		  const char *		aLastBufferStr,
		  int				aLastBufferLen,
		  const char *		aAccumulatedStr,
		  int				aAccumulatedLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseCB_t)(
		  const char *		aResponseHeadersStr,
		  int				aResponseHeadersLen,
		  const char *		aResponseBodyStr,
		  int				aResponseBodyLen,
		  int				aHttpStatusCode);

typedef
int														 
	(*ResponseHeadersCB_t)(
		  int				aHttpStatusCode,
		  const char *		aAccumulatedHeadersStr,
		  int				aAccumulatedHeadersLen);



 
 
 

typedef enum WEB_CONVERS_UTIL_RC_ENUM_T
{
	WEB_CONVERS_UTIL_RC_OK,
	WEB_CONVERS_UTIL_RC_CONVERS_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_TASK_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_NOT_FOUND,
	WEB_CONVERS_UTIL_RC_INFO_UNAVIALABLE,
	WEB_CONVERS_UTIL_RC_INVALID_ARGUMENT,

	WEB_CONVERS_UTIL_RC_ENUM_COUNT
} WEB_CONVERS_UTIL_RC_ENUM;

 
 
 

  int					 
	web_util_set_request_url(
		  const char *		aUrlStr);

  int					 
	web_util_set_request_body(
		  const char *		aRequestBodyStr);

  int					 
	web_util_set_formatted_request_body(
		  const char *		aRequestBodyStr);

  int					 
web_util_set_request_header(
	  const char *		aRequestHeaderNameStr,
	  const char *		aRequestHeaderValueStr);

 
 
 
 
 

 
 
 
 
 

 
 
 
 
 
 
 
 

 
 
  int
web_websocket_connect(
		 const char *	mpszArg1,
		 ...
		 );


 
 
 
 
 																						
  int
web_websocket_send(
	   const char *		mpszArg1,
		...
	   );

 
 
 
 
 
 
  int
web_websocket_close(
		const char *	mpszArg1,
		...
		);

 
typedef
void														
(*OnOpen_t)(
			  const char* connectionID,  
			  const char * responseHeader,  
			  int length  
);

typedef
void														
(*OnMessage_t)(
	  const char* connectionID,  
	  int isbinary,  
	  const char * data,  
	  int length  
	);

typedef
void														
(*OnError_t)(
	  const char* connectionID,  
	  const char * message,  
	  int length  
	);

typedef
void														
(*OnClose_t)(
	  const char* connectionID,  
	  int isClosedByClient,  
	  int code,  
	  const char* reason,  
	  int length  
	 );
 
 
 
 
 





# 4 "globals.h" 2

# 1 "C:\\Program Files (x86)\\Micro Focus\\LoadRunner\\include/lrw_custom_body.h" 1
 





# 5 "globals.h" 2


 
 
# 3 "c:\\vugentutorial\\vugenscripts\\recordingscriptsinvugen\\\\combined_RecordingScriptsInVugen.c" 2

# 1 "vuser_init.c" 1
vuser_init()
{
	return 0;
}
# 4 "c:\\vugentutorial\\vugenscripts\\recordingscriptsinvugen\\\\combined_RecordingScriptsInVugen.c" 2

# 1 "Action.c" 1
Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("index.htm", 
		"URL=http://localhost:1080/WebTours/index.htm", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://www.google-analytics.com/analytics.js", "Referer=", "ENDITEM", 
		"Url=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=101", "Referer=", "ENDITEM", 
		"LAST");

	web_add_cookie("SEARCH_SAMESITE=CgQIh5QB; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:KVI0EvnHfUPrWDYz1PKeAQMv_ymNznqGns9iArYNJHvRQ3w-yZph3dGnQc4Y6uBIj1KnBNwxvYKEpPt5KIGgwPMtT0pRHA:n-Wx11XcnyqfWBuO; DOMAIN=accounts.google.com");

	web_add_cookie("AEC=AVQQ_LB55EQk2_uGRSoTpW8oos1RvK8NRs_PGLIo-cY9YhVuRR0tGSFS4Cg; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2022-04-10-23; DOMAIN=accounts.google.com");

	web_add_cookie("NID=511=AhCg5F0itQW_aOraaivnje7BxLsTPsC-YA2lvVCRxnMeBXfv8crqBUPz_ufIvJk2OWBzvZMwnZLO7hEjixnKHAw896YxOYvErWp-cWMwVDQ0STvneE1292NXtFTY8HItinEd_tZQmkQIJPhIrOPcKoyAkz-Y-JyiFYmVlwJWackHnmUVzSmJ3ENUSE5wx-PMIdBchXCBLi-AWzEbndK4SOE; DOMAIN=accounts.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"Body= ", 
		"LAST");

	web_url("crx", 
		"URL=https://clients2.google.com/service/update2/crx?os=win&arch=x64&os_arch=x86_64&nacl_arch=x86-64&prod=chromecrx&prodchannel=&prodversion=101.0.4951.54&lang=en-US&acceptformat=crx3&x=id%3Diikflkcanblccfahdhdonehdalibjnif%26v%3D0.0.0.0%26installedby%3Dexternal%26uc%26brand%3DCHBF%26ping%3Dr%253D111%2526e%253D1", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAxLjAuNDk1MS41NBIXCU35IjnBRbgwEgUN541ADhIFDc5BTHoYrKnKAQ==?alt=proto", "Referer=", "ENDITEM", 
		"LAST");

	lr_think_time(18);

	web_custom_request("json", 
		"URL=https://update.googleapis.com/service/update2/json?cup2key=11:rf4el82KjBWuHkNLXPW4FqMI1OgP3x2LYYTayKARCTI&cup2hreq=d7a784abee2dec3f171a894bdd52cff172510005c994d8ac57d084312e15c852", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"ihnlcenocehgdaegdmhbidjhnhdchfmm\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{ef3b5a35-37b1-46c8-93f4-5eda36d140c0}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"0.0.0.0\"},{\"appid\":\"oimompecagnajdejgnnjijobebaeigek\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"ping\":{\"ping_freshness\":\"{f5e00476-b4ff-4fab-b59c-94093a7298dc}\","
		"\"rd\":5578},\"updatecheck\":{},\"version\":\"4.10.2449.0\"},{\"appid\":\"giekcmmlnklenlaomppkphknjmnnpneh\",\"brand\":\"CHBF\",\"cohort\":\"1:j5l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.3eb16d6c28b502ac4cfee8f4a148df05f4d93229fa36a71db8b08d06329ff18a\"}]},\"ping\":{\"ping_freshness\":\"{3a2db157-8c37-44ed-8b82-b152f00ccc1f}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"7\"},{\"appid\":\"hnimpnehoodheedghdeeijklkeaacbdc\",\""
		"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6f6bc93dcd62dc251850d2ff458fda96083ceb7fbe8eeb11248b8485ef2aea23\"}]},\"ping\":{\"ping_freshness\":\"{43515e79-505c-4041-8da7-bbcf480fca49}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"0.57.44.2492\"},{\"appid\":\"ehgidpndbllacpjalkiimkbadgjfnnmc\",\"brand\":\"CHBF\",\"cohort\":\"1:ofl:\",\"cohorthint\":\"stable64\",\"cohortname\":\"stable64\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.a8a79d350c2a5e3bc36226633a8e0bed0dfab184e77f38fc8f0820ebacf8eafc\"}]},\"ping\":{\"ping_freshness\":\"{be0aa868-1641-4cad-91dc-12318b6a9441}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"2018.8.8.0\"},{\"appid\":\"laoigpblnllgcgjnjnllmfolckpjlhki\",\"brand\":\"CHBF\",\"cohort\":\"1:10zr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.db60fc5d4ab81e28fe58d82f3ad26622c4ca4cade28e2b636068ac91ca62224d\"}]},\"ping\":{\"ping_freshness\":\""
		"{db29fdee-0420-4552-8891-ca213e7f786a}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"1.0.7.1642025427\"},{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"cohortname\":\"Stable\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.9a4393fa2f5a5a43e21ab7365ea12c87ae7be963d6fbcf49abd499ebd7d50b65\"}]},\"ping\":{\"ping_freshness\":\"{5112a4fb-616c-4e8e-ae21-bb88f65e4751}\",\"rd\":5578},\"tag\":\"canary_eset_b\",\"updatecheck\":{},\"version\":\"96.276.200\"}"
		",{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"CHBF\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.d297336324a1b2cb7edc46c0b5026cdb32870ef627b15f820c3c6f59325cffaf\"}]},\"ping\":{\"ping_freshness\":\"{a4383c12-9606-4b40-9b80-8f206f1c7527}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"7269\"},{\"appid\":\"gcmjkmgdlgnkkcocmoeiminaijmmjnii\",\"brand\":\"CHBF\",\"cohort\":\"1:bm1:\",\"cohorthint\":\""
		"M54AndUp\",\"cohortname\":\"M54AndUp\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.93823a4e71e764b932ee22dfcf84c24429867a440c5e480e55be527ac30de1ae\"}]},\"ping\":{\"ping_freshness\":\"{d414c9a6-2a23-4be5-842a-a705c0de5e33}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"9.34.0\"},{\"appid\":\"llkgjffcdpffmhiakmfcdcblohccpfmo\",\"brand\":\"CHBF\",\"cohort\":\"1::\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.ab8d70a60ce0fba1355fad4edab88fd4d1bccc566b230998180183d1d776992b\"}"
		"]},\"ping\":{\"ping_freshness\":\"{8a3ce186-88f8-44c0-9335-ef4d0509540f}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"1.0.0.13\"},{\"appid\":\"lmelglejhemejginpboagddgdfbepgmp\",\"brand\":\"CHBF\",\"cohort\":\"1:lwl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.6816fa1a2f4c49d0f16dd672e1fd8efbb5416021b5bec1807fb7ed7f84e147fb\"}]},\"ping\":{\"ping_freshness\":\"{2f8ed47d-c094-4607-a6f0-eff1017fe0fc}\",\"rd\":5578},\"updatecheck\":{},\""
		"version\":\"325\"},{\"appid\":\"jflookgnkcckhobaglndicnbbgbonegd\",\"brand\":\"CHBF\",\"cohort\":\"1:s7x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.79fc57314c57740996cb68569a0499780babbdb627534bcefff42c16379362f7\"}]},\"ping\":{\"ping_freshness\":\"{7149464c-906e-476c-8f3b-e1df6f3f41af}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"2797\"},{\"appid\":\"efniojlnjndmcbiieegkicadnoecjjef\",\"brand\":\"CHBF\",\"cohort\":\"1:zkl:\",\""
		"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.060183f32ad05868493a9572be990d1cf0403e6315e451973e5e7dc808192385\"}]},\"ping\":{\"ping_freshness\":\"{6feb47c3-c53c-4d9c-9d56-edc9d5cee691}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"229\"},{\"appid\":\"dhlpobdgcjafebgbbhjdnapejmpkgiie\",\"brand\":\"CHBF\",\"cohort\":\"1:z9x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\""
		"1.8b9dc2cd32d1b5f147a17377cef75ec160103d6c02faf4947978fb6d9a25983b\"}]},\"ping\":{\"ping_freshness\":\"{49d52c0f-1175-4c99-84d3-60f8617fe24a}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"20211020.1\"},{\"accept_locale\":\"ENUS500000\",\"appid\":\"obedbbhbpmojnkanicioggnmelmoomoc\",\"brand\":\"CHBF\",\"cohort\":\"1:s6f:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.11fbb536e4e9e0cd7474ece3f0b04ddeb847620e4c9d3f32f66ab2ee7b260d75\"}]},\""
		"ping\":{\"ping_freshness\":\"{4e632a07-426f-4286-9cd9-b2efe2125159}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"20220324.438805619\"},{\"appid\":\"ggkkehgbnfjpeggfpleeakpidbkibbmn\",\"brand\":\"CHBF\",\"cohort\":\"1:ut9:\",\"cohorthint\":\"M80AndAbove\",\"cohortname\":\"M80ToM99\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.714ea234b405e2326659d92eef98a34bd7343d2aba26bf425b66521c9846fbcf\"}]},\"ping\":{\"ping_freshness\":\"{6955d1e2-b67a-4841-8b8e-a1bcb4a7f003}\",\"rd\":5578},\""
		"updatecheck\":{},\"version\":\"2022.3.28.1141\"},{\"appid\":\"pdafiollngonhoadbmdoemagnfpdphbe\",\"brand\":\"CHBF\",\"cohort\":\"1:vz3:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.54b93e249d02a0f9061e8f70866d4668a0260db9ae43483810ab78f97f3eaa2a\"}]},\"ping\":{\"ping_freshness\":\"{2e64ac80-e861-4935-8a88-d0bbbb8ebd95}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"2021.8.17.1300\"},{\"appid\":\"ojhpjlocmbogdgmfpkhlaaeamibhnphh\",\""
		"brand\":\"CHBF\",\"cohort\":\"1:w0x:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.478aa915e78878e332a0b4bb4d2a6fb67ff1c7f7b62fe906f47095ba5ae112d0\"}]},\"ping\":{\"ping_freshness\":\"{e9baede3-6127-444a-be0d-c94c52f0a0bd}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"1\"},{\"appid\":\"kiabhabjdbkjdpjbpigfodbdjmbglcoo\",\"brand\":\"CHBF\",\"cohort\":\"1:v3l:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\""
		":{\"package\":[{\"fp\":\"1.f9d7ee52f45b4cb88d78dcaaa7ffc9f86d2cfcaf0c53d2ee8993ef18ea6bb4b9\"}]},\"ping\":{\"ping_freshness\":\"{5ad1426e-b4d8-4b8c-9143-389c1577dfd9}\",\"rd\":5504},\"updatecheck\":{},\"version\":\"2022.1.21.2\"},{\"appid\":\"khaoiebndkojlmppeemjhbpbandiljpe\",\"brand\":\"CHBF\",\"cohort\":\"1:cux:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.2c15227a2823f31c7f3728e85a39bd87040d30562f3fa8d1c6faeb20f93e3cc8\"}]},\"ping\":"
		"{\"ping_freshness\":\"{51e71cf7-217d-4fb4-98d4-1fc7b765c767}\",\"rd\":5578},\"tag\":\"default\",\"updatecheck\":{},\"version\":\"50\"},{\"appid\":\"imefjhfbkmcmebodilednhmaccmincoa\",\"brand\":\"CHBF\",\"cohort\":\"1:zor:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c5d1f68a61e1a2ea56b08431b1e9de8bca675e76bed24772447af68d35436d50\"}]},\"ping\":{\"ping_freshness\":\"{ff299ad7-3d64-42d5-ba27-0513f9ec8579}\",\"rd\":5578},\"tag\":\"default\""
		",\"updatecheck\":{},\"version\":\"27.8\"},{\"appid\":\"jamhcnnkihinmdlkakkaopbjbbcngflc\",\"brand\":\"CHBF\",\"cohort\":\"1:wvr:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.a853693ac4c2084c91704c5bb658985481f6dec7896755dcc29519baf0b592e7\"}]},\"ping\":{\"ping_freshness\":\"{e59c6d4b-4eeb-4623-abf8-7c87bfe8f2f6}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"102.0.4996.0\"},{\"appid\":\"eeigpngbgcognadeebkilcpcaedhellh\",\"brand\":\""
		"CHBF\",\"cohort\":\"1:w59:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c64c9c1008f3ba5f6e18b3ca524bc98dcd8acfae0a2720a8f1f3ef0f8d643d05\"}]},\"ping\":{\"ping_freshness\":\"{10bcca06-258c-462d-a5f7-4d3062cd2985}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"2020.11.2.164946\"},{\"_internal_experimental_sets\":\"false\",\"_v2_format_plz\":\"true\",\"appid\":\"gonpemdgkjcecdgbnaabipppbmgfggbe\",\"brand\":\"CHBF\",\"cohort\":\"1:13c9:\","
		"\"cohorthint\":\"V2 General release\",\"cohortname\":\"General release\",\"enabled\":true,\"packages\":{\"package\":[{\"fp\":\"1.c51d23bc0653142853b0d9dc8ba00f504aaae8a2a5b290e539b8790d88c0dcbe\"}]},\"ping\":{\"ping_freshness\":\"{06be2a41-e7b6-4493-b9b0-bdf3e2d86aaa}\",\"rd\":5578},\"updatecheck\":{},\"version\":\"2022.2.15.1\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\""
		"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.613\"},\"prodversion\":\"101.0.4951.54\",\"protocol\":\"3.1\",\"requestid\":\"{c26bf5c7-785b-45ee-a89a-a46f719f22da}\",\"sessionid\":\"{283c5c21-0d10-4a8c-92c1-2162de839eb8}\",\"updater\":{\"autoupdatecheckenabled\":true,\"ismachine\":true,\"lastchecked\":0,\"laststarted\":0,\"name\":\"Omaha\",\"updatepolicy\":-1,\"version\":\"1.3.36.132\"},\""
		"updaterversion\":\"101.0.4951.54\"}}", 
		"LAST");

	web_url("plugins_win.json", 
		"URL=https://www.gstatic.com/chrome/config/plugins_3/plugins_win.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(24);

	web_custom_request("json_2", 
		"URL=https://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"gkmgaooipdjhmangpemjhigmamcehddo\",\"brand\":\"CHBF\",\"cohort\":\"1:qe3:\",\"cohorthint\":\"Stable\",\"cohortname\":\"Canary\",\"enabled\":true,\"event\":[{\"download_time_ms\":24287,\"downloaded\":6867487,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"101.283.200\",\"previousversion\":\"96.276.200\",\"total\":6867487,\"url\":\"http://edgedl.me.gvt1.com/edgedl/"
		"release2/chrome_component/m2lgttuidiluvhglzomyazebhy_101.283.200/gkmgaooipdjhmangpemjhigmamcehddo_101.283.200_win64_pcdutiti4z5nzglso5e2x2koeu.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.e576811650ec2102a3fb16bdb8ff791659558df8f10a6f45bee335c326de72ae\",\"nextversion\":\"101.283.200\",\"previousfp\":\"1.9a4393fa2f5a5a43e21ab7365ea12c87ae7be963d6fbcf49abd499ebd7d50b65\",\"previousversion\":\"96.276.200\"}],\"packages\":{\"package\":[{\"fp\":\""
		"1.e576811650ec2102a3fb16bdb8ff791659558df8f10a6f45bee335c326de72ae\"}]},\"tag\":\"canary_eset_b\",\"version\":\"101.283.200\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.613\"},\"prodversion\":\"101.0.4951.54\",\""
		"protocol\":\"3.1\",\"requestid\":\"{67f99662-a3e7-420d-86c5-3ba5cc10f058}\",\"sessionid\":\"{283c5c21-0d10-4a8c-92c1-2162de839eb8}\",\"updaterversion\":\"101.0.4951.54\"}}", 
		"EXTRARES", 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINMTAxLjAuNDk1MS41NBopCAUQARobCg0IBRAGGAEiAzAwMTABEKndDRoCGAjO8ZIUIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARDHyAoaAhgIIXc37iIEIAEgAigBGikIBxABGhsKDQgHEAYYASIDMDAxMAEQyYILGgIYCKh7_d0iBCABIAIoARonCAEQARoZCg0IARAGGAEiAzAwMTADEBQaAhgIseeQLSIEIAEgAigDGigIARAIGhoKDQgBEAgYASIDMDAxMAQQricaAhgIdlLZHyIEIAEgAigEGigIDxABGhoKDQgPEAYYASIDMDAxMAEQrHEaAhgI12tGNCIEIAEgAigBGicIChAIGhkKDQgKEAgYASIDMDAxMAEQBxoCGAiVNYrTIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAgGgIYCCdzheIiBCABIAIoARooCAgQARoaCg"
		"0ICBAGGAEiAzAwMTABEJMPGgIYCJl8_-EiBCABIAIoARopCA0QARobCg0IDRAGGAEiAzAwMTABEOS2ARoCGAhXRZofIgQgASACKAEaKQgDEAEaGwoNCAMQBhgBIgMwMDEwARCQjgoaAhgIfezh6CIEIAEgAigBGikIDhABGhsKDQgOEAYYASIDMDAxMAEQ76wGGgIYCCmgH9MiBCABIAIoARooCBAQARoaCg0IEBAGGAEiAzAwMTABEIcRGgIYCKP-IPIiBCABIAIoASICCAE=&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", "ENDITEM", 
		"LAST");

	web_url("ping", 
		"URL=https://clients1.google.com/tools/pso/ping?as=chrome&brand=CHBF&pid=&hl=en&rep=2&rlz=C1:1C1CHBF_enCA866CA866,C2:1C2CHBF_enCA866,C7:1C7CHBF_enCA866", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"LAST");

	lr_think_time(14);

	web_submit_data("login.pl", 
		"Action=http://localhost:1080/cgi-bin/login.pl", 
		"Method=POST", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?in=home", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		"ITEMDATA", 
		"Name=userSession", "Value=133834.94272985ziitVDtpizzzzzzHtVDAtpiAQc", "ENDITEM", 
		"Name=username", "Value=jojo", "ENDITEM", 
		"Name=password", "Value=bean", "ENDITEM", 
		"Name=login.x", "Value=47", "ENDITEM", 
		"Name=login.y", "Value=1", "ENDITEM", 
		"Name=JSFormSubmit", "Value=off", "ENDITEM", 
		"LAST");

	web_custom_request("json_3", 
		"URL=http://update.googleapis.com/service/update2/json", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"request\":{\"@os\":\"win\",\"@updater\":\"chrome\",\"acceptformat\":\"crx3\",\"app\":[{\"appid\":\"hfnkpimlhhgieaddgfemjhofmfblmnib\",\"brand\":\"CHBF\",\"cohort\":\"1:jcl:\",\"cohorthint\":\"Auto\",\"cohortname\":\"Auto\",\"enabled\":true,\"event\":[{\"download_time_ms\":4013,\"downloaded\":24996,\"downloader\":\"bits\",\"eventresult\":1,\"eventtype\":14,\"nextversion\":\"7328\",\"previousversion\":\"7269\",\"total\":24996,\"url\":\"http://edgedl.me.gvt1.com/edgedl/release2/"
		"chrome_component/iphycxq5qovznqjbb6b6g72xdm_7328/hfnkpimlhhgieaddgfemjhofmfblmnib_7328_all_plukgn4newow6lkmpcc5nbrgzm.crx3\"},{\"eventresult\":1,\"eventtype\":3,\"nextfp\":\"1.530fffe10c07bad64e71aa89db197e13bfd6a0174e010fcf8e8ed90afca97327\",\"nextversion\":\"7328\",\"previousfp\":\"1.d297336324a1b2cb7edc46c0b5026cdb32870ef627b15f820c3c6f59325cffaf\",\"previousversion\":\"7269\"}],\"packages\":{\"package\":[{\"fp\":\"1.530fffe10c07bad64e71aa89db197e13bfd6a0174e010fcf8e8ed90afca97327\"}]},\""
		"version\":\"7328\"}],\"arch\":\"x64\",\"dedup\":\"cr\",\"domainjoined\":false,\"hw\":{\"avx\":true,\"physmemory\":8,\"sse\":true,\"sse2\":true,\"sse3\":true,\"sse41\":true,\"sse42\":true,\"ssse3\":true},\"ismachine\":true,\"lang\":\"en-US\",\"nacl_arch\":\"x86-64\",\"os\":{\"arch\":\"x86_64\",\"platform\":\"Windows\",\"version\":\"10.0.22000.613\"},\"prodversion\":\"101.0.4951.54\",\"protocol\":\"3.1\",\"requestid\":\"{cf70ef20-76b5-4896-aa7a-c51987bbcbf1}\",\"sessionid\":\""
		"{283c5c21-0d10-4a8c-92c1-2162de839eb8}\",\"updaterversion\":\"101.0.4951.54\"}}", 
		"LAST");

	lr_think_time(11);

	web_url("welcome.pl", 
		"URL=http://localhost:1080/cgi-bin/welcome.pl?page=search", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://localhost:1080/cgi-bin/nav.pl?page=menu&in=home", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"EXTRARES", 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvMTAxLjAuNDk1MS41NBIsCUFCU6JtyxUKEgUNVGIprRIFDXudxKUSBQ0fOzmFEgUN2oWZYRIFDamOSr0YrKnKAQ==?alt=proto", "Referer=", "ENDITEM", 
		"LAST");

	lr_think_time(41);

	web_submit_form("reservations.pl", 
		"Snapshot=t11.inf", 
		"ITEMDATA", 
		"Name=depart", "Value=Denver", "ENDITEM", 
		"Name=departDate", "Value=05/11/2022", "ENDITEM", 
		"Name=arrive", "Value=Paris", "ENDITEM", 
		"Name=returnDate", "Value=05/12/2022", "ENDITEM", 
		"Name=numPassengers", "Value=1", "ENDITEM", 
		"Name=roundtrip", "Value=<OFF>", "ENDITEM", 
		"Name=seatPref", "Value=None", "ENDITEM", 
		"Name=seatType", "Value=Coach", "ENDITEM", 
		"LAST");

	lr_think_time(22);

	web_submit_form("reservations.pl_2", 
		"Snapshot=t12.inf", 
		"ITEMDATA", 
		"Name=outboundFlight", "Value=041;312;05/11/2022", "ENDITEM", 
		"Name=reserveFlights.x", "Value=46", "ENDITEM", 
		"Name=reserveFlights.y", "Value=3", "ENDITEM", 
		"LAST");

	lr_think_time(756);

	web_submit_form("reservations.pl_3", 
		"Snapshot=t13.inf", 
		"ITEMDATA", 
		"Name=firstName", "Value=Jojo", "ENDITEM", 
		"Name=lastName", "Value=Bean", "ENDITEM", 
		"Name=address1", "Value=114 Westwood Drive", "ENDITEM", 
		"Name=address2", "Value=N2N2K9", "ENDITEM", 
		"Name=pass1", "Value=Jojo Bean", "ENDITEM", 
		"Name=creditCard", "Value=123456789", "ENDITEM", 
		"Name=expDate", "Value=05/24", "ENDITEM", 
		"Name=saveCC", "Value=<OFF>", "ENDITEM", 
		"LAST");

	lr_think_time(12);

	web_image("SignOff Button", 
		"Alt=SignOff Button", 
		"Snapshot=t14.inf", 
		"LAST");

	return 0;
}
# 5 "c:\\vugentutorial\\vugenscripts\\recordingscriptsinvugen\\\\combined_RecordingScriptsInVugen.c" 2

# 1 "vuser_end.c" 1
vuser_end()
{
	return 0;
}
# 6 "c:\\vugentutorial\\vugenscripts\\recordingscriptsinvugen\\\\combined_RecordingScriptsInVugen.c" 2

