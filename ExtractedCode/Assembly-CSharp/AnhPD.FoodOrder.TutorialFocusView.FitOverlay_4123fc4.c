// rea decompile_all
// name: AnhPD.FoodOrder.TutorialFocusView$$FitOverlay
// address: 0x4123fc4
// body: available
// range: 0x4123fc4-0x41241fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4124180 to 0x85e7f3c UnityEngine.SpriteRenderer$$set_size (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x41241f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_TutorialFocusView__FitOverlay
               (undefined1 param_1 [16],undefined4 param_2,long param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  undefined1 auStack_58 [24];
  
  if ((DAT_095162bb & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095162bb = 1;
  }
  lVar2 = AnhPD_FoodOrder_TutorialFocusView__get_Cam(param_3);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188ad0);
  }
  uVar3 = UnityEngine_Object__op_Implicit(lVar2,0);
  if ((uVar3 & 1) == 0) {
    return;
  }
  if (lVar2 != 0) {
    uVar3 = UnityEngine_Camera__get_orthographic(lVar2,0);
    if ((uVar3 & 1) == 0) {
      return;
    }
    if (*(long *)(param_3 + 0x20) != 0) {
      uVar4 = UnityEngine_SpriteRenderer__get_sprite(*(long *)(param_3 + 0x20),0);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar4,0);
      if ((uVar3 & 1) == 0) {
        return;
      }
      fVar7 = (float)UnityEngine_Camera__get_orthographicSize(lVar2,0);
      fVar8 = (float)UnityEngine_Camera__get_aspect(lVar2,0);
      if (*(long *)(param_3 + 0x20) != 0) {
        lVar5 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x20),0);
        lVar6 = UnityEngine_Component__get_transform(lVar2,0);
        if (lVar6 != 0) {
          uVar9 = UnityEngine_Transform__get_position(lVar6,0);
          lVar2 = UnityEngine_Component__get_transform(lVar2,0);
          if (lVar2 != 0) {
            UnityEngine_Transform__get_position(lVar2,0);
            if (((*(long *)(param_3 + 0x20) != 0) &&
                (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x20),0),
                lVar2 != 0)) && (UnityEngine_Transform__get_position(lVar2,0), lVar5 != 0)) {
              UnityEngine_Transform__set_position(uVar9,param_2,lVar5,0);
              if (*(long *)(param_3 + 0x20) != 0) {
                fVar8 = (fVar7 + fVar7) * fVar8 * 1.1;
                fVar7 = (fVar7 + fVar7) * 1.1;
                iVar1 = UnityEngine_SpriteRenderer__get_drawMode(*(long *)(param_3 + 0x20),0);
                lVar2 = *(long *)(param_3 + 0x20);
                if (iVar1 == 0) {
                  if ((lVar2 != 0) &&
                     (lVar2 = UnityEngine_SpriteRenderer__get_sprite(lVar2,0), lVar2 != 0)) {
                    UnityEngine_Sprite__get_bounds(auStack_58,lVar2,0);
                    if ((*(long *)(param_3 + 0x20) != 0) &&
                       (lVar2 = UnityEngine_Component__get_transform(*(long *)(param_3 + 0x20),0),
                       lVar2 != 0)) {
                      fVar10 = (float)auStack_58._12_8_ + (float)auStack_58._12_8_;
                      fVar11 = SUB84(auStack_58._12_8_,4) + SUB84(auStack_58._12_8_,4);
                      uVar3 = NEON_fmov(0x3f800000,4);
                      uVar3 = uVar3 ^ (uVar3 ^ CONCAT44(fVar7 / fVar11,fVar8 / fVar10)) &
                                      CONCAT44(-(uint)(0.0 < fVar11),-(uint)(0.0 < fVar10));
                      UnityEngine_Transform__set_localScale(uVar3,uVar3 >> 0x20,0x3f800000,lVar2,0);
                      return;
                    }
                  }
                }
                else if (lVar2 != 0) {
                  UnityEngine_SpriteRenderer__set_size(CONCAT44(fVar7,fVar8),fVar7,lVar2,0);
                  return;
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

