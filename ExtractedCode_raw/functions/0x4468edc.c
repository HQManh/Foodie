// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$FreeHopSlot
// address: 0x4468edc
// body: available
// range: 0x4468edc-0x44690f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44690cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44690f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingLevelSimulation__FreeHopSlot(long param_1,undefined4 param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  undefined8 local_58;
  
  if ((DAT_09518059 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c190);
    FUN_03f5c2a4(&DAT_091c9498);
    FUN_03f5c2a4(&DAT_09178b98);
    FUN_03f5c2a4(&DAT_091e7ca0);
    FUN_03f5c2a4(&DAT_0918f440);
    FUN_03f5c2a4(&DAT_091bec98);
    DAT_09518059 = 1;
  }
  lVar2 = thunk_FUN_03f9944c(DAT_0918f440);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass167_0___ctor(lVar2,0);
  if (lVar2 != 0) {
    *(long *)(lVar2 + 0x10) = param_1;
    thunk_FUN_03f5d7b8((long *)(lVar2 + 0x10),param_1);
    lVar5 = *(long *)(param_1 + 0x78);
    *(undefined4 *)(lVar2 + 0x18) = param_2;
    if (lVar5 != 0) {
      iVar6 = 0;
      while (lVar5 = *(long *)(lVar5 + 0x20), lVar5 != 0) {
        uVar1 = *(uint *)(lVar2 + 0x18);
        if (*(uint *)(lVar5 + 0x18) <= uVar1) {
LAB_044690f0:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar5 = *(long *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
        if (lVar5 == 0) break;
        if (*(int *)(lVar5 + 0x18) <= iVar6) {
          return 0xffffffff;
        }
        lVar5 = *(long *)(param_1 + 0xb0);
        local_58 = 0;
        FUN_066c1fdc(&local_58,(long)(int)uVar1,iVar6,DAT_091bec98);
        if (lVar5 == 0) break;
        uVar3 = FUN_06e4c14c(lVar5,local_58,DAT_0919c190);
        if ((uVar3 & 1) == 0) {
          uVar4 = CookingGraph_CookingLevelSimulation__LaneSlots
                            (param_1,*(undefined4 *)(lVar2 + 0x18),iVar6);
          lVar5 = *(long *)(lVar2 + 0x20);
          if (lVar5 == 0) {
            lVar5 = thunk_FUN_03f9944c(DAT_09178b98);
            FUN_05315754(lVar5,lVar2,DAT_091e7ca0,0);
            *(long *)(lVar2 + 0x20) = lVar5;
            thunk_FUN_03f5d7b8(lVar2 + 0x20,lVar5);
          }
          uVar3 = FUN_04ab6928(uVar4,lVar5,DAT_091c9498);
          if ((uVar3 & 1) == 0) {
            if ((*(long *)(param_1 + 0x78) == 0) ||
               (lVar5 = *(long *)(*(long *)(param_1 + 0x78) + 0x20), lVar5 == 0)) break;
            if (*(uint *)(lVar5 + 0x18) <= *(uint *)(lVar2 + 0x18)) goto LAB_044690f0;
            lVar5 = *(long *)(lVar5 + (long)(int)*(uint *)(lVar2 + 0x18) * 8 + 0x20);
            if (lVar5 == 0) break;
            uVar4 = CookingGraph_CookingGraphIndex_Tool__Flat(lVar5,0,iVar6,0);
            if (-1 < (int)uVar4) {
              return uVar4;
            }
          }
        }
        lVar5 = *(long *)(param_1 + 0x78);
        iVar6 = iVar6 + 1;
        if (lVar5 == 0) break;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

