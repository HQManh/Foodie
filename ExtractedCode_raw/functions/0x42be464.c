// rea decompile_all
// name: CakeOrder.UI.UIPopupNewVersion$$SetRewards
// address: 0x42be464
// body: available
// range: 0x42be464-0x42be7f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42be7a0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42be7d8 to 0x42be844 CakeOrder.UI.UIPopupNewVersion$$ResizeGrid (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupNewVersion__SetRewards(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if ((DAT_09517305 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1490);
    FUN_03f5c2a4(&DAT_091ad640);
    FUN_03f5c2a4(&DAT_091b1498);
    FUN_03f5c2a4(&DAT_091b14a0);
    FUN_03f5c2a4(&DAT_091ad648);
    FUN_03f5c2a4(&DAT_091d4cc8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517305 = 1;
  }
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    if (*(long *)(param_2 + 0x10) != 0) {
      uVar4 = *(undefined4 *)(*(long *)(param_2 + 0x10) + 0x18);
    }
  }
  if (param_1 != 0) {
    uVar9 = *(undefined8 *)(param_1 + 0xe0);
    *(undefined4 *)(param_1 + 0x118) = uVar4;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar5 & 1) != 0) {
      if (*(long *)(param_1 + 0xe0) == 0) goto LAB_042be7a0;
      UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0xe0),0 < *(int *)(param_1 + 0x118),0);
    }
    uVar9 = *(undefined8 *)(param_1 + 0xe8);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Implicit(uVar9,0);
    if ((uVar5 & 1) != 0) {
      if ((*(long *)(param_1 + 0xe8) == 0) ||
         (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0xe8),0), lVar6 == 0))
      goto LAB_042be7a0;
      UnityEngine_GameObject__SetActive(lVar6,0 < *(int *)(param_1 + 0x118),0);
    }
    iVar1 = *(int *)(param_1 + 0x118);
    if (0 < iVar1) {
      iVar8 = 0;
      do {
        lVar6 = *(long *)(param_1 + 0x110);
        if (lVar6 == 0) goto LAB_042be7a0;
        if (*(int *)(lVar6 + 0x18) <= iVar8) {
          if (*(long *)(param_1 + 0xf0) == 0) goto LAB_042be7a0;
          uVar10 = *(undefined8 *)(param_1 + 0xf8);
          uVar9 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xf0),0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar9 = FUN_04c35338(uVar10,uVar9,DAT_091d4cc8);
          lVar3 = DAT_091b1490;
          lVar7 = *(long *)(lVar6 + 0x10);
          *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
          if (lVar7 == 0) goto LAB_042be7a0;
          uVar2 = *(uint *)(lVar6 + 0x18);
          if (uVar2 < *(uint *)(lVar7 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar2 + 1;
            *(undefined8 *)(lVar7 + (long)(int)uVar2 * 8 + 0x20) = uVar9;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar6,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
        }
        if (((*(long *)(param_1 + 0x110) == 0) ||
            (lVar6 = FUN_057e0998(*(long *)(param_1 + 0x110),iVar8,DAT_091b14a0), lVar6 == 0)) ||
           (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0)) goto LAB_042be7a0;
        UnityEngine_GameObject__SetActive(lVar6,1,0);
        if (((*(long *)(param_1 + 0x110) == 0) ||
            (lVar6 = FUN_057e0998(*(long *)(param_1 + 0x110),iVar8,DAT_091b14a0), param_2 == 0)) ||
           (*(long *)(param_2 + 0x10) == 0)) goto LAB_042be7a0;
        uVar11 = *(undefined8 *)(param_1 + 0x100);
        uVar9 = FUN_057e0998(*(long *)(param_2 + 0x10),iVar8,DAT_091ad648);
        uVar4 = CakeOrder_UI_RewardListData__GetRewardAmount(param_2,iVar8);
        uVar10 = CakeOrder_UI_RewardListData__GetIconOverride(param_2,iVar8);
        if (lVar6 == 0) goto LAB_042be7a0;
        CakeOrder_UI_UIItemRewardClaimed__SetUp(lVar6,uVar11,uVar9,uVar4,uVar10);
        if ((*(long *)(param_1 + 0x110) == 0) ||
           (lVar6 = FUN_057e0998(*(long *)(param_1 + 0x110),iVar8,DAT_091b14a0), lVar6 == 0))
        goto LAB_042be7a0;
        CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar6,0);
        iVar1 = *(int *)(param_1 + 0x118);
        iVar8 = iVar8 + 1;
      } while (iVar8 < iVar1);
    }
    lVar6 = *(long *)(param_1 + 0x110);
    while (lVar6 != 0) {
      if (*(int *)(lVar6 + 0x18) <= iVar1) {
        *(bool *)(param_1 + 0x11c) = 0 < *(int *)(param_1 + 0x118);
        if (*(int *)(param_1 + 0x118) < 1) {
          return;
        }
        CakeOrder_UI_UIPopupNewVersion__ResizeGrid(param_1);
        return;
      }
      lVar6 = FUN_057e0998(lVar6,iVar1,DAT_091b14a0);
      if ((lVar6 == 0) || (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0))
      break;
      UnityEngine_GameObject__SetActive(lVar6,0,0);
      iVar1 = iVar1 + 1;
      lVar6 = *(long *)(param_1 + 0x110);
    }
  }
LAB_042be7a0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

