// rea decompile_all
// name: Newtonsoft.Json.Utilities.StringUtils$$Trim
// address: 0x76a0038
// body: available
// range: 0x76a0038-0x76a01c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76a0154 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76a01c4 to 0x7432114 System.String$$Substring (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Utilities_StringUtils__Trim(long param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  int iVar7;
  
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    System_ArgumentNullException___ctor(uVar4,0);
  }
  else {
    if (param_2 < 0) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      puVar5 = &DAT_09223208;
    }
    else {
      if ((-1 < param_3) && (iVar7 = param_2 + param_3 + -1, iVar7 < *(int *)(param_1 + 0x10))) {
        if (iVar7 <= param_2) goto LAB_076a0158;
        param_3 = param_3 + -1;
        do {
          uVar2 = System_String__get_Chars(param_1,param_2,0);
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09535460);
          }
          uVar3 = System_Char__IsWhiteSpace(uVar2,0);
          if ((uVar3 & 1) == 0) goto LAB_076a0158;
          param_3 = param_3 + -1;
          param_2 = param_2 + 1;
          iVar1 = iVar7;
        } while (param_3 != 0);
        do {
          param_2 = iVar1;
          uVar2 = System_String__get_Chars(param_1,iVar7,0);
          if (*(int *)(DAT_09535460 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09535460);
          }
          uVar3 = System_Char__IsWhiteSpace(uVar2,0);
          if ((uVar3 & 1) == 0) break;
          iVar7 = iVar7 + -1;
LAB_076a0158:
          iVar1 = param_2;
        } while (param_2 <= iVar7);
        System_String__Substring(param_1,param_2,(iVar7 - param_2) + 1,0);
        return;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      puVar5 = &DAT_0921e638;
    }
    uVar6 = thunk_FUN_03fc39d4(puVar5);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar6,0);
  }
  uVar6 = thunk_FUN_03fc39d4(&DAT_091da6e8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar6);
}

