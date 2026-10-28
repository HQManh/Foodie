// rea decompile_all
// name: Newtonsoft.Json.JsonReader$$SetToken
// address: 0x7644618
// body: available
// range: 0x7644618-0x76447bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76446a0 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7644778 to 0x7643d88 Newtonsoft.Json.JsonReader$$Push (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x764479c to 0x7647094 Newtonsoft.Json.JsonReader$$ValidateEnd (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76447b8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_JsonReader__SetToken(long param_1,int param_2,long *param_3,uint param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  
  *(long *)(param_1 + 0x18) = (long)param_3;
  *(int *)(param_1 + 0x10) = param_2;
  thunk_FUN_03f5d7b8((long *)(param_1 + 0x18),param_3);
  if (param_2 < 0xd) {
    if (param_2 < 4) {
      if (param_2 == 1) {
        uVar3 = 3;
        uVar2 = 1;
      }
      else if (param_2 == 2) {
        uVar3 = 5;
        uVar2 = 2;
      }
      else {
        if (param_2 != 3) {
          return;
        }
        uVar3 = 9;
        uVar2 = 3;
      }
      *(undefined4 *)(param_1 + 0x24) = uVar3;
      Newtonsoft_Json_JsonReader__Push(param_1,uVar2);
      return;
    }
    if (6 < param_2 - 6U) {
      if (param_2 != 4) {
        return;
      }
      *(undefined4 *)(param_1 + 0x24) = 2;
      lVar1 = DAT_09535468;
      if (param_3 == (long *)0x0) {
        *(undefined8 *)(param_1 + 0x30) = 0;
      }
      else if ((*param_3 != DAT_09535468) ||
              (*(long **)(param_1 + 0x30) = param_3, *param_3 != lVar1)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(param_3);
      }
      thunk_FUN_03f5d7b8(param_1 + 0x30,param_3);
      return;
    }
  }
  else {
    if (param_2 < 0x10) {
      if (param_2 == 0xd) {
        uVar2 = 0xd;
      }
      else if (param_2 == 0xe) {
        uVar2 = 0xe;
      }
      else {
        if (param_2 != 0xf) {
          return;
        }
        uVar2 = 0xf;
      }
      Newtonsoft_Json_JsonReader__ValidateEnd(param_1,uVar2);
      return;
    }
    if (1 < param_2 - 0x10U) {
      return;
    }
  }
  uVar3 = 8;
  if ((*(int *)(param_1 + 0x28) == 0) && (uVar3 = 0xc, *(char *)(param_1 + 0x71) != '\0')) {
    uVar3 = 8;
  }
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  if (((param_4 & 1) != 0) && (*(char *)(param_1 + 0x38) != '\0')) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  return;
}

