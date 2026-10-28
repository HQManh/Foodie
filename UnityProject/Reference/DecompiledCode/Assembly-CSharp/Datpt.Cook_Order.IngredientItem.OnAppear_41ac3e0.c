// rea decompile_all
// name: Datpt.Cook_Order.IngredientItem$$OnAppear
// address: 0x41ac3e0
// body: available
// range: 0x41ac3e0-0x41ac68f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ac688 to 0x4d956bc FUN_04d956bc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41ac68c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_IngredientItem__OnAppear(long *param_1,ulong param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if ((DAT_095168be & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d96f0);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbd18);
    FUN_03f5c2a4(&DAT_091dbec0);
    FUN_03f5c2a4(&DAT_091eb988);
    FUN_03f5c2a4(&DAT_09191788);
    DAT_095168be = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09191788);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(long *)(lVar1 + 0x10) = (long)param_1;
    thunk_FUN_03f5d7b8((long *)(lVar1 + 0x10),param_1);
    *(undefined8 *)(lVar1 + 0x18) = param_3;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x18),param_3);
    *(undefined4 *)((long)param_1 + 0x3c) = 0x32;
    if (param_1[10] != 0) {
      UnityEngine_Rendering_SortingGroup__set_sortingOrder(param_1[10],0x32,0);
      lVar2 = UnityEngine_Component__get_transform(param_1,0);
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      if (lVar2 != 0) {
        uVar8 = *(undefined8 *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0xc);
        fVar6 = (float)((ulong)uVar8 >> 0x20) * 0.5;
        UnityEngine_Transform__set_localScale
                  (CONCAT44(fVar6,(float)uVar8 * 0.5),fVar6,
                   *(float *)(*(long *)(DAT_0918cbd0 + 0xb8) + 0x14) * 0.5,lVar2,0);
        lVar2 = Datpt_Cook_Order_SoundControl__get_Ins(0);
        if (lVar2 != 0) {
          FUN_04d59cfc(lVar2,5,0,DAT_091d96f0);
          (**(code **)(*param_1 + 0x428))(param_1,0,*(undefined8 *)(*param_1 + 0x430));
          uVar8 = UnityEngine_Component__get_transform(param_1,0);
          uVar7 = 0x3e4ccccd;
          DG_Tweening_ShortcutExtensions__DOScale(0x3f800000,0x3e4ccccd,uVar8,0);
          if (DAT_09515ce6 == '\0') {
            FUN_03f5c2a4(&DAT_0918cbd0);
            DAT_09515ce6 = '\x01';
          }
          lVar2 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins();
          if ((param_2 & 1) == 0) {
            if (lVar2 == 0) goto LAB_041ac68c;
            uVar5 = Datpt_Cook_Order_CookOrderHelper2D__RandomPosition
                              (*(undefined8 *)(lVar2 + 0x160));
          }
          else {
            lVar3 = UnityEngine_Component__get_transform(param_1,0);
            if ((lVar3 == 0) || (UnityEngine_Transform__get_position(lVar3,0), lVar2 == 0))
            goto LAB_041ac68c;
            uVar5 = Datpt_Cook_Order_CookOrderHelper2D__RandomPositionInHalfNearest
                              (*(undefined8 *)(lVar2 + 0x160));
          }
          uVar8 = UnityEngine_Component__get_transform(param_1,0);
          uVar8 = DG_Tweening_ShortcutExtensions__DOJump
                            (uVar5,uVar7,0,0x3f800000,0x3f000000,uVar8,1,0,0);
          uVar8 = FUN_04d95e8c(uVar8,6,DAT_091dbec0);
          uVar4 = thunk_FUN_03f9944c(DAT_0918c148);
          DG_Tweening_TweenCallback___ctor(uVar4,lVar1,DAT_091eb988,0);
          FUN_04d956bc(uVar8,uVar4,DAT_091dbd18);
          return;
        }
      }
    }
  }
LAB_041ac68c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

