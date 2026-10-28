// rea decompile_all
// name: CakeOrder.UI.UIPopupListRewardClaimed$$SetReward
// address: 0x42bc814
// body: available
// range: 0x42bc814-0x42bcc8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x42bca54 to 0x42bd1c8 CakeOrder.UI.UIPopupListRewardClaimed$$GrowFramesWithGrid (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x42bcc10 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x42bcc88 to 0x42bd2c0 CakeOrder.UI.UIPopupListRewardClaimed$$ResizeGrid (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_UI_UIPopupListRewardClaimed__SetReward(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  int iVar11;
  undefined8 uVar12;
  int iVar13;
  
  if ((DAT_095172f9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c5430);
    FUN_03f5c2a4(&DAT_091b1490);
    FUN_03f5c2a4(&DAT_091ad640);
    FUN_03f5c2a4(&DAT_091b1498);
    FUN_03f5c2a4(&DAT_091b14a0);
    FUN_03f5c2a4(&DAT_091ad648);
    FUN_03f5c2a4(&DAT_091d4cc8);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095172f9 = 1;
  }
  *(long *)(param_1 + 0x180) = param_2;
  thunk_FUN_03f5d7b8(param_1 + 0x180,param_2);
  CakeOrder_UI_UIPopupListRewardClaimed__ApplyTitle(param_1,param_2);
  bVar2 = CakeOrder_UI_UIPopupListRewardClaimed__WantsSingleLayout(param_1,param_2);
  uVar10 = *(undefined8 *)(param_1 + 0x148);
  iVar11 = *(int *)(DAT_09188ad0 + 0xe4);
  *(byte *)(param_1 + 0x168) = bVar2 & 1;
  if (iVar11 == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x148) == 0) goto LAB_042bcc10;
    UnityEngine_GameObject__SetActive
              (*(long *)(param_1 + 0x148),*(char *)(param_1 + 0x168) == '\0',0);
  }
  uVar10 = *(undefined8 *)(param_1 + 0x150);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = UnityEngine_Object__op_Inequality(uVar10,0,0);
  if ((uVar5 & 1) != 0) {
    if (*(long *)(param_1 + 0x150) == 0) goto LAB_042bcc10;
    UnityEngine_GameObject__SetActive(*(long *)(param_1 + 0x150),*(undefined1 *)(param_1 + 0x168),0)
    ;
  }
  if (*(char *)(param_1 + 0x168) == '\0') {
    if (param_2 != 0) {
      lVar6 = *(long *)(param_2 + 0x10);
      if (lVar6 != 0) {
        iVar11 = 0;
        uVar3 = *(undefined4 *)(lVar6 + 0x18);
        do {
          iVar13 = *(int *)(lVar6 + 0x18);
          lVar6 = *(long *)(param_1 + 0x170);
          if (iVar13 <= iVar11) goto LAB_042bcc44;
          if (lVar6 == 0) goto LAB_042bcc10;
          if (*(int *)(lVar6 + 0x18) <= iVar11) {
            if (*(long *)(param_1 + 0xc0) == 0) goto LAB_042bcc10;
            uVar7 = *(undefined8 *)(param_1 + 200);
            uVar10 = UnityEngine_Component__get_transform(*(long *)(param_1 + 0xc0),0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar10 = FUN_04c35338(uVar7,uVar10,DAT_091d4cc8);
            lVar6 = DAT_091b1490;
            lVar8 = *(long *)(param_1 + 0x170);
            if (lVar8 == 0) goto LAB_042bcc10;
            lVar9 = *(long *)(lVar8 + 0x10);
            *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
            if (lVar9 == 0) goto LAB_042bcc10;
            uVar1 = *(uint *)(lVar8 + 0x18);
            if (uVar1 < *(uint *)(lVar9 + 0x18)) {
              *(uint *)(lVar8 + 0x18) = uVar1 + 1;
              *(undefined8 *)(lVar9 + (long)(int)uVar1 * 8 + 0x20) = uVar10;
              thunk_FUN_03f5d7b8();
            }
            else {
              FUN_057e0c68(lVar8,uVar10,
                           *(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
            }
          }
          if (((*(long *)(param_1 + 0x170) == 0) ||
              (lVar6 = FUN_057e0998(*(long *)(param_1 + 0x170),iVar11,DAT_091b14a0), lVar6 == 0)) ||
             (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0))
          goto LAB_042bcc10;
          UnityEngine_GameObject__SetActive(lVar6,1,0);
          if (*(long *)(param_1 + 0x170) == 0) goto LAB_042bcc10;
          lVar6 = FUN_057e0998(*(long *)(param_1 + 0x170),iVar11,DAT_091b14a0);
          if (*(long *)(param_2 + 0x10) == 0) goto LAB_042bcc10;
          uVar12 = *(undefined8 *)(param_1 + 0xd0);
          uVar10 = FUN_057e0998(*(long *)(param_2 + 0x10),iVar11,DAT_091ad648);
          uVar4 = CakeOrder_UI_RewardListData__GetRewardAmount(param_2,iVar11);
          uVar7 = CakeOrder_UI_RewardListData__GetIconOverride(param_2,iVar11);
          if (lVar6 == 0) goto LAB_042bcc10;
          CakeOrder_UI_UIItemRewardClaimed__SetUp(lVar6,uVar12,uVar10,uVar4,uVar7);
          if ((*(long *)(param_1 + 0x170) == 0) ||
             (lVar6 = FUN_057e0998(*(long *)(param_1 + 0x170),iVar11,DAT_091b14a0), lVar6 == 0))
          goto LAB_042bcc10;
          CakeOrder_BaseUI_UIElementAbstract__HideImmediate(lVar6,0);
          lVar6 = *(long *)(param_2 + 0x10);
          iVar11 = iVar11 + 1;
          if (lVar6 == 0) goto LAB_042bcc10;
        } while( true );
      }
      uVar3 = 0;
LAB_042bcc68:
      CakeOrder_UI_UIPopupListRewardClaimed__ResizeGrid(param_1,uVar3);
      return;
    }
  }
  else if (((*(long *)(param_1 + 0x158) != 0) &&
           (lVar6 = UnityEngine_Component__get_gameObject(*(long *)(param_1 + 0x158),0), lVar6 != 0)
           ) && ((UnityEngine_GameObject__SetActive(lVar6,1,0), param_2 != 0 &&
                 (*(long *)(param_2 + 0x10) != 0)))) {
    lVar6 = *(long *)(param_1 + 0x158);
    uVar12 = *(undefined8 *)(param_1 + 0xd0);
    uVar10 = FUN_057e0998(*(long *)(param_2 + 0x10),0,DAT_091ad648);
    uVar3 = CakeOrder_UI_RewardListData__GetRewardAmount(param_2,0);
    uVar7 = CakeOrder_UI_RewardListData__GetIconOverride(param_2,0);
    if (lVar6 != 0) {
      CakeOrder_UI_UIItemRewardClaimed__SetUp(lVar6,uVar12,uVar10,uVar3,uVar7);
      if (*(long *)(param_1 + 0x158) != 0) {
        CakeOrder_BaseUI_UIElementAbstract__HideImmediate(*(long *)(param_1 + 0x158),0);
        *(undefined1 *)(param_1 + 0x178) = 1;
        if (*(long *)(param_1 + 0xc0) != 0) {
          uVar10 = FUN_04a6a14c(*(long *)(param_1 + 0xc0),DAT_091c5430);
          CakeOrder_UI_UIPopupListRewardClaimed__CaptureBaseHeights(param_1,uVar10);
          CakeOrder_UI_UIPopupListRewardClaimed__GrowFramesWithGrid
                    (*(undefined4 *)(param_1 + 0x110),param_1);
          return;
        }
      }
    }
  }
LAB_042bcc10:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
LAB_042bcc44:
  if (lVar6 == 0) goto LAB_042bcc10;
  if (*(int *)(lVar6 + 0x18) <= iVar13) {
    *(undefined1 *)(param_1 + 0x178) = 1;
    goto LAB_042bcc68;
  }
  lVar6 = FUN_057e0998(lVar6,iVar13,DAT_091b14a0);
  if ((lVar6 == 0) || (lVar6 = UnityEngine_Component__get_gameObject(lVar6,0), lVar6 == 0))
  goto LAB_042bcc10;
  UnityEngine_GameObject__SetActive(lVar6,0,0);
  lVar6 = *(long *)(param_1 + 0x170);
  iVar13 = iVar13 + 1;
  goto LAB_042bcc44;
}

