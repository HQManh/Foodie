// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$CompleteTransfer
// address: 0x449c844
// body: available
// range: 0x449c844-0x449cc9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x449cc84 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449cc98 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x449cc9c to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookingGraph_Execution_CookingExecution__CompleteTransfer
               (long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  double dVar9;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  uint uStack_11c;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_100;
  uint uStack_fc;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined4 local_e0;
  uint uStack_dc;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  uint uStack_bc;
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  if ((DAT_095181bd & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c898);
    FUN_03f5c2a4(&DAT_091a8330);
    FUN_03f5c2a4(&DAT_091ac0d8);
    FUN_03f5c2a4(&DAT_091b2428);
    FUN_03f5c2a4(&DAT_091b23f8);
    FUN_03f5c2a4(&DAT_091b2408);
    FUN_03f5c2a4(&DAT_0918efb8);
    FUN_03f5c2a4(&DAT_091b6d60);
    FUN_03f5c2a4(&DAT_0917e138);
    FUN_03f5c2a4(&DAT_091e6d20);
    FUN_03f5c2a4(&DAT_0918ef58);
    DAT_095181bd = 1;
  }
  local_70 = 0;
  uStack_68 = 0;
  local_60 = 0;
  local_b8 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0918ef58);
  uVar5 = System_Object___ctor(lVar4,0);
  if (lVar4 != 0) {
    *(undefined8 *)(lVar4 + 0x10) = param_4;
    uVar5 = System_Guid__op_Inequality
                      (param_2,param_3,*(undefined8 *)(param_1 + 0x70),
                       *(undefined8 *)(param_1 + 0x78),0);
    if ((uVar5 & 1) != 0) {
LAB_0449c95c:
      uVar5 = 0;
LAB_0449cc44:
      if (*(long *)(lVar3 + 0x28) == local_58) {
        return;
      }
      goto LAB_0449cc9c;
    }
    lVar7 = *(long *)(param_1 + 0x38);
    uVar6 = thunk_FUN_03f9944c(DAT_0917e138);
    uVar5 = FUN_05d78cfc(uVar6,lVar4,DAT_091e6d20,0);
    if (lVar7 != 0) {
      lVar4 = FUN_057e1328(lVar7,uVar6,DAT_091b23f8);
      uVar5 = 0;
      if (lVar4 == 0) goto LAB_0449cc44;
      if (*(char *)(lVar4 + 0x88) == '\0') goto LAB_0449c95c;
      CookingGraph_Execution_CookingExecution__RemoveSource(param_1,lVar4);
      uVar5 = 0;
      if (*(long *)(param_1 + 0x38) != 0) {
        FUN_057e2274(*(long *)(param_1 + 0x38),lVar4,DAT_091b2408);
        uVar5 = 0;
        if (*(long *)(param_1 + 0x28) != 0) {
          FUN_053e19f4(*(long *)(param_1 + 0x28),*(undefined8 *)(lVar4 + 0x18),DAT_091a8330);
          CookingGraph_Execution_CookingExecution__PruneWaves(param_1);
          local_c0 = *(undefined4 *)(lVar4 + 0x58);
          uVar1 = *(uint *)(lVar4 + 0x5c);
          uStack_c8 = *(undefined8 *)(lVar4 + 0x50);
          local_d0 = *(undefined8 *)(lVar4 + 0x48);
          uStack_bc = uVar1;
          local_70 = local_d0;
          uStack_68 = uStack_c8;
          local_60 = local_c0;
          CookingGraph_Execution_CookingExecution__Emit
                    (param_1,2,&local_d0,*(undefined8 *)(lVar4 + 0x10));
          uStack_e8 = uStack_68;
          local_f0 = local_70;
          local_e0 = local_60;
          uStack_dc = uVar1;
          uVar5 = CookingGraph_Execution_CookingExecution__TryDish(param_1,&local_f0,&local_b8);
          if ((uVar5 & 1) == 0) {
            uVar5 = 0;
            if (*(long *)(param_1 + 0x10) != 0) {
              uStack_88 = uStack_68;
              local_90 = local_70;
              local_80 = CONCAT44(uVar1,local_60);
              lVar8 = FUN_06e860c0(*(long *)(param_1 + 0x10),&local_90,DAT_0919c898);
              lVar7 = DAT_091ac0d8;
              uVar5 = 0;
              if ((lVar8 != 0) && (uVar5 = *(ulong *)(lVar8 + 0x18), uVar5 != 0)) {
                local_a0 = *(undefined8 *)(lVar4 + 0x28);
                uStack_a8 = *(undefined8 *)(lVar4 + 0x20);
                local_b0 = *(undefined8 *)(lVar4 + 0x18);
                lVar8 = *(long *)(uVar5 + 0x10);
                *(int *)(uVar5 + 0x1c) = *(int *)(uVar5 + 0x1c) + 1;
                if (lVar8 != 0) {
                  uVar2 = *(uint *)(uVar5 + 0x18);
                  if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                    lVar8 = lVar8 + (long)(int)uVar2 * 0x18;
                    *(uint *)(uVar5 + 0x18) = uVar2 + 1;
                    *(undefined8 *)(lVar8 + 0x28) = uStack_a8;
                    *(undefined8 *)(lVar8 + 0x20) = local_b0;
                    *(undefined8 *)(lVar8 + 0x30) = local_a0;
                  }
                  else {
                    local_90 = local_b0;
                    uStack_88 = uStack_a8;
                    local_80 = local_a0;
                    FUN_0574825c(uVar5,&local_90,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar7 = *(long *)(param_1 + 0x90);
                  if (lVar7 != 0) {
                    local_80 = *(undefined8 *)(lVar4 + 0x28);
                    uStack_88 = *(undefined8 *)(lVar4 + 0x20);
                    local_90 = *(undefined8 *)(lVar4 + 0x18);
                    uStack_a8 = uStack_68;
                    local_b0 = local_70;
                    local_a0 = CONCAT44(uVar1,local_60);
                    (**(code **)(lVar7 + 0x18))
                              (*(undefined8 *)(lVar7 + 0x40),&local_90,&local_b0,
                               *(undefined8 *)(lVar7 + 0x28));
                  }
                  goto LAB_0449cc40;
                }
              }
            }
          }
          else if ((local_b8 != 0) && (lVar7 = *(long *)(local_b8 + 0x10), lVar7 != 0)) {
            if (*(uint *)(lVar7 + 0x18) <= uVar1) {
              if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              goto LAB_0449cc9c;
            }
            lVar7 = *(long *)(lVar7 + (long)(int)uVar1 * 8 + 0x20);
            if (lVar7 != 0) {
              dVar9 = *(double *)(lVar7 + 0x20);
              if (dVar9 == 0.0) {
                uStack_108 = uStack_68;
                local_110 = local_70;
                local_100 = local_60;
                uStack_fc = uVar1;
                CookingGraph_Execution_CookingExecution__Fill(param_1,&local_110);
LAB_0449cc40:
                uVar5 = 1;
                goto LAB_0449cc44;
              }
              lVar8 = *(long *)(param_1 + 0x48);
              lVar7 = thunk_FUN_03f9944c(DAT_0918efb8);
              uVar5 = System_Object___ctor(lVar7,0);
              if (lVar7 != 0) {
                *(undefined8 *)(lVar7 + 0x18) = uStack_68;
                *(undefined8 *)(lVar7 + 0x10) = local_70;
                *(undefined4 *)(lVar7 + 0x20) = local_60;
                *(uint *)(lVar7 + 0x24) = uVar1;
                uVar5 = thunk_FUN_03f5d7b8(lVar7 + 0x18,0);
                *(double *)(lVar7 + 0x28) = dVar9;
                *(double *)(lVar7 + 0x30) = dVar9;
                if (lVar8 != 0) {
                  FUN_039b0ea8(lVar8,lVar7,DAT_091b2428);
                  uStack_128 = uStack_68;
                  local_130 = local_70;
                  local_120 = local_60;
                  uStack_11c = uVar1;
                  CookingGraph_Execution_CookingExecution__Emit
                            (param_1,3,&local_130,*(undefined8 *)(lVar4 + 0x10));
                  goto LAB_0449cc40;
                }
              }
            }
          }
        }
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0449cc9c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}

