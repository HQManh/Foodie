// rea decompile_all
// name: CookingGraph.CookingGraphIndex.<>c__DisplayClass20_0$$<.ctor>g__Reach|18
// address: 0x448117c
// body: available
// range: 0x448117c-0x448135f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4481310 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4481314 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x448135c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookingGraph_CookingGraphIndex_<>c__DisplayClass20_0__<_ctor>g__Reach_18
               (long param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  if ((DAT_095180dd & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a82b0);
    FUN_03f5c2a4(&DAT_091a82e8);
    FUN_03f5c2a4(&DAT_091a82a0);
    FUN_03f5c2a4(&DAT_091a8298);
    FUN_03f5c2a4(&DAT_09179e18);
    DAT_095180dd = 1;
  }
  if (param_3 != 0) {
    uVar3 = FUN_053d8048(param_3,param_2,DAT_091a82b0);
    if ((uVar3 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar5 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_091ffb28);
      System_ArgumentException___ctor(uVar5,uVar6,0);
      uVar6 = thunk_FUN_03fc39d4(&DAT_091e72c8);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar5,uVar6);
    }
    lVar4 = thunk_FUN_03f9944c(DAT_09179e18);
    FUN_053d6e00(lVar4,DAT_091a8298);
    if (lVar4 != 0) {
      FUN_053d8048(lVar4,param_2,DAT_091a82b0);
      if ((*(long *)(param_1 + 0x20) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x28), lVar7 != 0)) {
        if (*(uint *)(lVar7 + 0x18) <= param_2) {
LAB_04481314:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar7 = *(long *)(lVar7 + (long)(int)param_2 * 8 + 0x20);
        if (lVar7 != 0) {
          uVar1 = *(uint *)(lVar7 + 0x18);
          if (0 < (int)uVar1) {
            lVar9 = 0;
            do {
              if (uVar1 <= (uint)lVar9) goto LAB_04481314;
              lVar8 = *(long *)(lVar7 + 0x20 + lVar9 * 8);
              if (lVar8 == 0) goto LAB_04481310;
              uVar2 = *(undefined4 *)(lVar8 + 0x14);
              uVar5 = thunk_FUN_03f9944c(DAT_09179e18);
              FUN_053d6ef0(uVar5,param_3,DAT_091a82a0);
              uVar5 = CookingGraph_CookingGraphIndex_<>c__DisplayClass20_0__<_ctor>g__Reach_18
                                (param_1,uVar2,uVar5);
              FUN_053d8058(lVar4,uVar5,DAT_091a82e8);
              uVar1 = *(uint *)(lVar7 + 0x18);
              lVar9 = lVar9 + 1;
            } while ((int)lVar9 < (int)uVar1);
          }
          return lVar4;
        }
      }
    }
  }
LAB_04481310:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

