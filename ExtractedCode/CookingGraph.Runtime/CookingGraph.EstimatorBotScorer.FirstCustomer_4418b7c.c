// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$FirstCustomer
// address: 0x4418b7c
// body: available
// range: 0x4418b7c-0x4418d9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4418d9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 CookingGraph_EstimatorBotScorer__FirstCustomer(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09517f1d & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9c18);
    FUN_03f5c2a4(&DAT_09178480);
    FUN_03f5c2a4(&DAT_091ab448);
    FUN_03f5c2a4(&DAT_0917bd20);
    FUN_03f5c2a4(&DAT_091e9b80);
    FUN_03f5c2a4(&DAT_091e9b88);
    FUN_03f5c2a4(&DAT_09190660);
    DAT_09517f1d = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar3 = *(long *)(param_1 + 0x58);
  if (lVar3 == 0) {
    lVar3 = thunk_FUN_03f9944c(DAT_0917bd20);
    FUN_057e0400(lVar3,DAT_091ab448);
  }
  if (*(int *)(DAT_09190660 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar2 = *(undefined8 **)(DAT_09190660 + 0xb8);
  lVar4 = puVar2[0xd];
  if (lVar4 == 0) {
    if (*(int *)(DAT_09190660 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar2 = *(undefined8 **)(DAT_09190660 + 0xb8);
    }
    uVar5 = *puVar2;
    lVar4 = thunk_FUN_03f9944c(DAT_09178480);
    FUN_05322d94(lVar4,uVar5,DAT_091e9b80,0);
    plVar1 = (long *)(*(long *)(DAT_09190660 + 0xb8) + 0x68);
    *plVar1 = lVar4;
    thunk_FUN_03f5d7b8(plVar1,lVar4);
  }
  lVar3 = FUN_04ae5fd0(lVar3,lVar4,DAT_091c9c18);
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_1 + 0x58);
    if (lVar3 == 0) {
      lVar3 = thunk_FUN_03f9944c(DAT_0917bd20);
      FUN_057e0400(lVar3,DAT_091ab448);
    }
    if (*(int *)(DAT_09190660 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = *(undefined8 **)(DAT_09190660 + 0xb8);
    lVar4 = puVar2[0xe];
    if (lVar4 == 0) {
      if (*(int *)(DAT_09190660 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar2 = *(undefined8 **)(DAT_09190660 + 0xb8);
      }
      uVar5 = *puVar2;
      lVar4 = thunk_FUN_03f9944c(DAT_09178480);
      FUN_05322d94(lVar4,uVar5,DAT_091e9b88,0);
      plVar1 = (long *)(*(long *)(DAT_09190660 + 0xb8) + 0x70);
      *plVar1 = lVar4;
      thunk_FUN_03f5d7b8(plVar1,lVar4);
    }
    lVar3 = FUN_04ae5fd0(lVar3,lVar4,DAT_091c9c18);
    if (lVar3 == 0) {
      return 0xffffffff;
    }
  }
  return *(undefined4 *)(lVar3 + 0x10);
}

