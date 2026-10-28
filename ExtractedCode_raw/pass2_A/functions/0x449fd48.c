// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$<ReadSnapshot>b__40_0
// address: 0x449fd48
// body: available
// range: 0x449fd48-0x449ffe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449ffe0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_Execution_CookingExecution__<ReadSnapshot>b__40_0
          (undefined8 param_1,undefined8 *param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  if ((DAT_095181d4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6458);
    FUN_03f5c2a4(&DAT_09182dd0);
    FUN_03f5c2a4(&DAT_091ca3b8);
    FUN_03f5c2a4(&DAT_091cae38);
    FUN_03f5c2a4(&DAT_091cb468);
    FUN_03f5c2a4(&DAT_09178768);
    FUN_03f5c2a4(&DAT_09178778);
    FUN_03f5c2a4(&DAT_091a9398);
    FUN_03f5c2a4(&DAT_091a93a0);
    FUN_03f5c2a4(&DAT_091ac108);
    FUN_03f5c2a4(&DAT_091e6c60);
    FUN_03f5c2a4(&DAT_0918ef00);
    DAT_095181d4 = 1;
  }
  local_a0 = param_2[2];
  lVar7 = param_2[3];
  uStack_a8 = param_2[1];
  local_b0 = *param_2;
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if ((lVar7 != 0) && (*(long *)(lVar7 + 0x18) != 0)) {
    uVar1 = *(undefined4 *)(lVar7 + 0x10);
    uVar2 = FUN_0574a164(*(long *)(lVar7 + 0x18),DAT_091ac108);
    if (param_2[3] != 0) {
      uVar6 = *(undefined8 *)(param_2[3] + 0x18);
      uVar3 = thunk_FUN_03f9944c(DAT_09178768);
      FUN_053136a4(uVar3,param_1,DAT_091c6458,0);
      uVar3 = FUN_04b0beec(uVar6,uVar3,DAT_091cb468);
      if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918ef00);
      }
      puVar5 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
      lVar7 = puVar5[2];
      uVar6 = local_a0;
      uVar8 = local_b0;
      uVar9 = uStack_a8;
      if (lVar7 == 0) {
        uStack_88 = uStack_a8;
        local_90 = local_b0;
        local_80 = local_a0;
        if (*(int *)(DAT_0918ef00 + 0xe4) == 0) {
          FUN_03f5c424(DAT_0918ef00);
          puVar5 = *(undefined8 **)(DAT_0918ef00 + 0xb8);
        }
        uVar6 = *puVar5;
        lVar7 = thunk_FUN_03f9944c(DAT_09178778);
        FUN_05313f40(lVar7,uVar6,DAT_091e6c60,0);
        plVar4 = (long *)(*(long *)(DAT_0918ef00 + 0xb8) + 0x10);
        *plVar4 = lVar7;
        thunk_FUN_03f5d7b8(plVar4,lVar7);
        uVar6 = local_80;
        uVar8 = local_90;
        uVar9 = uStack_88;
      }
      local_70 = uVar8;
      uStack_68 = uVar9;
      local_60 = uVar6;
      uVar3 = FUN_04af142c(uVar3,lVar7,DAT_091ca3b8);
      uVar3 = FUN_04b0473c(uVar3,DAT_091cae38);
      uVar6 = thunk_FUN_03f9944c(DAT_09182dd0);
      uStack_c8 = uStack_68;
      local_d0 = local_70;
      local_c0 = local_60;
      CookingGraph_Execution_CookingInventorySnapshot___ctor(uVar6,&local_d0,uVar1,uVar2,uVar3);
      return uVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

