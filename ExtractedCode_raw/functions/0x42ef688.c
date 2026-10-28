// rea decompile_all
// name: CakeOrder.LiveOpsImplement.UIPopup7DayLogin$$BuildRewardViews
// address: 0x42ef688
// body: available
// range: 0x42ef688-0x42ef9f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42ef9ec to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42ef9f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_LiveOpsImplement_UIPopup7DayLogin__BuildRewardViews(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_98;
  long lStack_90;
  undefined8 local_88;
  undefined8 local_80;
  long lStack_78;
  undefined8 local_70;
  
  if ((DAT_095174a7 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_091b3f58);
    FUN_03f5c2a4(&DAT_091b3f50);
    FUN_03f5c2a4(&DAT_0917d850);
    FUN_03f5c2a4(&DAT_091b4970);
    FUN_03f5c2a4(&DAT_091b4b60);
    FUN_03f5c2a4(&DAT_09213e78);
    DAT_095174a7 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917d850);
  FUN_059cc638(lVar3,DAT_091b3f50);
  if ((param_1 != 0) &&
     (lVar4 = CakeOrder_LiveOpsImplement_LiveOpBehavior7DayLogin_RewardMilestone__GetRewards
                        (param_1), lVar4 != 0)) {
    uVar1 = *(uint *)(lVar4 + 0x18);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (uVar1 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar9 = *(long *)(lVar4 + (long)(int)uVar8 * 8 + 0x20);
        if (lVar9 == 0) goto LAB_042ef9ec;
        uVar7 = *(undefined8 *)(lVar9 + 0x10);
        lVar5 = *(long *)(DAT_091b4970 + 0x20);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
        if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
          lVar5 = FUN_03f95a6c();
        }
        if ((**(long **)(lVar5 + 0xb8) == 0) || (*(long *)(**(long **)(lVar5 + 0xb8) + 0x40) == 0))
        goto LAB_042ef9ec;
        if ((DAT_095174d4 & 1) == 0) {
          FUN_03f5c2a4(&DAT_09224f28);
          DAT_095174d4 = 1;
        }
        uVar6 = System_String__op_Equality(uVar7,DAT_09224f28,0);
        if ((uVar6 & 1) == 0) {
          lVar5 = *(long *)(DAT_091b4b60 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_042ef9ec;
          lVar5 = CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
                            (**(long **)(lVar5 + 0xb8),*(undefined8 *)(lVar9 + 0x10),0);
          if (lVar5 == 0) goto LAB_042ef924;
LAB_042ef844:
          local_98 = *(undefined8 *)(lVar9 + 0x10);
          uVar2 = *(undefined4 *)(lVar9 + 0x18);
          lStack_90 = 0;
          local_88 = 0;
          thunk_FUN_03f5d7b8(&local_98);
          lStack_90 = lVar5;
          thunk_FUN_03f5d7b8(&lStack_90,lVar5);
          lVar9 = DAT_091b3f58;
          local_88 = CONCAT44(local_88._4_4_,uVar2);
          if (lVar3 == 0) goto LAB_042ef9ec;
          lVar5 = *(long *)(lVar3 + 0x10);
          *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
          if (lVar5 == 0) goto LAB_042ef9ec;
          uVar1 = *(uint *)(lVar3 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            lVar5 = lVar5 + (long)(int)uVar1 * 0x18;
            *(uint *)(lVar3 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + 0x30) = local_88;
            *(long *)(lVar5 + 0x28) = lStack_90;
            *(undefined8 *)(lVar5 + 0x20) = local_98;
            thunk_FUN_03f5d7b8(lVar5 + 0x20,0);
          }
          else {
            lStack_78 = lStack_90;
            local_80 = local_98;
            local_70 = local_88;
            FUN_059ccf5c(lVar3,&local_80,
                         *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
          }
        }
        else {
          lVar5 = *(long *)(DAT_091b4970 + 0x20);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          lVar5 = *(long *)(*(long *)(lVar5 + 0xc0) + 0x10);
          if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
            lVar5 = FUN_03f95a6c();
          }
          if (**(long **)(lVar5 + 0xb8) == 0) goto LAB_042ef9ec;
          lVar5 = *(long *)(**(long **)(lVar5 + 0xb8) + 0x40);
          if (lVar5 != 0) goto LAB_042ef844;
LAB_042ef924:
          local_80 = CONCAT44(local_80._4_4_,*(undefined4 *)(param_1 + 0x10));
          uVar7 = FUN_03f5c42c(DAT_09535420,&local_80);
          uVar7 = System_String__Format(DAT_09213e78,uVar7,*(undefined8 *)(lVar9 + 0x10),0);
          if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_091835d0);
          }
          UnityEngine_Debug__LogWarning(uVar7,0);
        }
        uVar1 = *(uint *)(lVar4 + 0x18);
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < (int)uVar1);
    }
    return lVar3;
  }
LAB_042ef9ec:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

