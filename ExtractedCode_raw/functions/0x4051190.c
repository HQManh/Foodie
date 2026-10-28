// rea decompile_all
// name: AllIn1SpriteShader.All1CreateUnifiedOutline$$CreateOutlineSpriteDuplicate
// address: 0x4051190
// body: available
// range: 0x4051190-0x40515ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4051520 to 0x85e8854 UnityEngine.SpriteRenderer$$set_flipY (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40515a8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AllIn1SpriteShader_All1CreateUnifiedOutline__CreateOutlineSpriteDuplicate
               (long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  if ((DAT_09515b0e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd688);
    FUN_03f5c2a4(&DAT_091cd7c0);
    FUN_03f5c2a4(&DAT_091cd978);
    FUN_03f5c2a4(&DAT_091cda68);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09209f60);
    DAT_09515b0e = 1;
  }
  if (param_2 == 0) goto LAB_040515a8;
  lVar3 = FUN_04b7c324(param_2,DAT_091cda68);
  lVar4 = FUN_04b7c324(param_2,DAT_091cd978);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar5 = UnityEngine_Object__op_Inequality(lVar3,0,0);
  if ((uVar5 & 1) == 0) {
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = UnityEngine_Object__op_Inequality(lVar4,0,0);
    if ((uVar5 & 1) == 0) {
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = UnityEngine_Object__op_Equality(lVar3,0,0);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar5 = UnityEngine_Object__op_Equality(lVar4,0,0);
        if ((uVar5 & 1) != 0) {
          plVar10 = (long *)UnityEngine_Component__get_transform(param_1,0);
          if (plVar10 == (long *)0x0) goto LAB_040515a8;
          uVar5 = (**(code **)(*plVar10 + 0x138))
                            (plVar10,*(undefined8 *)(param_1 + 0x28),
                             *(undefined8 *)(*plVar10 + 0x140));
          if ((uVar5 & 1) == 0) {
            return;
          }
        }
      }
      goto LAB_04051278;
    }
    bVar1 = true;
  }
  else {
LAB_04051278:
    bVar1 = false;
  }
  lVar6 = thunk_FUN_03f9944c(DAT_09184b68);
  UnityEngine_GameObject___ctor(lVar6,0);
  uVar7 = UnityEngine_Object__GetName(param_2,0);
  uVar7 = System_String__Concat(uVar7,DAT_09209f60,0);
  if (lVar6 != 0) {
    UnityEngine_Object__SetName(lVar6,uVar7,0);
    lVar8 = UnityEngine_GameObject__get_transform(lVar6,0);
    lVar9 = UnityEngine_GameObject__get_transform(param_2,0);
    if ((lVar9 != 0) && (UnityEngine_Transform__get_position(lVar9,0), lVar8 != 0)) {
      UnityEngine_Transform__set_position(lVar8,0);
      lVar8 = UnityEngine_GameObject__get_transform(lVar6,0);
      lVar9 = UnityEngine_GameObject__get_transform(param_2,0);
      if ((lVar9 != 0) && (UnityEngine_Transform__get_rotation(lVar9,0), lVar8 != 0)) {
        UnityEngine_Transform__set_rotation(lVar8,0);
        lVar8 = UnityEngine_GameObject__get_transform(lVar6,0);
        lVar9 = UnityEngine_GameObject__get_transform(param_2,0);
        if ((lVar9 != 0) && (UnityEngine_Transform__get_lossyScale(lVar9,0), lVar8 != 0)) {
          UnityEngine_Transform__set_localScale(lVar8,0);
          uVar7 = *(undefined8 *)(param_1 + 0x28);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar5 = UnityEngine_Object__op_Equality(uVar7,0,0);
          lVar8 = UnityEngine_GameObject__get_transform(lVar6,0);
          if ((uVar5 & 1) == 0) {
            if (lVar8 == 0) goto LAB_040515a8;
            uVar7 = *(undefined8 *)(param_1 + 0x28);
          }
          else {
            uVar7 = UnityEngine_GameObject__get_transform(param_2,0);
            if (lVar8 == 0) goto LAB_040515a8;
          }
          UnityEngine_Transform__set_parent(lVar8,uVar7,0);
          if (bVar1) {
            plVar10 = (long *)FUN_04b7c294(lVar6,DAT_091cd688);
            if ((lVar4 != 0) && (plVar10 != (long *)0x0)) {
              UnityEngine_UI_Image__set_sprite(plVar10,*(undefined8 *)(lVar4 + 0xd8),0);
                    /* WARNING: Could not recover jumptable at 0x04051464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (**(code **)(*plVar10 + 0x348))
                        (plVar10,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(*plVar10 + 0x350));
              return;
            }
          }
          else {
            lVar4 = FUN_04b7c294(lVar6,DAT_091cd7c0);
            if ((lVar3 != 0) &&
               (uVar7 = UnityEngine_SpriteRenderer__get_sprite(lVar3,0), lVar4 != 0)) {
              UnityEngine_SpriteRenderer__set_sprite(lVar4,uVar7,0);
              UnityEngine_Renderer__set_sortingOrder(lVar4,*(undefined4 *)(param_1 + 0x30),0);
              UnityEngine_Renderer__set_sortingLayerName(lVar4,*(undefined8 *)(param_1 + 0x38),0);
              UnityEngine_Renderer__SetMaterial(lVar4,*(undefined8 *)(param_1 + 0x20),0);
              uVar2 = UnityEngine_SpriteRenderer__get_flipX(lVar3,0);
              UnityEngine_SpriteRenderer__set_flipX(lVar4,uVar2 & 1,0);
              uVar2 = UnityEngine_SpriteRenderer__get_flipY(lVar3,0);
              UnityEngine_SpriteRenderer__set_flipY(lVar4,uVar2 & 1,0);
              return;
            }
          }
        }
      }
    }
  }
LAB_040515a8:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

