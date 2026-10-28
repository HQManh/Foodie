// rea decompile_all
// name: CookingGraph.CookingLevelGeneratorClient$$.ctor
// address: 0x442e3ac
// body: available
// range: 0x442e3ac-0x442e54f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x442e4ec to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x442e4f0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x442e54c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelGeneratorClient___ctor(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *plVar6;
  
  if ((DAT_09517f91 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091851a0);
    FUN_03f5c2a4(&DAT_0918bd60);
    FUN_03f5c2a4(&DAT_0918c918);
    FUN_03f5c2a4(&DAT_0921cde8);
    DAT_09517f91 = 1;
  }
  System_Object___ctor(param_1,0);
  lVar1 = thunk_FUN_03f9944c(DAT_0918c918);
  System_Uri___ctor(lVar1,param_2,0);
  plVar6 = (long *)(param_1 + 0x18);
  *plVar6 = lVar1;
  thunk_FUN_03f5d7b8(plVar6,lVar1);
  if (*plVar6 != 0) {
    uVar2 = System_Uri__get_IsLoopback(*plVar6,0);
    if ((uVar2 & 1) == 0) {
LAB_0442e4f4:
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_0920f5d8);
      uVar5 = thunk_FUN_03fc39d4(&DAT_0921aff0);
      System_ArgumentException___ctor(uVar3,uVar4,uVar5,0);
      uVar4 = thunk_FUN_03fc39d4(&DAT_091c6640);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar4);
    }
    if (*plVar6 != 0) {
      uVar3 = System_Uri__get_Scheme(*plVar6,0);
      uVar2 = System_String__op_Inequality(uVar3,DAT_0921cde8,0);
      if ((uVar2 & 1) != 0) goto LAB_0442e4f4;
      lVar1 = thunk_FUN_03f9944c(DAT_091851a0);
      System_Net_Http_HttpClient___ctor(lVar1,0);
      if (*(int *)(DAT_0918bd60 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = System_TimeSpan__FromMinutes(0x4008000000000000,0);
      if (lVar1 != 0) {
        System_Net_Http_HttpClient__set_Timeout(lVar1,uVar3,0);
        *(long *)(param_1 + 0x10) = lVar1;
        thunk_FUN_03f5d7b8((long *)(param_1 + 0x10),lVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

