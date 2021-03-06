// PhilZ Touch config file

// print custom logtail (detailed logging report in raw-backup.sh...)
void ui_print_custom_logtail(const char* filename, int nb_lines);

int read_config_file(const char* config_file, const char *key, char *value, const char *value_def);
int write_config_file(const char* config_file, const char* key, const char* value);
void show_philz_settings_menu();
void refresh_recovery_settings(int unmount);
void wipe_data_menu();
extern int no_files_found;

// get partition size function (adapted from Dees_Troy - TWRP)
unsigned long long Total_Size; // Overall size of the partition
unsigned long long Used_Size; // Overall used space
unsigned long long Free_Size; // Overall free space
int Get_Size_Via_statfs(const char* Path);
int Find_Partition_Size(const char* Path);

//ors script support in recovery.c
int erase_volume(const char *volume);
void wipe_data(int confirm);
extern int no_wipe_confirm;
extern int check_for_script_file(const char* ors_boot_script);
extern int run_ors_script(const char* ors_script);

// general system functions
long long timenow_usec(void);
long long timenow_msec(void);
char* readlink_device_blk(const char* Path);
unsigned long Get_File_Size(const char* Path);
unsigned long long Get_Folder_Size(const char* Path);
int file_found(const char* filename);
int directory_found(const char* dir);
void delete_a_file(const char* filename);
void ensure_directory(const char* dir); // in nandroid.c
int is_path_ramdisk(const char* path);
int copy_a_file(const char* file_in, const char* file_out);

// custom zip path + free browse mode
int show_custom_zip_menu();
void set_custom_zip_path();

// misc nandroid settings and functions
void show_twrp_restore_menu(const char* backup_volume);
void custom_backup_menu(const char* backup_volume);
void custom_restore_menu(const char* backup_volume);
void get_twrp_backup_path(const char* backup_volume, char *backup_path);
void get_cwm_backup_path(const char* backup_volume, char *backup_path);
void misc_nandroid_menu();
void get_rom_name(char *rom_name);
void get_device_id(char *device_id); // twrp backup folder for device

// multi zip installer
void show_multi_flash_menu();

extern int check_root_and_recovery;

void verify_settings_file();
