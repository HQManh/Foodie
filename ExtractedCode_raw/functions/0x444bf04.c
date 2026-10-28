// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$RecordAutoComplete
// address: 0x444bf04
// body: available
// range: 0x444bf04-0x444c173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x444c16c to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x444c170 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_CookingLevelSimulation__RecordAutoComplete
               (long param_1,long param_2,undefined4 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if ((DAT_09518005 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ca8);
    FUN_03f5c2a4(&DAT_091c9648);
    FUN_03f5c2a4(&DAT_091c9fe0);
    FUN_03f5c2a4(&DAT_091ca388);
    FUN_03f5c2a4(&DAT_09178638);
    FUN_03f5c2a4(&DAT_09178738);
    FUN_03f5c2a4(&DAT_091e78f0);
    FUN_03f5c2a4(&DAT_091e78f8);
    FUN_03f5c2a4(&DAT_0918f298);
    DAT_09518005 = 1;
  }
  if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
  lVar6 = puVar4[0x26];
  if (lVar6 == 0) {
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    }
    uVar7 = *puVar4;
    lVar6 = thunk_FUN_03f9944c(DAT_09178738);
    FUN_05324070(lVar6,uVar7,DAT_091e78f0,0);
    lVar5 = *(long *)(DAT_0918f298 + 0xb8);
    *(long *)(lVar5 + 0x130) = lVar6;
    thunk_FUN_03f5d7b8(lVar5 + 0x130,lVar6);
  }
  uVar7 = FUN_04af8044(param_5,lVar6,DAT_091ca388);
  uVar7 = FUN_04ad43f0(param_4,uVar7,DAT_091c9648);
  lVar6 = *(long *)(param_1 + 0x178);
  if ((lVar6 != 0) && (param_2 != 0)) {
    uVar3 = *(undefined4 *)(param_2 + 0x10);
    uVar1 = *(undefined8 *)(lVar6 + 0x70);
    uVar2 = *(undefined8 *)(lVar6 + 0x78);
    if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
    lVar6 = puVar4[0x27];
    if (lVar6 == 0) {
      if (*(int *)(DAT_0918f298 + 0xe4) == 0) {
        FUN_03f5c424();
        puVar4 = *(undefined8 **)(DAT_0918f298 + 0xb8);
      }
      uVar8 = *puVar4;
      lVar6 = thunk_FUN_03f9944c(DAT_09178638);
      FUN_053239c8(lVar6,uVar8,DAT_091e78f8,0);
      lVar5 = *(long *)(DAT_0918f298 + 0xb8);
      *(long *)(lVar5 + 0x138) = lVar6;
      thunk_FUN_03f5d7b8(lVar5 + 0x138,lVar6);
    }
    uVar7 = FUN_04aeab54(uVar7,lVar6,DAT_091c9fe0);
    uVar8 = thunk_FUN_03f9944c(DAT_09182ca8);
    CookingGraph_CookingAutoCompleteRecord___ctor(uVar8,uVar1,uVar2,uVar3,param_3,uVar7,0);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x30),uVar8);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

