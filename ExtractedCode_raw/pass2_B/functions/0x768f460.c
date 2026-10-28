// rea decompile_all
// name: Newtonsoft.Json.Utilities.DateTimeUtils$$WriteDateTimeString
// address: 0x768f460
// body: available
// range: 0x768f460-0x768f76f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x768f728 to 0x768f770 Newtonsoft.Json.Utilities.DateTimeUtils$$WriteDateTimeOffset (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x768f768 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x768f76c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong Newtonsoft_Json_Utilities_DateTimeUtils__WriteDateTimeString
                (long param_1,int param_2,undefined8 param_3,char param_4,undefined8 param_5,
                int param_6,int param_7)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 local_48;
  
  if ((DAT_09522591 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ff8);
    FUN_03f5c2a4(&DAT_091835c0);
    FUN_03f5c2a4(&DAT_09183548);
    FUN_03f5c2a4(&DAT_091b7508);
    FUN_03f5c2a4(&DAT_091b7510);
    FUN_03f5c2a4(&DAT_091f8548);
    FUN_03f5c2a4(&DAT_09214600);
    DAT_09522591 = 1;
  }
  local_48 = 0;
  if (param_7 != 1) {
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Utilities_DateTimeUtils__WriteDefaultIsoDate(param_1,param_2,param_3);
    if (param_6 == 1) {
      if (param_1 == 0) goto LAB_0768f768;
      if (*(uint *)(param_1 + 0x18) <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar4 = (long)(int)uVar2;
      uVar2 = uVar2 + 1;
      *(undefined2 *)(param_1 + lVar4 * 2 + 0x20) = 0x5a;
    }
    else if (param_6 == 2) {
      if (param_4 == '\0') {
        if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        param_5 = Newtonsoft_Json_Utilities_DateTimeUtils__GetUtcOffset(param_3);
      }
      if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = Newtonsoft_Json_Utilities_DateTimeUtils__WriteDateTimeOffset
                        (param_1,uVar2,param_5,param_7);
      return uVar5;
    }
    goto LAB_0768f74c;
  }
  if (param_4 == '\0') {
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    param_5 = Newtonsoft_Json_Utilities_DateTimeUtils__GetUtcOffset(param_3);
  }
  if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  local_48 = Newtonsoft_Json_Utilities_DateTimeUtils__ConvertDateTimeToJavaScriptTicks
                       (param_3,param_5);
  if (DAT_09214600 == 0) goto LAB_0768f768;
  System_String__CopyTo(DAT_09214600,0,param_1,param_2,7,0);
  if (*(int *)(DAT_09182ff8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
  lVar4 = System_Int64__ToString(&local_48,uVar3,0);
  if (lVar4 == 0) goto LAB_0768f768;
  System_String__CopyTo(lVar4,0,param_1,param_2 + 7,*(undefined4 *)(lVar4 + 0x10),0);
  iVar1 = *(int *)(lVar4 + 0x10) + param_2 + 7;
  if (param_6 == 2) {
LAB_0768f644:
    if (*(int *)(DAT_091835c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar1 = Newtonsoft_Json_Utilities_DateTimeUtils__WriteDateTimeOffset(param_1,iVar1,param_5,1);
  }
  else if (param_6 == 0) {
    if (*(int *)(DAT_09183548 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_DateTime__op_Inequality
                      (param_3,*(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x18),0);
    if ((uVar5 & 1) != 0) {
      if (*(int *)(DAT_09183548 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_DateTime__op_Inequality
                        (param_3,*(undefined8 *)(*(long *)(DAT_09183548 + 0xb8) + 0x10),0);
      if ((uVar5 & 1) != 0) goto LAB_0768f644;
    }
  }
  if (DAT_091f8548 == 0) {
LAB_0768f768:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  System_String__CopyTo(DAT_091f8548,0,param_1,iVar1,3,0);
  uVar2 = iVar1 + 3;
LAB_0768f74c:
  return (ulong)uVar2;
}

