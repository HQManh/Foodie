// rea decompile_all
// name: Newtonsoft.Json.Linq.JsonPath.JPath$$ReadRegexString
// address: 0x76fef54
// body: available
// range: 0x76fef54-0x76ff09f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76ff050 to 0x7432114 System.String$$Substring (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x76ff054 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76ff09c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Newtonsoft_Json_Linq_JsonPath_JPath__ReadRegexString(long param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_1 + 0x20);
  lVar5 = *(long *)(param_1 + 0x10);
  iVar9 = iVar1 + 1;
  while (*(int *)(param_1 + 0x20) = iVar9, lVar5 != 0) {
    if (*(int *)(lVar5 + 0x10) <= iVar9) {
      thunk_FUN_03fc39d4(&DAT_09187348);
      uVar7 = thunk_FUN_03f9944c();
      uVar8 = thunk_FUN_03fc39d4(&DAT_0920a600);
      Newtonsoft_Json_JsonException___ctor(uVar7,uVar8,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091d1330);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar8);
    }
    sVar3 = System_String__get_Chars(lVar5,iVar9,0);
    if (sVar3 == 0x5c) {
      lVar5 = *(long *)(param_1 + 0x10);
      if (lVar5 == 0) break;
      iVar2 = *(int *)(param_1 + 0x20);
      iVar9 = iVar2 + 2;
      if (*(int *)(lVar5 + 0x10) <= iVar2 + 1) {
        iVar9 = iVar2 + 1;
      }
    }
    else {
      if (sVar3 == 0x2f) goto LAB_076fefdc;
      lVar5 = *(long *)(param_1 + 0x10);
      iVar9 = *(int *)(param_1 + 0x20) + 1;
    }
  }
  goto LAB_076ff054;
  while( true ) {
    if (*(int *)(lVar5 + 0x10) <= iVar9) goto LAB_076ff034;
    uVar4 = System_String__get_Chars(lVar5,iVar9,0);
    if (*(int *)(DAT_09535460 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09535460);
    }
    uVar6 = System_Char__IsLetter(uVar4,0);
    if ((uVar6 & 1) == 0) break;
LAB_076fefdc:
    lVar5 = *(long *)(param_1 + 0x10);
    iVar9 = *(int *)(param_1 + 0x20) + 1;
    *(int *)(param_1 + 0x20) = iVar9;
    if (lVar5 == 0) goto LAB_076ff054;
  }
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 != 0) {
LAB_076ff034:
    System_String__Substring(lVar5,iVar1,*(int *)(param_1 + 0x20) - iVar1,0);
    return;
  }
LAB_076ff054:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

