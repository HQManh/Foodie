// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$AutoCompleteAsync
// address: 0x7678764
// body: available
// range: 0x7678764-0x76789ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7678904 to 0x7678a00 Newtonsoft.Json.JsonWriter$$AutoCompleteAsync (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7678940 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7678944 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76789fc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_JsonWriter__AutoCompleteAsync(long *param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  undefined8 local_60;
  undefined8 uStack_58;
  uint local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  uint local_38;
  
  if ((DAT_095224b7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_09187490);
    DAT_095224b7 = 1;
  }
  uVar1 = *(uint *)(param_1 + 6);
  if (*(int *)(DAT_09187490 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = **(long **)(DAT_09187490 + 0xb8);
  if (lVar7 == 0) {
LAB_07678940:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if (*(uint *)(lVar7 + 0x18) <= param_2) {
LAB_07678944:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c558();
  }
  lVar7 = *(long *)(lVar7 + (long)(int)param_2 * 8 + 0x20);
  if (lVar7 == 0) goto LAB_07678940;
  if (*(uint *)(lVar7 + 0x18) <= uVar1) goto LAB_07678944;
  iVar2 = *(int *)(lVar7 + (long)(int)uVar1 * 4 + 0x20);
  if (iVar2 == 9) {
    thunk_FUN_03fc39d4(&DAT_09182ff8);
    FUN_039afb80();
    uVar3 = System_Globalization_CultureInfo__get_InvariantCulture(0);
    local_48 = thunk_FUN_03fc39d4(&DAT_09187478);
    uStack_40 = 0xffffffffffffffff;
    local_38 = param_2;
    uVar4 = System_Enum__ToString(&local_48,0);
    local_60 = thunk_FUN_03fc39d4(&DAT_09192050);
    uStack_58 = 0xffffffffffffffff;
    local_50 = uVar1;
    uVar5 = System_Enum__ToString(&local_60,0);
    uVar6 = thunk_FUN_03fc39d4(&DAT_09210a98);
    uVar3 = Newtonsoft_Json_Utilities_StringUtils__FormatWith(uVar6,uVar3,uVar4,uVar5,0);
    uVar3 = Newtonsoft_Json_JsonWriterException__Create(param_1,uVar3,0,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091d1f68);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  *(int *)(param_1 + 6) = iVar2;
  if (*(int *)((long)param_1 + 0x34) == 1) {
    if (3 < (int)uVar1) {
      if ((int)uVar1 < 6) {
        if (uVar1 != 4) {
          if (uVar1 != 5) goto LAB_07678908;
LAB_076788e4:
          if (param_2 != 5) {
LAB_076788ec:
            uVar3 = Newtonsoft_Json_JsonWriter__AutoCompleteAsync(param_1,param_3);
            return uVar3;
          }
        }
      }
      else if (uVar1 != 6) {
        if (uVar1 == 7) goto LAB_076788e4;
LAB_07678908:
        if (param_2 != 4) {
LAB_0767884c:
          if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          return *(undefined8 *)(*(long *)(DAT_091817a0 + 0xb8) + 0x10);
        }
      }
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1b8);
      uVar3 = *(undefined8 *)(*param_1 + 0x1c0);
      goto LAB_07678924;
    }
    if (uVar1 == 0) goto LAB_0767884c;
    if (uVar1 == 1) {
      UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1d8);
      uVar3 = *(undefined8 *)(*param_1 + 0x1e0);
      goto LAB_07678924;
    }
    if (uVar1 != 3) goto LAB_07678908;
    if (param_2 == 5) goto LAB_0767884c;
    if (param_2 == 4) goto LAB_076788ec;
  }
  else if (((param_2 == 5) || (7 < uVar1)) || ((1 << (ulong)(uVar1 & 0x1f) & 0xa8U) == 0))
  goto LAB_0767884c;
  UNRECOVERED_JUMPTABLE = *(code **)(*param_1 + 0x1c8);
  uVar3 = *(undefined8 *)(*param_1 + 0x1d0);
LAB_07678924:
                    /* WARNING: Could not recover jumptable at 0x0767893c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar3 = (*UNRECOVERED_JUMPTABLE)(param_1,param_3,uVar3);
  return uVar3;
}

