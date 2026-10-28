// rea decompile_all
// name: IngameDebugConsole.DebugLogConsole$$ParseArgument
// address: 0x7333438
// body: available
// range: 0x7333438-0x7333617 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7333614 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint IngameDebugConsole_DebugLogConsole__ParseArgument
               (undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long local_38;
  
  if ((DAT_09520629 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09171268);
    FUN_03f5c2a4(&DAT_09183668);
    FUN_03f5c2a4(&DAT_091a0ef0);
    DAT_09520629 = 1;
  }
  local_38 = 0;
  if (*(int *)(DAT_09183668 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar3 = *(long *)(*(long *)(DAT_09183668 + 0xb8) + 0x10);
  if (lVar3 != 0) {
    uVar4 = FUN_06fd9fbc(lVar3,param_2,&local_38,DAT_091a0ef0);
    uVar1 = DAT_09171268;
    if ((uVar4 & 1) == 0) {
      if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      plVar5 = (long *)System_Type__GetTypeFromHandle(uVar1,0);
      if (plVar5 != (long *)0x0) {
        uVar4 = (**(code **)(*plVar5 + 0x2b8))(plVar5,param_2,*(undefined8 *)(*plVar5 + 0x2c0));
        if ((uVar4 & 1) == 0) {
          if (param_2 == (long *)0x0) goto LAB_07333614;
          uVar4 = (**(code **)(*param_2 + 0x5d8))(param_2,*(undefined8 *)(*param_2 + 0x5e0));
          if ((uVar4 & 1) == 0) {
            if (*(int *)(DAT_09183668 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = IngameDebugConsole_DebugLogConsole__IsSupportedArrayType(param_2);
            if ((uVar4 & 1) == 0) {
              *param_3 = 0;
              thunk_FUN_03f5d7b8(param_3,0);
              uVar2 = 0;
            }
            else {
              if (*(int *)(DAT_09183668 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar2 = IngameDebugConsole_DebugLogConsole__ParseArray(param_1,param_2,param_3);
            }
          }
          else {
            if (*(int *)(DAT_09183668 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar2 = IngameDebugConsole_DebugLogConsole__ParseEnum(param_1,param_2,param_3);
          }
        }
        else {
          if (*(int *)(DAT_09183668 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          IngameDebugConsole_DebugLogConsole__ParseComponent(param_1,param_2,param_3);
          uVar2 = 1;
        }
LAB_073335fc:
        return uVar2 & 1;
      }
    }
    else if (local_38 != 0) {
      uVar2 = (**(code **)(local_38 + 0x18))
                        (*(undefined8 *)(local_38 + 0x40),param_1,param_3,
                         *(undefined8 *)(local_38 + 0x28));
      goto LAB_073335fc;
    }
  }
LAB_07333614:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

