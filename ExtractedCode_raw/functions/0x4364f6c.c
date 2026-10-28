// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop.<>c__DisplayClass62_0$$<HideElement>g__ShrinkOutBanner|0
// address: 0x4364f6c
// body: available
// range: 0x4364f6c-0x436519f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4365174 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x4365198 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x436519c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UICookOrderShop_<>c__DisplayClass62_0__<HideElement>g__ShrinkOutBanner_0
               (long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  if ((DAT_09517882 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1128);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091dbe70);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dbff0);
    FUN_03f5c2a4(&DAT_091dc028);
    DAT_09517882 = 1;
  }
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(param_2,0);
  if ((uVar3 & 1) != 0) {
    if ((*(long *)(param_1 + 0x10) != 0) && (param_2 != 0)) {
      lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 400);
      uVar4 = UnityEngine_UI_Graphic__get_rectTransform(param_2,0);
      uVar4 = DG_Tweening_ShortcutExtensions__DOScale(0,0x3eb33333,uVar4,0);
      uVar4 = FUN_04d95e8c(uVar4,0x1b,DAT_091dbeb0);
      uVar4 = FUN_04d9656c(uVar4,1,DAT_091dc028);
      lVar2 = DAT_091b1128;
      if (lVar6 != 0) {
        lVar5 = *(long *)(lVar6 + 0x10);
        *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(lVar6 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(lVar6 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(lVar6,uVar4,
                         *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
          }
          if (*(long *)(param_1 + 0x10) != 0) {
            lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 400);
            uVar4 = DG_Tweening_DOTweenModuleUI__DOFade(0,0x3eb33333,param_2,0);
            uVar4 = FUN_04d95e8c(uVar4,6,DAT_091dbe70);
            uVar4 = FUN_04d9656c(uVar4,1,DAT_091dbff0);
            lVar2 = DAT_091b1128;
            if (lVar6 != 0) {
              lVar5 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar5 != 0) {
                uVar1 = *(uint *)(lVar6 + 0x18);
                if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                  *(uint *)(lVar6 + 0x18) = uVar1 + 1;
                  *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar4;
                  thunk_FUN_03f5d7b8();
                  return;
                }
                FUN_057e0c68(lVar6,uVar4,
                             *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
                return;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  return;
}

