// rea decompile_all
// name: FUN_042e7024
// address: 0x42e7024
// body: available
// range: 0x42e7024-0x42e736f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42e736c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_042e7024(ulong param_1)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  int unaff_w19;
  long unaff_x20;
  long unaff_x21;
  undefined8 uVar6;
  long unaff_x23;
  long *unaff_x24;
  undefined8 uVar7;
  long unaff_x26;
  
  if ((param_1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09224f28);
    *(undefined1 *)(unaff_x26 + 0x4d4) = 1;
  }
  uVar3 = System_String__op_Equality();
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_042e736c;
    puVar5 = &DAT_0921a128;
    if (*(int *)(unaff_x20 + 0x48) != unaff_w19) {
      puVar5 = &DAT_09217298;
    }
    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__ChangeItemAmount
              (**(long **)(lVar4 + 0xb8),*(undefined8 *)(unaff_x23 + 0x10),
               *(undefined4 *)(unaff_x23 + 0x18),*puVar5,0,0);
    lVar4 = *(long *)(DAT_091b4b48 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_042e736c;
    CakeOrder_SaveProfile_CakeItemCurrencyDataAccess__SaveData(**(long **)(lVar4 + 0xb8),0);
    lVar4 = *(long *)(DAT_091b4b60 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_042e736c;
    CakeOrder_DataSO_CakeOrderDatabaseSO__GetCurrencyById
              (**(long **)(lVar4 + 0xb8),*(undefined8 *)(unaff_x23 + 0x10),0);
  }
  else {
    iVar1 = *(int *)(unaff_x23 + 0x18);
    lVar4 = *(long *)(*unaff_x24 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_042e736c;
    CakeOrder_HeartSystem_HeartSystemController__ActivateUnlimitedHeart
              (**(long **)(lVar4 + 0xb8),iVar1 * 0x3c,1,0);
    lVar4 = *(long *)(*unaff_x24 + 0x20);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    lVar4 = *(long *)(*(long *)(lVar4 + 0xc0) + 0x10);
    if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
      lVar4 = FUN_03f95a6c();
    }
    if (**(long **)(lVar4 + 0xb8) == 0) goto LAB_042e736c;
  }
  if (unaff_x21 == 0) {
LAB_042e736c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  CakeOrder_UI_RewardListData__AddReward();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar3 & 1) == 0) {
    puVar5 = &DAT_0921a128;
  }
  else {
    if (*(long *)(unaff_x20 + 0x20) == 0) goto LAB_042e736c;
    puVar5 = (undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x18);
  }
  uVar7 = *puVar5;
  uVar6 = *(undefined8 *)(unaff_x23 + 0x10);
  uVar2 = *(undefined4 *)(unaff_x23 + 0x18);
  if (*(int *)(DAT_09182280 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  CakeOrder_CakeOrderDataTracking__TrackLiveOpsInteraction
            (uVar7,DAT_09221b50,unaff_w19,uVar6,uVar2,0);
  if (DAT_095174da == '\0') {
    FUN_03f5c2a4(&DAT_09189248);
    DAT_095174da = '\x01';
  }
  uVar6 = **(undefined8 **)(DAT_09189248 + 0xb8);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Inequality(uVar6,0,0);
  if ((uVar3 & 1) != 0) {
    if (DAT_095174da == '\0') {
      FUN_03f5c2a4(&DAT_09189248);
      DAT_095174da = '\x01';
    }
    if (**(long **)(DAT_09189248 + 0xb8) == 0) goto LAB_042e736c;
    EssentialSystemR1_PlayTimeTracker__SaveTime(**(long **)(DAT_09189248 + 0xb8),0);
  }
  lVar4 = *(long *)(unaff_x20 + 0x78);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),unaff_w19);
  }
  return;
}

