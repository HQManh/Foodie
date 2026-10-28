// rea decompile_all
// name: Newtonsoft.Json.Utilities.ConvertUtils$$GetTypeCode
// address: 0x7688244
// body: available
// range: 0x7688244-0x768849b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7688488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768848c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7688498 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Newtonsoft_Json_Utilities_ConvertUtils__GetTypeCode(undefined8 param_1,undefined1 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  uint local_34;
  
  if ((DAT_0952255f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182b90);
    FUN_03f5c2a4(&DAT_091a0d10);
    FUN_03f5c2a4(&DAT_091725c0);
    FUN_03f5c2a4(&DAT_09189d88);
    FUN_03f5c2a4(&DAT_09180748);
    DAT_0952255f = 1;
  }
  local_34 = 0;
  if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (**(long **)(DAT_09182b90 + 0xb8) == 0) goto LAB_07688488;
  uVar1 = FUN_06fcf8e8(**(long **)(DAT_09182b90 + 0xb8),param_1,&local_34,DAT_091a0d10);
  if ((uVar1 & 1) == 0) {
    uVar1 = Newtonsoft_Json_Utilities_TypeExtensions__IsEnum(param_1,0);
    if ((uVar1 & 1) != 0) {
      *param_2 = 1;
      if (*(int *)(DAT_09535470 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar2 = System_Enum__GetUnderlyingType(param_1,0);
LAB_07688338:
      if (*(int *)(DAT_09182b90 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09182b90);
      }
      uVar1 = Newtonsoft_Json_Utilities_ConvertUtils__GetTypeCode(uVar2);
      return uVar1;
    }
    if (*(int *)(DAT_09189d88 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar1 = Newtonsoft_Json_Utilities_ReflectionUtils__IsNullableType(param_1);
    if ((uVar1 & 1) != 0) {
      uVar3 = System_Nullable__GetUnderlyingType(param_1,0);
      uVar1 = Newtonsoft_Json_Utilities_TypeExtensions__IsEnum(uVar3,0);
      uVar2 = DAT_091725c0;
      if ((uVar1 & 1) != 0) {
        if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        plVar4 = (long *)System_Type__GetTypeFromHandle(uVar2,0);
        plVar5 = (long *)FUN_03f5c394(DAT_09180748,1);
        if (*(int *)(DAT_09535470 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09535470);
        }
        lVar6 = System_Enum__GetUnderlyingType(uVar3,0);
        if (plVar5 != (long *)0x0) {
          if ((lVar6 != 0) &&
             (lVar7 = thunk_FUN_03f99350(lVar6,*(undefined8 *)(*plVar5 + 0x40)), lVar7 == 0)) {
            uVar2 = thunk_FUN_03fa6ef4();
                    /* WARNING: Subroutine does not return */
            FUN_03f5c414(uVar2,0);
          }
          if ((int)plVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          plVar5[4] = lVar6;
          thunk_FUN_03f5d7b8(plVar5 + 4,lVar6);
          if (plVar4 != (long *)0x0) {
            uVar2 = (**(code **)(*plVar4 + 0x948))(plVar4,plVar5,*(undefined8 *)(*plVar4 + 0x950));
            *param_2 = 1;
            goto LAB_07688338;
          }
        }
LAB_07688488:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = (ulong)local_34;
  }
  *param_2 = 0;
  return uVar1;
}

