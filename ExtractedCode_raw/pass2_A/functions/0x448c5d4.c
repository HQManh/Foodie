// rea decompile_all
// name: CookingGraph.CookingLevelSimulation.<>c__DisplayClass108_1$$<GridAssemblyDependencies>b__6
// address: 0x448c5d4
// body: available
// range: 0x448c5d4-0x448c897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x448c88c to 0x4b0462c FUN_04b0462c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x448c890 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448c894 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation_<>c__DisplayClass108_1__<GridAssemblyDependencies>b__6
               (long param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_09518130 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9670);
    FUN_03f5c2a4(&DAT_091c9920);
    FUN_03f5c2a4(&DAT_091ca990);
    FUN_03f5c2a4(&DAT_091ca578);
    FUN_03f5c2a4(&DAT_091cae30);
    FUN_03f5c2a4(&DAT_091cb4e8);
    FUN_03f5c2a4(&DAT_09178bd0);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_09178b68);
    FUN_03f5c2a4(&DAT_091e7a78);
    FUN_03f5c2a4(&DAT_091e7a80);
    FUN_03f5c2a4(&DAT_091e7aa8);
    FUN_03f5c2a4(&DAT_0918f2d8);
    DAT_09518130 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f2d8);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x30);
    *(uint *)(lVar1 + 0x10) = param_3;
    if ((lVar4 != 0) && (lVar4 = *(long *)(lVar4 + 0x20), lVar4 != 0)) {
      if (*(uint *)(lVar4 + 0x18) <= param_3) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = *(long *)(param_1 + 0x40);
      uVar5 = *(undefined8 *)(lVar4 + (long)(int)param_3 * 8 + 0x20);
      if (lVar6 == 0) {
        lVar6 = thunk_FUN_03f9944c(DAT_09178b68);
        FUN_0531612c(lVar6,param_1,DAT_091e7a78,0);
        *(long *)(param_1 + 0x40) = lVar6;
        thunk_FUN_03f5d7b8((long *)(param_1 + 0x40),lVar6);
      }
      uVar2 = FUN_04afa8d0(param_2,lVar6,DAT_091ca990);
      plVar7 = *(long **)(param_1 + 0x28);
      uVar3 = thunk_FUN_03f9944c(DAT_09178b98);
      if (plVar7 != (long *)0x0) {
        FUN_05315754(uVar3,plVar7,*(undefined8 *)(*plVar7 + 0x380),0);
        uVar2 = FUN_04b0c1f0(uVar2,uVar3,DAT_091cb4e8);
        lVar4 = *(long *)(param_1 + 0x48);
        if (lVar4 == 0) {
          lVar4 = thunk_FUN_03f9944c(DAT_09178bd0);
          FUN_05315cf4(lVar4,param_1,DAT_091e7a80,0);
          *(long *)(param_1 + 0x48) = lVar4;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x48),lVar4);
        }
        uVar2 = FUN_04af2d4c(uVar2,lVar4,DAT_091ca578);
        uVar5 = FUN_04ad4310(uVar5,uVar2,DAT_091c9670);
        uVar2 = thunk_FUN_03f9944c(DAT_09178b98);
        FUN_05315754(uVar2,lVar1,DAT_091e7aa8,0);
        uVar5 = FUN_04b0c1f0(uVar5,uVar2,DAT_091cb4e8);
        uVar5 = FUN_04add3a4(uVar5,DAT_091c9920);
        FUN_04b0462c(uVar5,DAT_091cae30);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

