// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$LaneSlots
// address: 0x4444064
// body: available
// range: 0x4444064-0x444430f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4444304 to 0x4aed40c FUN_04aed40c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4444308 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x444430c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__LaneSlots(long param_1,uint param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09518058 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca240);
    FUN_03f5c2a4(&DAT_091ca210);
    FUN_03f5c2a4(&DAT_091cb390);
    FUN_03f5c2a4(&DAT_091781f8);
    FUN_03f5c2a4(&DAT_09178200);
    FUN_03f5c2a4(&DAT_09179578);
    FUN_03f5c2a4(&DAT_091e76e8);
    FUN_03f5c2a4(&DAT_091e76f0);
    FUN_03f5c2a4(&DAT_091e7c98);
    FUN_03f5c2a4(&DAT_0918f438);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518058 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f438);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass166_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x78);
    *(undefined4 *)(lVar1 + 0x10) = param_3;
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
      if (*(uint *)(lVar2 + 0x18) <= param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar2 = *(long *)(lVar2 + (long)(int)param_2 * 8 + 0x20);
      if (lVar2 != 0) {
        uVar5 = *(undefined8 *)(lVar2 + 0x10);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        puVar3 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar2 = puVar3[0x94];
        if (lVar2 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424();
            puVar3 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar6 = *puVar3;
          lVar2 = thunk_FUN_03f9944c(DAT_09179578);
          FUN_0532bdb8(lVar2,uVar6,DAT_091e76e8,0);
          lVar4 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar4 + 0x4a0) = lVar2;
          thunk_FUN_03f5d7b8(lVar4 + 0x4a0,lVar2);
        }
        uVar5 = FUN_04aee10c(uVar5,lVar2,DAT_091ca240);
        uVar6 = thunk_FUN_03f9944c(DAT_091781f8);
        FUN_0530af28(uVar6,lVar1,DAT_091e7c98,0);
        uVar5 = FUN_04b0a3c8(uVar5,uVar6,DAT_091cb390);
        if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918f298);
        }
        puVar3 = *(undefined8 **)(DAT_0918f298 + 0xb8);
        lVar1 = puVar3[0x95];
        if (lVar1 == 0) {
          if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
            FUN_03f5c424(DAT_0918f298);
            puVar3 = *(undefined8 **)(DAT_0918f298 + 0xb8);
          }
          uVar6 = *puVar3;
          lVar1 = thunk_FUN_03f9944c(DAT_09178200);
          FUN_0530b150(lVar1,uVar6,DAT_091e76f0,0);
          lVar2 = *(long *)(DAT_0918f298 + 0xb8);
          *(long *)(lVar2 + 0x4a8) = lVar1;
          thunk_FUN_03f5d7b8(lVar2 + 0x4a8,lVar1);
        }
        FUN_04aed40c(uVar5,lVar1,DAT_091ca210);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

