// rea decompile_all
// name: Newtonsoft.Json.JsonTextWriter$$SetIndentChars
// address: 0x76663cc
// body: available
// range: 0x76663cc-0x76664c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x76664bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x76664c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint Newtonsoft_Json_JsonTextWriter__SetIndentChars(long param_1)

{
  uint uVar1;
  short sVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  
  plVar3 = *(long **)(param_1 + 0x68);
  if ((plVar3 != (long *)0x0) &&
     (lVar4 = (**(code **)(*plVar3 + 0x218))(plVar3,*(undefined8 *)(*plVar3 + 0x220)), lVar4 != 0))
  {
    uVar1 = *(uint *)(lVar4 + 0x10);
    plVar3 = (long *)(param_1 + 0xa0);
    if ((*plVar3 == 0) || (uVar1 + 0xc != *(int *)(*plVar3 + 0x18))) {
LAB_07666468:
      uVar5 = System_String__CreateString(0,*(undefined2 *)(param_1 + 0x78),0xc,0);
      lVar4 = System_String__Concat(lVar4,uVar5,0);
      if (lVar4 == 0) goto LAB_076664bc;
      lVar4 = System_String__ToCharArray(lVar4,0);
      *plVar3 = lVar4;
      thunk_FUN_03f5d7b8(plVar3,lVar4);
    }
    else if (uVar1 != 0) {
      uVar7 = 0;
      do {
        sVar2 = System_String__get_Chars(lVar4,uVar7,0);
        lVar6 = *plVar3;
        if (lVar6 == 0) goto LAB_076664bc;
        if (*(uint *)(lVar6 + 0x18) <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        if (*(short *)(lVar6 + (long)(int)uVar7 * 2 + 0x20) != sVar2) goto LAB_07666468;
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
    return uVar1;
  }
LAB_076664bc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

