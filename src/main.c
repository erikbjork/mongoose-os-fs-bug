#include "mgos.h"

enum mgos_app_init_result mgos_app_init(void) {
  
  FILE *fp = NULL;

  // Open file for writing or create new file if it does not already exist
  if ((fp = fopen("/xx1234", "r+b")) == NULL) {
    LOG(LL_INFO, ("File does not exist. Creating new file"));
    if ((fp = fopen("/xx1234", "w+b")) == NULL) {
      LOG(LL_ERROR, ("Could not create new key file"));
    }    
  }
  fclose(fp);

  return MGOS_APP_INIT_SUCCESS;
}
