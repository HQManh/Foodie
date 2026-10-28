// rea decompile_all
// name: Newtonsoft.Json.JsonWriter$$SetWriteState
// address: 0x7682204
// body: available
// range: 0x7682204-0x76823d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76822b4 to 0x7680218 Newtonsoft.Json.JsonWriter$$AutoComplete (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76822ec to 0x768014c Newtonsoft.Json.JsonWriter$$AutoCompleteClose (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x768230c to 0x767f4b8 Newtonsoft.Json.JsonWriter$$InternalWriteStart (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76823d4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonWriter__SetWriteState(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = (int)param_2;
  if (iVar3 < 7) {
    if (iVar3 < 4) {
      if (iVar3 == 1) {
        uVar4 = 1;
LAB_07682304:
        Newtonsoft_Json_JsonWriter__InternalWriteStart(param_1,param_2,uVar4);
        return;
      }
      if (iVar3 == 2) {
        uVar4 = 2;
        goto LAB_07682304;
      }
      if (iVar3 == 3) {
        uVar4 = 3;
        goto LAB_07682304;
      }
    }
    else {
      if (iVar3 == 4) {
        if ((param_3 != (long *)0x0) && (*param_3 == DAT_09535468)) {
          *(long *)(param_1 + 0x20) = (long)param_3;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x20),param_3);
          param_2 = 4;
          goto LAB_076822ac;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar2 = thunk_FUN_03f9944c();
        uVar4 = thunk_FUN_03fc39d4(&DAT_091fafd0);
        uVar1 = thunk_FUN_03fc39d4(&DAT_09225370);
        System_ArgumentException___ctor(uVar2,uVar4,uVar1,0);
        goto LAB_076823c0;
      }
      if (iVar3 == 5) goto LAB_076822ac;
      if (iVar3 == 6) {
        return;
      }
    }
  }
  else if (iVar3 < 0xe) {
    if (iVar3 - 7U < 6) {
LAB_07682294:
      if (*(char *)(param_1 + 0x28) != '\0') {
        *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      }
LAB_076822ac:
      Newtonsoft_Json_JsonWriter__AutoComplete(param_1,param_2);
      return;
    }
    if (iVar3 == 0xd) {
      uVar4 = 1;
      goto LAB_076822e4;
    }
  }
  else {
    if (iVar3 - 0x10U < 2) goto LAB_07682294;
    if (iVar3 == 0xe) {
      uVar4 = 2;
LAB_076822e4:
      Newtonsoft_Json_JsonWriter__AutoCompleteClose(param_1,uVar4);
      return;
    }
    if (iVar3 == 0xf) {
      uVar4 = 3;
      goto LAB_076822e4;
    }
  }
  thunk_FUN_03fc39d4(&DAT_09181558);
  uVar2 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_09224098);
  System_ArgumentOutOfRangeException___ctor(uVar2,uVar4,0);
LAB_076823c0:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d1f88);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar4);
}

