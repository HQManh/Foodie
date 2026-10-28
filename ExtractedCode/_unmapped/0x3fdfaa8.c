// rea decompile_all
// name: FUN_03fdfaa8
// address: 0x3fdfaa8
// body: available
// range: 0x3fdfaa8-0x3fdfe8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_03fdfaa8(undefined8 param_1,int *param_2)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = *param_2;
  if (iVar1 < 0x3000000) {
    if (iVar1 < 0x1000005) {
      if (iVar1 < 0x1000001) {
        if (iVar1 == -1) {
          pcVar2 = "Unexpected error";
        }
        else if (iVar1 == 0) {
          pcVar2 = "Success";
        }
        else {
          if (iVar1 != 0x1000000) goto LAB_03fdfe68;
          pcVar2 = "Out of memory";
        }
      }
      else if (iVar1 < 0x1000003) {
        if (iVar1 == 0x1000001) {
          pcVar2 = "Out of system resources";
        }
        else {
          if (iVar1 != 0x1000002) goto LAB_03fdfe68;
          pcVar2 = "Invalid address range";
        }
      }
      else if (iVar1 == 0x1000003) {
        pcVar2 = "Invalid argument";
      }
      else {
        if (iVar1 != 0x1000004) goto LAB_03fdfe68;
        pcVar2 = "Invalid buffer size";
      }
    }
    else if (iVar1 < 0x2000000) {
      if (iVar1 == 0x1000005) {
        pcVar2 = "Invalid state";
      }
      else if (iVar1 == 0x1000006) {
        pcVar2 = "Not supported";
      }
      else {
        if (iVar1 != 0x1000007) goto LAB_03fdfe68;
        pcVar2 = "Time out";
      }
    }
    else if (iVar1 < 0x2000002) {
      if (iVar1 == 0x2000000) {
        pcVar2 = "Unsupported alignment";
      }
      else {
        if (iVar1 != 0x2000001) goto LAB_03fdfe68;
        pcVar2 = "Invalid page size";
      }
    }
    else if (iVar1 == 0x2000002) {
      pcVar2 = "Invalid page count";
    }
    else {
      if (iVar1 != 0x2000003) goto LAB_03fdfe68;
      pcVar2 = "Unsupported page state";
    }
  }
  else if (iVar1 < 0x4000006) {
    if (iVar1 < 0x4000002) {
      if (iVar1 == 0x3000000) {
        pcVar2 = "Thread can not join itself";
      }
      else if (iVar1 == 0x4000000) {
        pcVar2 = "Network initialization error";
      }
      else {
        if (iVar1 != 0x4000001) goto LAB_03fdfe68;
        pcVar2 = "Address in use";
      }
    }
    else if (iVar1 < 0x4000004) {
      if (iVar1 == 0x4000002) {
        pcVar2 = "Address unreachable";
      }
      else {
        if (iVar1 != 0x4000003) goto LAB_03fdfe68;
        pcVar2 = "Address family not supported";
      }
    }
    else if (iVar1 == 0x4000004) {
      pcVar2 = "Disconnected";
    }
    else {
      if (iVar1 != 0x4000005) goto LAB_03fdfe68;
      pcVar2 = "Invalid socket type for operation";
    }
  }
  else if (iVar1 < 0x6000000) {
    if (iVar1 < 0x5000001) {
      if (iVar1 == 0x4000006) {
        pcVar2 = "Invalid socket address family for operation";
      }
      else {
        if (iVar1 != 0x5000000) goto LAB_03fdfe68;
        pcVar2 = "Invalid pathname";
      }
    }
    else if (iVar1 == 0x5000001) {
      pcVar2 = "Requested access is not allowed";
    }
    else {
      if (iVar1 != 0x5000002) goto LAB_03fdfe68;
      pcVar2 = "General IO error";
    }
  }
  else if (iVar1 < 0x7000000) {
    if (iVar1 == 0x6000000) {
      pcVar2 = "Failed to open the requested dynamic library";
    }
    else {
      if (iVar1 != 0x6000001) goto LAB_03fdfe68;
      pcVar2 = "The requested function was not found";
    }
  }
  else if (iVar1 == 0x7000000) {
    pcVar2 = 
    "The requested hostname is valid, but no address exists that is compatible with the current network configuration."
    ;
  }
  else {
    if (iVar1 != 0x7000001) goto LAB_03fdfe68;
    pcVar2 = "Temporary failure, try again.";
  }
  FUN_03fdfe8c(param_1,&DAT_01a56dbe,pcVar2);
LAB_03fdfe68:
  FUN_03fdfe8c(param_1," (0x%08x)",*param_2);
  return param_1;
}

