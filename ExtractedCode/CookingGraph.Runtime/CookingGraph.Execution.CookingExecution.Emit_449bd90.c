// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$Emit
// address: 0x449bd90
// body: available
// range: 0x449bd90-0x449becb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449bec8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__Emit
               (long param_1,undefined4 param_2,undefined8 *param_3,undefined8 param_4)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if ((DAT_095181d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091abf38);
    DAT_095181d2 = 1;
  }
  local_d0 = param_3[2];
  uVar7 = *(undefined8 *)(param_1 + 0x80);
  uStack_f4 = (undefined4)*(ulong *)(param_1 + 0x78);
  uVar2 = *(ulong *)(param_1 + 0x78) >> 0x20;
  uStack_fc = (undefined4)*(undefined8 *)(param_1 + 0x70);
  uStack_f8 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x70) >> 0x20);
  uStack_d8 = param_3[1];
  uVar6 = *param_3;
  lVar5 = *(long *)(param_1 + 0x50);
  local_c8 = 0;
  thunk_FUN_03f5d7b8(&uStack_d8,0);
  lVar3 = DAT_091abf38;
  local_c8 = uVar7;
  if (lVar5 != 0) {
    uStack_b8 = CONCAT44(uStack_f4,uStack_f8);
    local_c0 = CONCAT44(uStack_fc,param_2);
    lVar4 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    uStack_98 = uStack_d8;
    uStack_90 = local_d0;
    uStack_b0 = uVar2;
    uStack_a8 = param_4;
    local_a0 = uVar6;
    uStack_88 = uVar7;
    if (lVar4 != 0) {
      uVar1 = *(uint *)(lVar5 + 0x18);
      if (uVar1 < *(uint *)(lVar4 + 0x18)) {
        lVar4 = lVar4 + (long)(int)uVar1 * 0x40;
        *(uint *)(lVar5 + 0x18) = uVar1 + 1;
        *(undefined8 *)(lVar4 + 0x28) = uStack_b8;
        *(undefined8 *)(lVar4 + 0x20) = local_c0;
        *(undefined8 *)(lVar4 + 0x38) = param_4;
        *(ulong *)(lVar4 + 0x30) = uVar2;
        *(undefined8 *)(lVar4 + 0x48) = uStack_d8;
        *(undefined8 *)(lVar4 + 0x40) = uVar6;
        *(undefined8 *)(lVar4 + 0x58) = uVar7;
        *(undefined8 *)(lVar4 + 0x50) = local_d0;
        thunk_FUN_03f5d7b8(lVar4 + 0x48,0);
      }
      else {
        uStack_58 = uStack_d8;
        uStack_50 = local_d0;
        local_80 = local_c0;
        uStack_78 = uStack_b8;
        uStack_70 = uVar2;
        uStack_68 = param_4;
        local_60 = uVar6;
        uStack_48 = uVar7;
        FUN_0573c8cc(lVar5,&local_80,
                     *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

