// rea decompile_all
// name: CakeOrder.Shop.UICookOrderShop.<>c__DisplayClass54_0$$<ShowElement>g__OnDoneShowBg|0
// address: 0x4367154
// body: available
// range: 0x4367154-0x4367473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4367454 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4367470 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CakeOrder_Shop_UICookOrderShop_<>c__DisplayClass54_0__<ShowElement>g__OnDoneShowBg_0
               (long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  
  if ((DAT_0951787f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b1128);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbcb8);
    FUN_03f5c2a4(&DAT_091dbd10);
    FUN_03f5c2a4(&DAT_091dbe48);
    FUN_03f5c2a4(&DAT_091dbeb0);
    FUN_03f5c2a4(&DAT_091dc028);
    FUN_03f5c2a4(&DAT_091f1270);
    DAT_0951787f = 1;
  }
  lVar7 = *(long *)(param_1 + 0x10);
  uVar2 = CakeOrder_Shop_UICookOrderShop_<>c__DisplayClass54_0__<ShowElement>g__IEWaitShowItems_1
                    (param_1);
  if (lVar7 != 0) {
    UnityEngine_MonoBehaviour__StartCoroutine(lVar7,uVar2,0);
    if ((*(long *)(param_1 + 0x10) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0xf0), lVar7 != 0)) {
      uVar2 = UnityEngine_Component__get_transform(lVar7,0);
      if ((*(long *)(param_1 + 0x10) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x108), lVar7 != 0)) {
        uVar2 = DG_Tweening_ShortcutExtensions__DOScale
                          (0x3f800000,*(undefined4 *)(lVar7 + 0x34),uVar2,0);
        uVar2 = FUN_04d95e8c(uVar2,0x1b,DAT_091dbeb0);
        if ((*(long *)(param_1 + 0x10) != 0) &&
           (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x108), lVar7 != 0)) {
          uVar2 = FUN_04d95c7c(*(undefined4 *)(lVar7 + 0x30),uVar2,DAT_091dbe48);
          uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc028);
          uVar3 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar3,param_1,DAT_091f1270,0);
          uVar2 = FUN_04d956bc(uVar2,uVar3,DAT_091dbd10);
          uVar2 = FUN_04d8dd74(uVar2,DAT_091dbcb8);
          lVar7 = DAT_091b1128;
          if ((*(long *)(param_1 + 0x10) != 0) &&
             (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 400), lVar4 != 0)) {
            lVar5 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar5 != 0) {
              uVar1 = *(uint *)(lVar4 + 0x18);
              if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                *puVar6 = uVar2;
                thunk_FUN_03f5d7b8(puVar6);
              }
              else {
                FUN_057e0c68(lVar4,uVar2,
                             *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              lVar7 = *(long *)(param_1 + 0x10);
              if (lVar7 != 0) {
                uVar8 = 0;
                while (lVar4 = *(long *)(lVar7 + 0xe8), lVar4 != 0) {
                  if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar8) {
                    return;
                  }
                  if (*(uint *)(lVar4 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  if (*(long *)(lVar7 + 0x108) == 0) break;
                  uVar2 = DG_Tweening_ShortcutExtensions__DOScale
                                    (0x3f800000,*(undefined4 *)(*(long *)(lVar7 + 0x108) + 0x28),
                                     *(undefined8 *)(lVar4 + uVar8 * 8 + 0x20),0);
                  uVar2 = FUN_04d95e8c(uVar2,0x1b,DAT_091dbeb0);
                  if ((*(long *)(param_1 + 0x10) == 0) ||
                     (lVar7 = *(long *)(*(long *)(param_1 + 0x10) + 0x108), lVar7 == 0)) break;
                  uVar2 = FUN_04d95c7c(*(float *)(lVar7 + 0x20) +
                                       *(float *)(lVar7 + 0x24) * (float)(int)uVar8,uVar2,
                                       DAT_091dbe48);
                  uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc028);
                  uVar2 = FUN_04d8dd74(uVar2,DAT_091dbcb8);
                  lVar7 = DAT_091b1128;
                  if ((*(long *)(param_1 + 0x10) == 0) ||
                     (lVar4 = *(long *)(*(long *)(param_1 + 0x10) + 400), lVar4 == 0)) break;
                  lVar5 = *(long *)(lVar4 + 0x10);
                  *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
                  if (lVar5 == 0) break;
                  uVar1 = *(uint *)(lVar4 + 0x18);
                  if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                    *(uint *)(lVar4 + 0x18) = uVar1 + 1;
                    puVar6 = (undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20);
                    *puVar6 = uVar2;
                    thunk_FUN_03f5d7b8(puVar6);
                  }
                  else {
                    FUN_057e0c68(lVar4,uVar2,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
                  }
                  lVar7 = *(long *)(param_1 + 0x10);
                  uVar8 = uVar8 + 1;
                  if (lVar7 == 0) break;
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

