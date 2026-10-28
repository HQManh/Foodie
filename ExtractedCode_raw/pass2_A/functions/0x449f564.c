// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$Snapshot
// address: 0x449f564
// body: available
// range: 0x449f564-0x449f73f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449f73c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 CookingGraph_Execution_CookingExecution__Snapshot(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_095181d0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182e78);
    FUN_03f5c2a4(&DAT_091b6fc8);
    DAT_095181d0 = 1;
  }
  local_70 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_b0 = 0;
  local_d0 = 0;
  uStack_e8 = 0;
  local_f0 = 0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_110 = 0;
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x70);
    uVar2 = *(undefined8 *)(param_1 + 0x78);
    uVar4 = *(undefined8 *)(param_2 + 0x10);
    if (*(long *)(param_2 + 0x68) == 0) {
      uStack_f8 = *(undefined8 *)(param_2 + 0x38);
      local_100 = *(undefined8 *)(param_2 + 0x30);
      uStack_e8 = *(undefined8 *)(param_2 + 0x48);
      local_f0 = *(undefined8 *)(param_2 + 0x40);
      uVar5 = 0;
      local_d0 = *(undefined8 *)(param_2 + 0x60);
      uStack_d8 = *(undefined8 *)(param_2 + 0x58);
      local_e0 = *(undefined8 *)(param_2 + 0x50);
      uVar6 = 0;
      uStack_118 = *(undefined8 *)(param_2 + 0x20);
      local_120 = *(undefined8 *)(param_2 + 0x18);
      local_110 = *(undefined8 *)(param_2 + 0x28);
    }
    else {
      uStack_98 = *(undefined8 *)(param_2 + 0x38);
      local_a0 = *(undefined8 *)(param_2 + 0x30);
      uStack_88 = *(undefined8 *)(param_2 + 0x48);
      local_90 = *(undefined8 *)(param_2 + 0x40);
      uStack_78 = *(undefined8 *)(param_2 + 0x58);
      local_80 = *(undefined8 *)(param_2 + 0x50);
      local_70 = *(undefined8 *)(param_2 + 0x60);
      uStack_b8 = *(undefined8 *)(param_2 + 0x20);
      local_c0 = *(undefined8 *)(param_2 + 0x18);
      local_b0 = *(undefined8 *)(param_2 + 0x28);
      local_130 = 0;
      uStack_128 = 0;
      FUN_05c30ed0(&local_130,*(undefined8 *)(*(long *)(param_2 + 0x68) + 0x10),DAT_091b6fc8);
      local_d0 = local_70;
      uStack_f8 = uStack_98;
      local_100 = local_a0;
      uStack_e8 = uStack_88;
      local_f0 = local_90;
      local_110 = local_b0;
      uVar5 = uStack_128;
      uVar6 = local_130;
      local_120 = local_c0;
      uStack_118 = uStack_b8;
      local_e0 = local_80;
      uStack_d8 = uStack_78;
    }
    uVar10 = *(undefined8 *)(param_2 + 0x88);
    uVar9 = *(undefined8 *)(param_2 + 0x80);
    uVar11 = *(undefined8 *)(param_2 + 0x70);
    uVar7 = *(undefined8 *)(param_2 + 0x78);
    uVar8 = *(undefined8 *)(param_2 + 0x90);
    uVar3 = thunk_FUN_03f9944c(DAT_09182e78);
    uStack_148 = uStack_118;
    local_150 = local_120;
    local_140 = local_110;
    uStack_188 = uStack_f8;
    local_190 = local_100;
    uStack_178 = uStack_e8;
    uStack_180 = local_f0;
    uStack_168 = uStack_d8;
    local_170 = local_e0;
    local_160 = local_d0;
    CookingGraph_Execution_CookingTransferSnapshot___ctor
              (uVar11,uVar3,uVar1,uVar2,uVar4,&local_150,&local_190,uVar6,uVar5,uVar7,uVar9,uVar10,
               uVar8);
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

