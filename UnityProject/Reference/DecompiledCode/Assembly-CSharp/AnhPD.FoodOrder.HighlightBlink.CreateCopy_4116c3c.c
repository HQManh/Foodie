// rea decompile_all
// name: AnhPD.FoodOrder.HighlightBlink$$CreateCopy
// address: 0x4116c3c
// body: available
// range: 0x4116c3c-0x4116f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4116f18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_HighlightBlink__CreateCopy
               (float param_1,float param_2,long param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if ((DAT_09516238 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd7c0);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09216ea8);
    DAT_09516238 = 1;
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09184b68);
  UnityEngine_GameObject___ctor(lVar4,DAT_09216ea8,0);
  if (((lVar4 != 0) && (lVar5 = FUN_04b7c294(lVar4,DAT_091cd7c0), param_4 != 0)) &&
     (uVar6 = UnityEngine_SpriteRenderer__get_sprite(param_4,0), lVar5 != 0)) {
    UnityEngine_SpriteRenderer__set_sprite(lVar5,uVar6,0);
    uVar1 = UnityEngine_SpriteRenderer__get_flipX(param_4,0);
    UnityEngine_SpriteRenderer__set_flipX(lVar5,uVar1 & 1,0);
    uVar1 = UnityEngine_SpriteRenderer__get_flipY(param_4,0);
    UnityEngine_SpriteRenderer__set_flipY(lVar5,uVar1 & 1,0);
    uVar2 = UnityEngine_SpriteRenderer__get_drawMode(param_4,0);
    UnityEngine_SpriteRenderer__set_drawMode(lVar5,uVar2,0);
    iVar3 = UnityEngine_SpriteRenderer__get_drawMode(param_4,0);
    if (iVar3 != 0) {
      UnityEngine_SpriteRenderer__get_size(param_4,0);
      UnityEngine_SpriteRenderer__set_size(lVar5,0);
    }
    uVar2 = UnityEngine_SpriteRenderer__get_maskInteraction(param_4,0);
    UnityEngine_SpriteRenderer__set_maskInteraction(lVar5,uVar2,0);
    UnityEngine_Renderer__SetMaterial(lVar5,*(undefined8 *)(param_3 + 0x28),0);
    uVar2 = UnityEngine_Renderer__get_sortingLayerID(param_4,0);
    UnityEngine_Renderer__set_sortingLayerID(lVar5,uVar2,0);
    iVar3 = UnityEngine_Renderer__get_sortingOrder(param_4,0);
    UnityEngine_Renderer__set_sortingOrder(lVar5,*(int *)(param_3 + 0x40) + iVar3,0);
    lVar4 = UnityEngine_GameObject__get_transform(lVar4,0);
    uVar6 = UnityEngine_Component__get_transform(param_4,0);
    if (lVar4 != 0) {
      UnityEngine_Transform__SetParent(lVar4,uVar6,0,0);
      if (DAT_09515ce6 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515ce6 = '\x01';
      }
      puVar7 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
      UnityEngine_Transform__set_localPosition(*puVar7,puVar7[1],puVar7[2],lVar4,0);
      if (DAT_09515ed5 == '\0') {
        FUN_03f5c2a4(&DAT_091898c0);
        DAT_09515ed5 = '\x01';
      }
      puVar7 = *(undefined4 **)(DAT_091898c0 + 0xb8);
      UnityEngine_Transform__set_localRotation(*puVar7,puVar7[1],puVar7[2],puVar7[3],lVar4,0);
      if (DAT_09515cf3 == '\0') {
        FUN_03f5c2a4(&DAT_0918cbd0);
        DAT_09515cf3 = '\x01';
      }
      lVar8 = *(long *)(DAT_0918cbd0 + 0xb8);
      fVar10 = *(float *)(lVar8 + 0x10);
      fVar11 = *(float *)(lVar8 + 0x14);
      UnityEngine_Transform__set_localScale(*(undefined4 *)(lVar8 + 0xc),fVar10,fVar11,lVar4,0);
      fVar9 = (float)UnityEngine_Transform__get_position(lVar4,0);
      UnityEngine_Transform__set_position(param_1 + fVar9,param_2 + fVar10,fVar11 + 0.0,lVar4,0);
      return lVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

