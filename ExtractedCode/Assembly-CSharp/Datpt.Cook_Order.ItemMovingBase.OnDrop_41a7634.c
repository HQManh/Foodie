// rea decompile_all
// name: Datpt.Cook_Order.ItemMovingBase$$OnDrop
// address: 0x41a7634
// body: available
// range: 0x41a7634-0x41a7897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41a7890 to 0x41b1350 Datpt.Cook_Order.LevelControlCookOrder$$DespawnHighlight (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41a7894 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Datpt_Cook_Order_ItemMovingBase__OnDrop
               (undefined1 param_1 [16],undefined1 param_2 [16],float param_3,long param_4)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  if ((DAT_095168d2 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dc028);
    DAT_095168d2 = 1;
  }
  *(undefined1 *)(param_4 + 0x80) = 0;
  uVar2 = UnityEngine_Component__get_transform(param_4,0);
  fVar9 = 0.1;
  uVar2 = DG_Tweening_ShortcutExtensions__DOScale(0x3f800000,uVar2,0);
  FUN_04d9656c(uVar2,0,DAT_091dc028);
  lVar3 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins();
  lVar4 = UnityEngine_Component__get_transform(param_4,0);
  if ((lVar4 != 0) && (UnityEngine_Transform__get_position(lVar4,0), lVar3 != 0)) {
    iVar1 = Datpt_Cook_Order_LevelControlCookOrder__GetHighestLayer(lVar3,param_4);
    if (*(long *)(param_4 + 0x50) != 0) {
      UnityEngine_Rendering_SortingGroup__set_sortingOrder(*(long *)(param_4 + 0x50),iVar1 + 1,0);
      uVar5 = Datpt_Cook_Order_ItemMovingBase__IsOutCamera(param_4);
      if ((uVar5 & 1) != 0) {
        uVar2 = UnityEngine_Component__get_transform(param_4,0);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        pfVar6 = *(float **)(DAT_0918cbd0 + 0xb8);
        fVar10 = *pfVar6;
        fVar11 = pfVar6[1];
        fVar12 = pfVar6[2];
        lVar3 = UnityEngine_Component__get_transform(param_4,0);
        if (lVar3 == 0) goto LAB_041a7894;
        fVar7 = (float)UnityEngine_Transform__get_position(lVar3,0);
        fVar8 = param_3;
        if (DAT_0951690c == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_0951690c = '\x01';
        }
        if (DAT_0951690d == '\0') {
          FUN_03f5c2a4(&DAT_09187e80);
          DAT_0951690d = '\x01';
        }
        fVar10 = fVar10 - fVar7;
        fVar11 = fVar11 - fVar9;
        fVar12 = fVar12 - param_3;
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        fVar7 = 1e-05;
        fVar9 = SQRT(fVar12 * fVar12 + fVar10 * fVar10 + fVar11 * fVar11);
        if (fVar9 <= 1e-05) {
          pfVar6 = *(float **)(DAT_0918cbd0 + 0xb8);
          fVar11 = pfVar6[1];
          fVar12 = pfVar6[2];
          fVar10 = *pfVar6;
        }
        else {
          fVar10 = fVar10 / fVar9;
          fVar11 = fVar11 / fVar9;
          fVar12 = fVar12 / fVar9;
        }
        lVar3 = UnityEngine_Component__get_transform(param_4,0);
        if (lVar3 == 0) goto LAB_041a7894;
        fVar9 = (float)UnityEngine_Transform__get_position(lVar3,0);
        uVar2 = DG_Tweening_ShortcutExtensions__DOMove
                          (fVar10 + fVar9,fVar11 + fVar7,fVar12 + fVar8,0x3dcccccd,uVar2,0,0);
        FUN_04d9656c(uVar2,0,DAT_091dc028);
      }
      MoreMountains_NiceVibrations_MMVibrationManager__Haptic(8,0);
      lVar3 = Datpt_Cook_Order_LevelControlCookOrder__get_Ins();
      if (lVar3 != 0) {
        Datpt_Cook_Order_LevelControlCookOrder__DespawnHighlight();
        return;
      }
    }
  }
LAB_041a7894:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

