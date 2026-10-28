// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$LaneRecipe
// address: 0x44451c0
// body: available
// range: 0x44451c0-0x44453c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44453bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44453c0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__LaneRecipe(long param_1,uint param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_64 [8];
  undefined8 local_5c;
  
  if ((DAT_09518044 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9dc0);
    FUN_03f5c2a4(&DAT_091c9db0);
    FUN_03f5c2a4(&DAT_09179360);
    FUN_03f5c2a4(&DAT_091793e8);
    FUN_03f5c2a4(&DAT_091e76e0);
    FUN_03f5c2a4(&DAT_091e7b80);
    FUN_03f5c2a4(&DAT_0918f378);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518044 = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_0918f378);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass143_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    puVar4 = (undefined8 *)(lVar1 + 0x18);
    *puVar4 = param_3;
    thunk_FUN_03f5d7b8(puVar4,param_3);
    uVar3 = *puVar4;
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar5 = puVar4[0x7e];
    if (lVar5 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar6 = *puVar4;
      lVar5 = thunk_FUN_03f9944c(DAT_091793e8);
      FUN_0532a53c(lVar5,uVar6,DAT_091e76e0,0);
      lVar2 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar2 + 0x3f0) = lVar5;
      thunk_FUN_03f5d7b8(lVar2 + 0x3f0,lVar5);
    }
    FUN_04ae67a8(auStack_64,uVar3,lVar5,DAT_091c9dc0);
    *(undefined8 *)(lVar1 + 0x10) = local_5c;
    if ((*(long *)(param_1 + 0x78) != 0) &&
       (lVar5 = *(long *)(*(long *)(param_1 + 0x78) + 0x30), lVar5 != 0)) {
      if (param_2 < *(uint *)(lVar5 + 0x18)) {
        uVar6 = *(undefined8 *)(lVar5 + (long)(int)param_2 * 8 + 0x20);
        uVar3 = thunk_FUN_03f9944c(DAT_09179360);
        FUN_05322d94(uVar3,lVar1,DAT_091e7b80,0);
        FUN_04ae5fd0(uVar6,uVar3,DAT_091c9db0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

