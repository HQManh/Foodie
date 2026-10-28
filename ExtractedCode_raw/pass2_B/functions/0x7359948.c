// rea decompile_all
// name: LiveOpsR1.LiveOpBehaviorDailyRewardAbstract$$UpdateMilestoneStatus
// address: 0x7359948
// body: available
// range: 0x7359948-0x7359aef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7359ae8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7359aec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__UpdateMilestoneStatus(long *param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  bool bVar7;
  
  if ((DAT_095207fb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09180b28);
    DAT_095207fb = 1;
  }
  if (param_1[5] != 0) {
    uVar1 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    lVar4 = FUN_03f5c394(DAT_09180b28,uVar1);
    iVar2 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
    if (0 < iVar2) {
      uVar6 = 0;
      bVar7 = true;
      do {
        uVar5 = (**(code **)(*param_1 + 0x1c8))
                          (param_1,uVar6 & 0xffffffff,*(undefined8 *)(*param_1 + 0x1d0));
        if ((uVar5 & 1) == 0) {
          uVar5 = LiveOpsR1_LiveOpBehaviorDailyRewardAbstract__IsClaimedToday
                            (param_1,uVar6 & 0xffffffff);
          if ((uVar5 & 1) == 0) {
            if (bVar7) {
              uVar5 = (**(code **)(*param_1 + 0x1e8))
                                (param_1,uVar6 & 0xffffffff,*(undefined8 *)(*param_1 + 0x1f0));
              if ((uVar5 & 1) != 0) {
                if (lVar4 == 0) goto LAB_07359ae8;
                if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_07359aec;
                bVar7 = false;
                uVar3 = 1;
                goto LAB_07359a90;
              }
            }
            if (lVar4 == 0) {
LAB_07359ae8:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            if (*(uint *)(lVar4 + 0x18) <= uVar6) {
LAB_07359aec:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            uVar3 = 0;
            bVar7 = false;
          }
          else {
            if (lVar4 == 0) goto LAB_07359ae8;
            if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_07359aec;
            bVar7 = true;
            uVar3 = 2;
          }
        }
        else {
          uVar3 = (**(code **)(*param_1 + 0x1e8))
                            (param_1,uVar6 & 0xffffffff,*(undefined8 *)(*param_1 + 0x1f0));
          if (lVar4 == 0) goto LAB_07359ae8;
          if (*(uint *)(lVar4 + 0x18) <= uVar6) goto LAB_07359aec;
          uVar3 = uVar3 & 1;
        }
LAB_07359a90:
        *(uint *)(lVar4 + 0x20 + uVar6 * 4) = uVar3;
        uVar6 = uVar6 + 1;
        iVar2 = (**(code **)(*param_1 + 0x1a8))(param_1,*(undefined8 *)(*param_1 + 0x1b0));
      } while ((long)uVar6 < (long)iVar2);
    }
    param_1[6] = lVar4;
    thunk_FUN_03f5d7b8(param_1 + 6,lVar4);
    lVar4 = param_1[7];
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    }
  }
  return;
}

