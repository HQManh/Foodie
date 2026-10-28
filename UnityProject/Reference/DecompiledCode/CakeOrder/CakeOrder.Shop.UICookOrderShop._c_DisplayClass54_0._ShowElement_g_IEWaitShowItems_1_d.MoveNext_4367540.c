// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop.<>c__DisplayClass54_0.<<ShowElement>g__IEWaitShowItems|1>d$$MoveNext
// address: 0x4367540
// body: available
// range: 0x4367540-0x43677d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43677d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
CakeOrder_Shop_UICookOrderShop_<>c__DisplayClass54_0_<<ShowElement>g__IEWaitShowItems_1>d__MoveNext
          (long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  
  if ((DAT_09517881 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09183190);
    FUN_03f5c2a4(&DAT_091b1128);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbcc0);
    FUN_03f5c2a4(&DAT_091dc030);
    DAT_09517881 = 1;
  }
  if (1 < *(uint *)(param_1 + 0x10)) {
    return 0;
  }
  lVar8 = *(long *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  if ((lVar8 != 0) && (*(long *)(lVar8 + 0x10) != 0)) {
    if (*(char *)(*(long *)(lVar8 + 0x10) + 0x110) == '\0') {
      *(undefined8 *)(param_1 + 0x18) = 0;
      thunk_FUN_03f5d7b8((undefined8 *)(param_1 + 0x18),0);
      *(undefined4 *)(param_1 + 0x10) = 1;
      return 1;
    }
    CakeOrder_Shop_UICookOrderShop__ShowVisibleCards();
    if (*(long *)(lVar8 + 0x10) != 0) {
      CakeOrder_Shop_UICookOrderShop__OpenOnFocusedSection();
      if ((*(long *)(lVar8 + 0x10) != 0) &&
         (lVar5 = *(long *)(*(long *)(lVar8 + 0x10) + 0x108), lVar5 != 0)) {
        if (*(char *)(lVar5 + 0x58) == '\0') {
          CakeOrder_Shop_UICookOrderShop__SetSectionHeadersAlpha(0x3f800000);
          return 0;
        }
        if (*(int *)(DAT_09183190 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = DG_Tweening_DOTween__Sequence(0);
        if (*(long *)(lVar8 + 0x10) != 0) {
          uVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                            (0x3f800000,0x3e800000,*(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x120),
                             0);
          uVar2 = DG_Tweening_TweenSettingsExtensions__Join(uVar2,uVar3,0);
          if (*(long *)(lVar8 + 0x10) != 0) {
            uVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                              (0x3f800000,0x3e800000,
                               *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x128),0);
            uVar2 = DG_Tweening_TweenSettingsExtensions__Join(uVar2,uVar3,0);
            if (*(long *)(lVar8 + 0x10) != 0) {
              uVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                                (0x3f800000,0x3e800000,
                                 *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x130),0);
              uVar2 = DG_Tweening_TweenSettingsExtensions__Join(uVar2,uVar3,0);
              uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc030);
              uVar2 = FUN_04d8dd74(uVar2,DAT_091dbcc0);
              if (*(long *)(lVar8 + 0x10) != 0) {
                uVar3 = *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x118);
                if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar4 = UnityEngine_Object__op_Implicit(uVar3,0);
                if ((uVar4 & 1) != 0) {
                  if (*(long *)(lVar8 + 0x10) == 0) goto LAB_043677d4;
                  uVar3 = DG_Tweening_DOTweenModuleUI__DOFade
                                    (0x3f800000,0x3e800000,
                                     *(undefined8 *)(*(long *)(lVar8 + 0x10) + 0x118),0);
                  DG_Tweening_TweenSettingsExtensions__Join(uVar2,uVar3,0);
                }
                lVar5 = DAT_091b1128;
                if ((*(long *)(lVar8 + 0x10) != 0) &&
                   (lVar8 = *(long *)(*(long *)(lVar8 + 0x10) + 400), lVar8 != 0)) {
                  lVar6 = *(long *)(lVar8 + 0x10);
                  *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
                  if (lVar6 != 0) {
                    uVar1 = *(uint *)(lVar8 + 0x18);
                    if (uVar1 < *(uint *)(lVar6 + 0x18)) {
                      *(uint *)(lVar8 + 0x18) = uVar1 + 1;
                      puVar7 = (undefined8 *)(lVar6 + (long)(int)uVar1 * 8 + 0x20);
                      *puVar7 = uVar2;
                      thunk_FUN_03f5d7b8(puVar7,uVar2);
                      return 0;
                    }
                    FUN_057e0c68(lVar8,uVar2,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_043677d4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

