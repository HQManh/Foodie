// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$SnapshotPlate
// address: 0x44be6bc
// body: available
// range: 0x44be6bc-0x44bebf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bebf0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bebf4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CookOrder_Cooking_Implement_CookingGameplayPresentation__SnapshotPlate
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,long param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  if ((DAT_0951824f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c57e0);
    FUN_03f5c2a4(&DAT_091caec8);
    FUN_03f5c2a4(&DAT_091cb5a8);
    FUN_03f5c2a4(&DAT_09179018);
    FUN_03f5c2a4(&DAT_091cd7a0);
    FUN_03f5c2a4(&DAT_091cd7c0);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091e6fb0);
    FUN_03f5c2a4(&DAT_0918f030);
    FUN_03f5c2a4(&DAT_09208228);
    DAT_0951824f = 1;
  }
  if (param_5 != 0) {
    uVar3 = FUN_04a6abf4(param_5,DAT_091c57e0);
    if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
      FUN_03f5c424(DAT_0918f030);
    }
    puVar10 = *(undefined8 **)(DAT_0918f030 + 0xb8);
    lVar11 = puVar10[0x31];
    if (lVar11 == 0) {
      if (*(int *)(DAT_0918f030 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918f030);
        puVar10 = *(undefined8 **)(DAT_0918f030 + 0xb8);
      }
      uVar12 = *puVar10;
      lVar11 = thunk_FUN_03f9944c(DAT_09179018);
      FUN_05322d94(lVar11,uVar12,DAT_091e6fb0,0);
      lVar8 = *(long *)(DAT_0918f030 + 0xb8);
      *(long *)(lVar8 + 0x188) = lVar11;
      thunk_FUN_03f5d7b8(lVar8 + 0x188,lVar11);
    }
    uVar3 = FUN_04b0cafc(uVar3,lVar11,DAT_091cb5a8);
    lVar11 = FUN_04b049e4(uVar3,DAT_091caec8);
    if (lVar11 != 0) {
      if (*(long *)(lVar11 + 0x18) == 0) {
        return 0;
      }
      lVar8 = thunk_FUN_03f9944c(DAT_09184b68);
      UnityEngine_GameObject___ctor(lVar8,DAT_09208228,0);
      if (lVar8 != 0) {
        lVar4 = UnityEngine_GameObject__get_transform(lVar8,0);
        uVar3 = UnityEngine_Component__get_transform(param_4,0);
        if (lVar4 != 0) {
          UnityEngine_Transform__SetParent(lVar4,uVar3,0,0);
          lVar4 = UnityEngine_GameObject__get_transform(lVar8,0);
          UnityEngine_Transform__get_position(param_5,0);
          if (lVar4 != 0) {
            UnityEngine_Transform__set_position(lVar4,0);
            lVar4 = FUN_04b7c294(lVar8,DAT_091cd7a0);
            if (*(int *)(lVar11 + 0x18) == 0) {
LAB_044bebf4:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            if ((*(long *)(lVar11 + 0x20) != 0) &&
               (uVar1 = UnityEngine_Renderer__get_sortingLayerID(*(long *)(lVar11 + 0x20),0),
               lVar4 != 0)) {
              UnityEngine_Rendering_SortingGroup__set_sortingLayerID(lVar4,uVar1,0);
              if ((*(long *)(param_4 + 0x2e8) != 0) &&
                 (lVar9 = *(long *)(*(long *)(param_4 + 0x2e8) + 0x18), lVar9 != 0)) {
                UnityEngine_Rendering_SortingGroup__set_sortingOrder
                          (lVar4,*(undefined4 *)(lVar9 + 0x40),0);
                uVar2 = *(uint *)(lVar11 + 0x18);
                if ((int)uVar2 < 1) {
                  return lVar8;
                }
                lVar4 = 0;
                while ((uint)lVar4 < uVar2) {
                  lVar9 = *(long *)(lVar11 + 0x20 + lVar4 * 8);
                  if (lVar9 == 0) goto LAB_044bebf0;
                  uVar3 = UnityEngine_Object__GetName(lVar9,0);
                  lVar5 = thunk_FUN_03f9944c(DAT_09184b68);
                  UnityEngine_GameObject___ctor(lVar5,uVar3,0);
                  if ((lVar5 == 0) || (lVar5 = FUN_04b7c294(lVar5,DAT_091cd7c0), lVar5 == 0))
                  goto LAB_044bebf0;
                  lVar6 = UnityEngine_Component__get_transform(lVar5,0);
                  uVar3 = UnityEngine_GameObject__get_transform(lVar8,0);
                  if (lVar6 == 0) goto LAB_044bebf0;
                  UnityEngine_Transform__SetParent(lVar6,uVar3,0,0);
                  lVar6 = UnityEngine_Component__get_transform(lVar5,0);
                  lVar7 = UnityEngine_Component__get_transform(lVar9,0);
                  if ((lVar7 == 0) || (UnityEngine_Transform__get_position(lVar7,0), lVar6 == 0))
                  goto LAB_044bebf0;
                  UnityEngine_Transform__set_position(lVar6,0);
                  lVar6 = UnityEngine_Component__get_transform(lVar5,0);
                  lVar7 = UnityEngine_Component__get_transform(lVar9,0);
                  if ((lVar7 == 0) || (UnityEngine_Transform__get_rotation(lVar7,0), lVar6 == 0))
                  goto LAB_044bebf0;
                  UnityEngine_Transform__set_rotation(lVar6,0);
                  lVar6 = UnityEngine_GameObject__get_transform(lVar8,0);
                  if (lVar6 == 0) goto LAB_044bebf0;
                  fVar13 = (float)UnityEngine_Transform__get_lossyScale(lVar6,0);
                  fVar15 = param_2;
                  fVar16 = param_3;
                  lVar6 = UnityEngine_Component__get_transform(lVar9,0);
                  if (lVar6 == 0) goto LAB_044bebf0;
                  fVar14 = (float)UnityEngine_Transform__get_lossyScale(lVar6,0);
                  lVar6 = UnityEngine_Component__get_transform(lVar5,0);
                  if (lVar6 == 0) goto LAB_044bebf0;
                  param_3 = fVar16 / param_3;
                  param_2 = fVar15 / param_2;
                  UnityEngine_Transform__set_localScale(fVar14 / fVar13,param_2,param_3,lVar6,0);
                  uVar3 = UnityEngine_SpriteRenderer__get_sprite(lVar9,0);
                  UnityEngine_SpriteRenderer__set_sprite(lVar5,uVar3,0);
                  UnityEngine_SpriteRenderer__get_color(lVar9,0);
                  UnityEngine_SpriteRenderer__set_color(lVar5,0);
                  uVar3 = UnityEngine_Renderer__GetSharedMaterial(lVar9,0);
                  UnityEngine_Renderer__SetMaterial(lVar5,uVar3,0);
                  uVar2 = UnityEngine_SpriteRenderer__get_flipX(lVar9,0);
                  UnityEngine_SpriteRenderer__set_flipX(lVar5,uVar2 & 1,0);
                  uVar2 = UnityEngine_SpriteRenderer__get_flipY(lVar9,0);
                  UnityEngine_SpriteRenderer__set_flipY(lVar5,uVar2 & 1,0);
                  uVar1 = UnityEngine_SpriteRenderer__get_drawMode(lVar9,0);
                  UnityEngine_SpriteRenderer__set_drawMode(lVar5,uVar1,0);
                  UnityEngine_SpriteRenderer__get_size(lVar9,0);
                  UnityEngine_SpriteRenderer__set_size(lVar5,0);
                  uVar1 = UnityEngine_Renderer__get_sortingLayerID(lVar9,0);
                  UnityEngine_Renderer__set_sortingLayerID(lVar5,uVar1,0);
                  uVar1 = UnityEngine_Renderer__get_sortingOrder(lVar9,0);
                  UnityEngine_Renderer__set_sortingOrder(lVar5,uVar1,0);
                  uVar2 = *(uint *)(lVar11 + 0x18);
                  lVar4 = lVar4 + 1;
                  if ((int)uVar2 <= (int)lVar4) {
                    return lVar8;
                  }
                }
                goto LAB_044bebf4;
              }
            }
          }
        }
      }
    }
  }
LAB_044bebf0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

