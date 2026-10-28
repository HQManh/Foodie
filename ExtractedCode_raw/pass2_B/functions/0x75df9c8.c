// rea decompile_all
// name: System.AppContext$$TryGetSwitch
// address: 0x75df9c8
// body: available
// range: 0x75df9c8-0x75dfd3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75dfcc4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dfd28 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dfd30 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dfd34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dfd38 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75dfd3c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x075dfd2c) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint System_AppContext__TryGetSwitch(long param_1,byte *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  byte local_40 [4];
  byte local_3c [4];
  undefined8 local_38;
  char local_28 [4];
  uint local_24;
  
  if ((DAT_09521ec2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181350);
    FUN_03f5c2a4(&DAT_09181348);
    FUN_03f5c2a4(&DAT_091a0288);
    FUN_03f5c2a4(&DAT_091a0290);
    DAT_09521ec2 = 1;
  }
  local_24 = 0;
  local_38 = 0;
  local_28[0] = '\0';
  local_3c[0] = 0;
  local_40[0] = 0;
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_092238d0);
    System_ArgumentNullException___ctor(uVar3,uVar4,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091bfdd0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    uVar3 = thunk_FUN_03fc39d4(&DAT_092012f8);
    uVar3 = System_Environment__GetResourceString(uVar3,0);
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092238d0);
    System_ArgumentException___ctor(uVar4,uVar3,uVar5,0);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091bfdd0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar3);
  }
  if (*(int *)(DAT_09181348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  cVar1 = *(char *)(*(long *)(DAT_09181348 + 0xb8) + 8);
  thunk_FUN_03f6a5cc();
  if (cVar1 == '\0') {
    if (*(int *)(DAT_09181348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    System_AppContext__InitializeDefaultSwitchValues();
  }
  *param_2 = 0;
  if (*(int *)(DAT_09181348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_28[0] = '\0';
  local_38 = **(undefined8 **)(DAT_09181348 + 0xb8);
  System_Threading_Monitor__Enter(local_38,local_28,0);
  if (*(int *)(DAT_09181348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09181348 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = FUN_06fcf8e8(**(long **)(DAT_09181348 + 0xb8),param_1,&local_24,DAT_091a0288);
  if ((uVar2 & 1) == 0) {
    if (*(int *)(DAT_09181350 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = System_AppContextDefaultValues__TryGetSwitchOverride(param_1,local_40,0);
    if ((uVar2 & 1) != 0) {
      *param_2 = local_40[0];
      if (*(int *)(DAT_09181348 + 0xe4) == 0) {
        FUN_03f5c424();
      }
LAB_075dfbc0:
      if (**(long **)(DAT_09181348 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar6 = 5;
      if (*param_2 != 0) {
        uVar6 = 6;
      }
      FUN_06fcddac(**(long **)(DAT_09181348 + 0xb8),param_1,uVar6,DAT_091a0290);
      goto LAB_075dfbf0;
    }
    if (*(int *)(DAT_09181348 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (**(long **)(DAT_09181348 + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_06fcddac(**(long **)(DAT_09181348 + 0xb8),param_1,8,DAT_091a0290);
    uVar7 = 0;
  }
  else {
    if (local_24 != 8) {
      *param_2 = (byte)(local_24 >> 1) & 1;
      if ((local_24 >> 2 & 1) == 0) {
        if (*(int *)(DAT_09181350 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = System_AppContextDefaultValues__TryGetSwitchOverride(param_1,local_3c,0);
        if ((uVar2 & 1) != 0) {
          *param_2 = local_3c[0];
        }
        if (*(int *)(DAT_09181348 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        goto LAB_075dfbc0;
      }
LAB_075dfbf0:
      uVar7 = 1;
      uVar8 = 1;
      goto LAB_075dfc4c;
    }
    *param_2 = 0;
    uVar7 = 1;
  }
  uVar8 = 0;
LAB_075dfc4c:
  if (local_28[0] != '\0') {
    System_Threading_Monitor__Exit(local_38,0);
  }
  return uVar7 & uVar8;
}

