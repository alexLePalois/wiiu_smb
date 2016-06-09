#ifndef __SMB_FUNCTIONS_H_
#define __SMB_FUNCTIONS_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "dynamic_libs/os_functions.h"

#include "ogc/lwp.h"
#include "ogc/lwp_watchdog.h"
#include "ogc/machine/processor.h"

#include "smb.h"

void UpdateCheck();
bool DownloadUpdate();
void StartNetworkThread();
bool InitializeNetwork(bool silent);
bool ConnectShare (bool silent);
void CloseShare();

extern bool updateFound;

#ifdef __cplusplus
}
#endif

#endif /* __SMB_FUNCTIONS_H_ */
