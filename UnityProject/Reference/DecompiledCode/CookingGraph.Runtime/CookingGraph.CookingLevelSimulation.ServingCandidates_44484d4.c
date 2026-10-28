// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$ServingCandidates
// address: 0x44484d4
// body: available
// range: 0x44484d4-0x4448947 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4448924 to 0x4b030ec FUN_04b030ec (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4448944 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_CookingLevelSimulation__ServingCandidates(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  
  if ((DAT_0951804f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c67c0);
    FUN_03f5c2a4(&DAT_091c67c8);
    FUN_03f5c2a4(&DAT_091c67d0);
    FUN_03f5c2a4(&DAT_091c9fa8);
    FUN_03f5c2a4(&DAT_091ca9f8);
    FUN_03f5c2a4(&DAT_091cac18);
    FUN_03f5c2a4(&DAT_091cb610);
    FUN_03f5c2a4(&DAT_09179390);
    FUN_03f5c2a4(&DAT_09179380);
    FUN_03f5c2a4(&DAT_09178308);
    FUN_03f5c2a4(&DAT_09178300);
    FUN_03f5c2a4(&DAT_091e79b8);
    FUN_03f5c2a4(&DAT_091e79c0);
    FUN_03f5c2a4(&DAT_091e79c8);
    FUN_03f5c2a4(&DAT_091e79d0);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_0951804f = 1;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x98);
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar5 = puVar2[0x88];
  if (lVar5 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar6 = *puVar2;
    lVar5 = thunk_FUN_03f9944c(DAT_09179390);
    FUN_05322d94(lVar5,uVar6,DAT_091e79b8,0);
    lVar3 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar3 + 0x440) = lVar5;
    thunk_FUN_03f5d7b8(lVar3 + 0x440,lVar5);
  }
  uVar4 = FUN_04b0cafc(uVar4,lVar5,DAT_091cb610);
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424(DAT_0918f298);
  }
  puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar5 = puVar2[0x89];
  if (lVar5 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
      puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar6 = *puVar2;
    lVar5 = thunk_FUN_03f9944c(DAT_09179380);
    FUN_05324070(lVar5,uVar6,DAT_091e79c0,0);
    lVar3 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar3 + 0x448) = lVar5;
    thunk_FUN_03f5d7b8(lVar3 + 0x448,lVar5);
  }
  uVar4 = FUN_04afa9b0(uVar4,lVar5,DAT_091ca9f8);
  if ((*(long *)(param_1 + 0x180) != 0) &&
     (lVar5 = *(long *)(*(long *)(param_1 + 0x180) + 0x48), lVar5 != 0)) {
    if ((*(char *)(lVar5 + 0x11) == '\0') &&
       (uVar1 = CookingGraph_CookingLevelSimulation__get_UrgentFirst(param_1), (uVar1 & 1) == 0)) {
      return uVar4;
    }
    uVar6 = thunk_FUN_03f9944c(DAT_09178300);
    FUN_0530e39c(uVar6,param_1,DAT_091c67c0,0);
    uVar4 = FUN_04aea5a4(uVar4,uVar6,DAT_091c9fa8);
    uVar6 = thunk_FUN_03f9944c(DAT_09178308);
    FUN_0530e450(uVar6,param_1,DAT_091c67c8,0);
    uVar4 = FUN_04b030ec(uVar4,uVar6,DAT_091cac18);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar5 = puVar2[0x8a];
    if (lVar5 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar6 = *puVar2;
      lVar5 = thunk_FUN_03f9944c(DAT_09178308);
      FUN_0530e450(lVar5,uVar6,DAT_091e79c8,0);
      lVar3 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar3 + 0x450) = lVar5;
      thunk_FUN_03f5d7b8(lVar3 + 0x450,lVar5);
    }
    uVar4 = FUN_04b030ec(uVar4,lVar5,DAT_091cac18);
    uVar6 = thunk_FUN_03f9944c(DAT_09178308);
    FUN_0530e450(uVar6,param_1,DAT_091c67d0,0);
    uVar4 = FUN_04b030ec(uVar4,uVar6,DAT_091cac18);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f298);
    }
    puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar5 = puVar2[0x8b];
    if (lVar5 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f298);
        puVar2 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar6 = *puVar2;
      lVar5 = thunk_FUN_03f9944c(DAT_09178308);
      FUN_0530e450(lVar5,uVar6,DAT_091e79d0,0);
      lVar3 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar3 + 0x458) = lVar5;
      thunk_FUN_03f5d7b8(lVar3 + 0x458,lVar5);
    }
    uVar4 = FUN_04b030ec(uVar4,lVar5,DAT_091cac18);
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

