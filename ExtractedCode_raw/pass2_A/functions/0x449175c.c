// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass40_0$$<AutoCompleteDishAtomic>g__JobServings|13
// address: 0x449175c
// body: available
// range: 0x449175c-0x4491923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449191c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4491920 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int CookingGraph_CookingLevelSimulation_<>c__DisplayClass40_0__<AutoCompleteDishAtomic>g__JobServings_13
              (long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long *plVar9;
  
  if ((DAT_09518177 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca988);
    FUN_03f5c2a4(&DAT_091cab48);
    FUN_03f5c2a4(&DAT_09178770);
    FUN_03f5c2a4(&DAT_09178b60);
    FUN_03f5c2a4(&DAT_091e7e18);
    FUN_03f5c2a4(&DAT_091e7e30);
    FUN_03f5c2a4(&DAT_0918f598);
    DAT_09518177 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_0918f598);
  System_Object___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x18) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),param_1);
    plVar9 = (long *)(lVar4 + 0x10);
    *plVar9 = param_2;
    thunk_FUN_03f5d7b8(plVar9,param_2);
    lVar6 = *plVar9;
    if ((((lVar6 != 0) && (*(long *)(param_1 + 0x18) != 0)) &&
        (lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 0x78), lVar7 != 0)) &&
       (lVar7 = *(long *)(lVar7 + 0x70), lVar7 != 0)) {
      if (*(uint *)(lVar6 + 0x1c) < *(uint *)(lVar7 + 0x18)) {
        iVar1 = *(int *)(lVar6 + 0x20);
        iVar2 = *(int *)(lVar7 + (long)(int)*(uint *)(lVar6 + 0x1c) * 4 + 0x20);
        uVar8 = *(undefined8 *)(lVar6 + 0x48);
        uVar5 = thunk_FUN_03f9944c(DAT_09178b60);
        FUN_0531612c(uVar5,lVar4,DAT_091e7e30,0);
        uVar5 = FUN_04afa860(uVar8,uVar5,DAT_091ca988);
        uVar8 = thunk_FUN_03f9944c(DAT_09178770);
        FUN_05313d88(uVar8,param_1,DAT_091e7e18,0);
        iVar3 = FUN_04b02574(uVar5,uVar8,DAT_091cab48);
        return iVar2 * iVar1 - iVar3;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

