// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$IsHidden
// address: 0x4454f74
// body: available
// range: 0x4454f74-0x44550f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44550ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44550f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint CookingGraph_CookingLevelSimulation__IsHidden(long param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  
  if ((DAT_09518034 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9390);
    FUN_03f5c2a4(&DAT_09178290);
    FUN_03f5c2a4(&DAT_091e76d0);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518034 = 1;
  }
  lVar2 = CookingGraph_CookingLevelSimulation__At(param_1,param_2,param_3);
  uVar1 = 0;
  if (((lVar2 != 0) && (param_3 != 0)) && (*(char *)(lVar2 + 0x31) != '\0')) {
    uVar1 = *(uint *)(lVar2 + 0x20);
    if (-1 < (int)uVar1) {
      lVar2 = *(long *)(param_1 + 0x88);
      if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (*(uint *)(lVar2 + 0x18) <= uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (*(int *)(lVar2 + (ulong)uVar1 * 4 + 0x20) == 0) {
        uVar3 = CookingGraph_CookingLevelSimulation__GroupCells(param_1);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar5 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar2 = puVar5[0x68];
        if (lVar2 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar5 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar6 = *puVar5;
          lVar2 = thunk_FUN_03f9944c(DAT_09178290);
          FUN_0530cf38(lVar2,uVar6,DAT_091e76d0,0);
          lVar4 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar4 + 0x340) = lVar2;
          thunk_FUN_03f5d7b8(lVar4 + 0x340,lVar2);
        }
        uVar1 = FUN_04ab46c8(uVar3,lVar2,DAT_091c9390);
        uVar1 = uVar1 ^ 1;
        goto LAB_044550d8;
      }
    }
    uVar1 = 1;
  }
LAB_044550d8:
  return uVar1 & 1;
}

