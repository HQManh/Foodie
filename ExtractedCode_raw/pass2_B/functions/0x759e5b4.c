// rea decompile_all
// name: System.DateTimeFormat$$ParseQuoteString
// address: 0x759e5b4
// body: available
// range: 0x759e5b4-0x759e75b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x759e680 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x759e710 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x759e714 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x759e758 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int System_DateTimeFormat__ParseQuoteString(long param_1,uint param_2,uint param_3,long param_4)

{
  short sVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  short local_34 [2];
  
  if ((DAT_09521c1d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9810);
    DAT_09521c1d = 1;
  }
  if (param_3 < param_2) {
    sVar1 = *(short *)(param_1 + (long)(int)param_3 * 2);
    uVar8 = (ulong)(param_3 + 1);
    while( true ) {
      uVar6 = (uint)uVar8;
      if ((int)param_2 <= (int)uVar6) {
        thunk_FUN_03fc39d4(&DAT_09182ff8);
        FUN_039afb80();
        uVar3 = System_Globalization_CultureInfo__get_CurrentCulture(0);
        local_34[0] = sVar1;
        uVar4 = FUN_03f5c42c(DAT_09535460,local_34);
        uVar2 = thunk_FUN_03fc39d4(&DAT_091fdd60);
        uVar3 = System_String__Format(uVar3,uVar2,uVar4,0);
        thunk_FUN_03fc39d4(&DAT_09184908);
        uVar4 = thunk_FUN_03f9944c();
        System_FormatException___ctor(uVar4,uVar3);
        uVar3 = thunk_FUN_03fc39d4(&DAT_091c79f8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar4,uVar3);
      }
      if (param_2 <= uVar6) break;
      sVar5 = *(short *)(param_1 + (long)(int)uVar6 * 2);
      uVar8 = (long)(int)uVar6 + 1;
      uVar7 = (uint)uVar8;
      if (sVar5 == sVar1) {
        return uVar7 - param_3;
      }
      if (sVar5 == 0x5c) {
        if ((int)param_2 <= (int)uVar7) {
          thunk_FUN_03fc39d4(&DAT_09184908);
          uVar3 = thunk_FUN_03f9944c();
          uVar4 = thunk_FUN_03fc39d4(&DAT_09204ca0);
          System_FormatException___ctor(uVar3,uVar4);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091c79f8);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar3,uVar4);
        }
        if (param_2 <= uVar7) break;
        if (param_4 == 0) {
LAB_0759e714:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        sVar5 = *(short *)(param_1 + uVar8 * 2);
        uVar8 = (ulong)(uVar6 + 2);
      }
      else if (param_4 == 0) goto LAB_0759e714;
      System_Text_StringBuilder__Append(param_4,sVar5,0);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c558();
}

