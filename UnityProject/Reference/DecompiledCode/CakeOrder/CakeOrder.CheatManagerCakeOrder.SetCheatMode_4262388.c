// rea decompile_all
// name: CakeOrder.CheatManagerCakeOrder$$SetCheatMode
// address: 0x4262388
// body: available
// range: 0x4262388-0x42625a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4262594 to 0x42625a8 CakeOrder.CheatManagerCakeOrder$$ShowDebugConsole (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42625a4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_CheatManagerCakeOrder__SetCheatMode(int param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09516f91 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091814b0);
    FUN_03f5c2a4(&DAT_091824f0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189968);
    DAT_09516f91 = 1;
  }
  if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar2 = DAT_091814b0;
  iVar1 = *(int *)(DAT_091814b0 + 0xe4);
  *(int *)(*(long *)(DAT_091824f0 + 0xb8) + 8) = param_1;
  if (param_1 == 0) {
    if (iVar1 == 0) {
      FUN_03f5c424(lVar2);
    }
    UnityEngine_Application__SetStackTraceLogType(3,0,0);
    UnityEngine_Application__SetStackTraceLogType(2,0,0);
    UnityEngine_Application__SetStackTraceLogType(0,0,0);
    UnityEngine_Application__SetStackTraceLogType(1,0,0);
    UnityEngine_Application__SetStackTraceLogType(4,0,0);
    uVar5 = 0;
    uVar4 = 0;
  }
  else {
    if (iVar1 == 0) {
      FUN_03f5c424(lVar2);
    }
    uVar5 = 1;
    UnityEngine_Application__SetStackTraceLogType(3,1,0);
    UnityEngine_Application__SetStackTraceLogType(2,2,0);
    UnityEngine_Application__SetStackTraceLogType(0,2,0);
    UnityEngine_Application__SetStackTraceLogType(1,2,0);
    UnityEngine_Application__SetStackTraceLogType(4,2,0);
    uVar4 = 1;
  }
  if (*(int *)(DAT_09189968 + 0xe4) == 0) {
    FUN_03f5c424();
    uVar4 = uVar5;
  }
  lVar2 = DAT_091824f0;
  iVar1 = *(int *)(DAT_091824f0 + 0xe4);
  **(undefined1 **)(DAT_09189968 + 0xb8) = uVar4;
  if (iVar1 == 0) {
    FUN_03f5c424(lVar2);
  }
  uVar3 = CakeOrder_CheatManagerCakeOrder__get_IsShowDebug();
  if ((uVar3 & 1) != 0) {
    if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar6 = **(undefined8 **)(DAT_091824f0 + 0xb8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188ad0);
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar3 & 1) != 0) {
      if (*(int *)(DAT_091824f0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (**(long **)(DAT_091824f0 + 0xb8) != 0) {
        CakeOrder_CheatManagerCakeOrder__ShowDebugConsole();
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

