#include <Library/UefiApplicationEntryPoint.h>
#include <Library/UefiLib.h>
#include <Library/BaseLib.h>
#include <Library/MemoryAllocationLib.h>
#include <Library/DebugLib.h>

#include <Protocol/PciRootBridgeIo.h>
#include <Protocol/LoadedImage.h>
#include <Protocol/EfiShellInterface.h>
#include <Protocol/EfiShellParameters.h>

EFI_STATUS
EFIAPI
PciMain (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
   gImageHandle = ImageHandle;
   gST = SystemTable;
   gBS = SystemTable->BootServices;

  
   return EFI_SUCCESS;
	
}
