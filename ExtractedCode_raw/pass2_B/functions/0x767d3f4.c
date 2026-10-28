// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$SetWriteStateAsync
// address: 0x767d3f4
// body: available
// range: 0x767d3f4-0x767d697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x767d694 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_JsonWriter__SetWriteStateAsync
          (undefined8 param_1,int param_2,long *param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  local_38 = param_4;
  if ((DAT_095224fe & 1) == 0) {
    FUN_03f5c2a4(&DAT_091817a0);
    FUN_03f5c2a4(&DAT_09182348);
    DAT_095224fe = 1;
  }
  if (*(int *)(DAT_09182348 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = System_Threading_CancellationToken__get_IsCancellationRequested(&local_38,0);
  uVar2 = local_38;
  if ((uVar1 & 1) != 0) {
    if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar2 = Newtonsoft_Json_Utilities_AsyncUtils__FromCanceled(uVar2,0);
    return uVar2;
  }
  if (param_2 < 7) {
    if (param_2 < 4) {
      if (param_2 == 1) {
        uVar2 = 1;
        uVar4 = 1;
LAB_0767d5c0:
        uVar2 = Newtonsoft_Json_JsonWriter__InternalWriteStartAsync(param_1,uVar2,uVar4,local_38);
        return uVar2;
      }
      if (param_2 == 2) {
        uVar2 = 2;
        uVar4 = 2;
        goto LAB_0767d5c0;
      }
      if (param_2 == 3) {
        uVar2 = 3;
        uVar4 = 3;
        goto LAB_0767d5c0;
      }
    }
    else {
      if (param_2 == 4) {
        if ((param_3 != (long *)0x0) && (*param_3 == DAT_09535468)) {
          uVar2 = Newtonsoft_Json_JsonWriter__InternalWritePropertyNameAsync
                            (param_1,param_3,local_38);
          return uVar2;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        uVar2 = thunk_FUN_03fc39d4(&DAT_091fafd0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_09225370);
        System_ArgumentException___ctor(uVar3,uVar2,uVar4,0);
        goto LAB_0767d680;
      }
      if (param_2 == 5) {
        uVar2 = Newtonsoft_Json_JsonWriter__AutoCompleteAsync(param_1,5,local_38);
        return uVar2;
      }
      if (param_2 == 6) {
        if (*(int *)(DAT_091817a0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        return *(undefined8 *)(*(long *)(DAT_091817a0 + 0xb8) + 0x10);
      }
    }
  }
  else if (param_2 < 0xe) {
    if (param_2 - 7U < 6) {
LAB_0767d528:
      uVar2 = Newtonsoft_Json_JsonWriter__InternalWriteValueAsync(param_1,param_2,local_38);
      return uVar2;
    }
    if (param_2 == 0xd) {
      uVar2 = 1;
      goto LAB_0767d580;
    }
  }
  else {
    if (param_2 - 0x10U < 2) goto LAB_0767d528;
    if (param_2 == 0xe) {
      uVar2 = 2;
LAB_0767d580:
      uVar2 = Newtonsoft_Json_JsonWriter__InternalWriteEndAsync(param_1,uVar2,local_38);
      return uVar2;
    }
    if (param_2 == 0xf) {
      uVar2 = 3;
      goto LAB_0767d580;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar3 = thunk_FUN_03f9944c();
  uVar2 = thunk_FUN_03fc39d4(&DAT_09224098);
  System_ArgumentOutOfRangeException___ctor(uVar3,uVar2,0);
LAB_0767d680:
  uVar2 = thunk_FUN_03fc39d4(&DAT_091d1f90);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar2);
}

