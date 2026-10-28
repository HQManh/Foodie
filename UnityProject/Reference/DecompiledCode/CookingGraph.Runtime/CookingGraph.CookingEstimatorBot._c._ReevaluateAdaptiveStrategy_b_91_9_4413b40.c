// rea decompile_all
// name: CookingGraph.CookingEstimatorBot.<>c$$<ReevaluateAdaptiveStrategy>b__91_9
// address: 0x4413b40
// body: available
// range: 0x4413b40-0x4413c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4413c7c to 0x4adc4d0 FUN_04adc4d0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_CookingEstimatorBot_<>c__<ReevaluateAdaptiveStrategy>b__91_9
          (undefined8 param_1,long param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09517ef5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c9800);
    FUN_03f5c2a4(&DAT_091784b0);
    FUN_03f5c2a4(&DAT_091ab4b8);
    FUN_03f5c2a4(&DAT_0917bd38);
    FUN_03f5c2a4(&DAT_091e6b88);
    FUN_03f5c2a4(&DAT_0918eee0);
    DAT_09517ef5 = 1;
  }
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x18);
    if (lVar3 == 0) {
      lVar3 = thunk_FUN_03f9944c(DAT_0917bd38);
      FUN_057e0400(lVar3,DAT_091ab4b8);
    }
    if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar2 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
    lVar4 = puVar2[10];
    if (lVar4 == 0) {
      if (*(int *)(DAT_0918eee0 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar2 = *(undefined8 **)(DAT_0918eee0 + 0xb8);
      }
      uVar5 = *puVar2;
      lVar4 = thunk_FUN_03f9944c(DAT_091784b0);
      FUN_05322d94(lVar4,uVar5,DAT_091e6b88,0);
      plVar1 = (long *)(*(long *)(DAT_0918eee0 + 0xb8) + 0x50);
      *plVar1 = lVar4;
      thunk_FUN_03f5d7b8(plVar1,lVar4);
    }
    uVar5 = FUN_04adc4d0(lVar3,lVar4,DAT_091c9800);
    return uVar5;
  }
  return 0;
}

