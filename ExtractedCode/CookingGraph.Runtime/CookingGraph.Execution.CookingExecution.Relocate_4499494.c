// rea decompile_all
// name: CookingGraph.Execution.CookingExecution$$Relocate
// address: 0x4499494
// body: available
// range: 0x4499494-0x449980b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4499808 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CookingGraph_Execution_CookingExecution__Relocate
          (long param_1,undefined8 *param_2,undefined8 *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  if ((DAT_095181b4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c890);
    FUN_03f5c2a4(&DAT_091c9888);
    FUN_03f5c2a4(&DAT_09179320);
    FUN_03f5c2a4(&DAT_091a8318);
    FUN_03f5c2a4(&DAT_091ac0d8);
    FUN_03f5c2a4(&DAT_091ac0f0);
    FUN_03f5c2a4(&DAT_091ac100);
    FUN_03f5c2a4(&DAT_091ac110);
    FUN_03f5c2a4(&DAT_091ac118);
    FUN_03f5c2a4(&DAT_0917df88);
    FUN_03f5c2a4(&DAT_091e6ca8);
    FUN_03f5c2a4(&DAT_091e6cb0);
    FUN_03f5c2a4(&DAT_0918ef18);
    DAT_095181b4 = 1;
  }
  local_90 = 0;
  local_88 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  local_b0 = 0;
  lVar3 = thunk_FUN_03f9944c(DAT_0918ef18);
  System_Object___ctor(lVar3,0);
  if (lVar3 != 0) {
    uVar6 = param_3[1];
    uVar5 = *param_3;
    *(undefined8 *)(lVar3 + 0x20) = param_3[2];
    *(undefined8 *)(lVar3 + 0x18) = uVar6;
    *(undefined8 *)(lVar3 + 0x10) = uVar5;
    thunk_FUN_03f5d7b8(lVar3 + 0x18,0);
    *(undefined8 *)(lVar3 + 0x28) = param_4;
    if (*(long *)(param_1 + 0x28) != 0) {
      uVar4 = FUN_053e1824(*(long *)(param_1 + 0x28),param_4,DAT_091a8318);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
      if (*(long *)(param_1 + 0x10) != 0) {
        uStack_58 = param_2[1];
        local_60 = *param_2;
        local_50 = param_2[2];
        uVar4 = FUN_06e88030(*(long *)(param_1 + 0x10),&local_60,&local_88,DAT_0919c890);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if (*(long *)(param_1 + 0x10) != 0) {
          uStack_c8 = *(undefined8 *)(lVar3 + 0x18);
          local_d0 = *(undefined8 *)(lVar3 + 0x10);
          local_c0 = *(undefined8 *)(lVar3 + 0x20);
          local_60 = local_d0;
          uStack_58 = uStack_c8;
          local_50 = local_c0;
          uVar4 = FUN_06e88030(*(long *)(param_1 + 0x10),&local_60,&local_90,DAT_0919c890);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          if ((local_90 != 0) && (*(long *)(local_90 + 0x18) != 0)) {
            iVar2 = *(int *)(*(long *)(local_90 + 0x18) + 0x18);
            uVar6 = *(undefined8 *)(param_1 + 0x38);
            uVar5 = thunk_FUN_03f9944c(DAT_09179320);
            FUN_05322d94(uVar5,lVar3,DAT_091e6ca8,0);
            iVar1 = FUN_04adc4d0(uVar6,uVar5,DAT_091c9888);
            if (local_90 != 0) {
              if (*(int *)(local_90 + 0x10) <= iVar1 + iVar2) {
                return 0;
              }
              if (local_88 != 0) {
                lVar7 = *(long *)(local_88 + 0x18);
                uVar5 = thunk_FUN_03f9944c(DAT_0917df88);
                FUN_05d75e70(uVar5,lVar3,DAT_091e6cb0,0);
                if (lVar7 != 0) {
                  iVar2 = FUN_05748c68(lVar7,uVar5,DAT_091ac0f0);
                  if (iVar2 < 0) {
                    return 0;
                  }
                  if ((local_88 != 0) && (*(long *)(local_88 + 0x18) != 0)) {
                    FUN_05747eec(&local_60,*(long *)(local_88 + 0x18),iVar2,DAT_091ac118);
                    uStack_a8 = uStack_58;
                    local_b0 = local_60;
                    local_a0 = local_50;
                    if ((local_88 != 0) &&
                       (((*(long *)(local_88 + 0x18) != 0 &&
                         (FUN_05749e28(*(long *)(local_88 + 0x18),iVar2,DAT_091ac100), local_90 != 0
                         )) && (*(long *)(local_90 + 0x18) != 0)))) {
                      uStack_e8 = uStack_a8;
                      local_f0 = local_b0;
                      local_e0 = local_a0;
                      FUN_039b9424(*(long *)(local_90 + 0x18),&local_f0,DAT_091ac0d8);
                      lVar7 = *(long *)(param_1 + 0x90);
                      if (lVar7 != 0) {
                        uStack_78 = *(undefined8 *)(lVar3 + 0x18);
                        local_80 = *(undefined8 *)(lVar3 + 0x10);
                        local_70 = *(undefined8 *)(lVar3 + 0x20);
                        local_50 = local_a0;
                        uStack_58 = uStack_a8;
                        local_60 = local_b0;
                        (**(code **)(lVar7 + 0x18))
                                  (*(undefined8 *)(lVar7 + 0x40),&local_60,&local_80,
                                   *(undefined8 *)(lVar7 + 0x28));
                      }
                      return 1;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

