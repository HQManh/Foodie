// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingSaveMeBagView$$Render
// address: 0x44debf0
// body: available
// range: 0x44debf0-0x44df06b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44df064 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44df068 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingSaveMeBagView__Render
               (long param_1,long param_2,ulong param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 local_44;
  ulong local_38;
  
  local_44 = param_4;
  local_38 = param_3;
  if ((DAT_09518347 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cd7a0);
    FUN_03f5c2a4(&DAT_091cd7c0);
    FUN_03f5c2a4(&DAT_091cda60);
    FUN_03f5c2a4(&DAT_091cdba8);
    FUN_03f5c2a4(&DAT_09184b68);
    FUN_03f5c2a4(&DAT_091b6fa0);
    FUN_03f5c2a4(&DAT_091b6fb8);
    FUN_03f5c2a4(&DAT_091b6fc0);
    FUN_03f5c2a4(&DAT_091d4bc0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091fc900);
    DAT_09518347 = 1;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
  if ((uVar3 & 1) != 0) {
    lVar7 = *(long *)(param_1 + 0x28);
    uVar6 = System_Int32__ToString(&local_44,0);
    if (lVar7 == 0) goto LAB_044df064;
    UnityEngine_TextMesh__set_text(lVar7,uVar6,0);
    param_3 = local_38;
  }
  lVar7 = DAT_09188ad0;
  if (((param_3 ^ *(ulong *)(param_1 + 0x48)) >> 0x20 != 0) ||
     (((*(ulong *)(param_1 + 0x48) & 0xff) != 0) != ((param_3 & 0xff) != 0))) {
    plVar8 = (long *)(param_1 + 0x40);
    lVar10 = *plVar8;
    *(ulong *)(param_1 + 0x48) = param_3;
    if (*(int *)(lVar7 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(lVar10,0);
    if ((uVar3 & 1) != 0) {
      lVar7 = *plVar8;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      UnityEngine_Object__Destroy(lVar7,0);
    }
    *plVar8 = 0;
    thunk_FUN_03f5d7b8(plVar8,0);
    if ((char)local_38 == '\0') {
      return;
    }
    uVar2 = FUN_05c307a4(&local_38,DAT_091b6fc0);
    if (param_2 == 0) goto LAB_044df064;
    lVar7 = CookOrder_Cooking_Implement_CookingMapPresentation__Art(param_2,uVar2,0);
    if (lVar7 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(lVar7 + 0x18);
    }
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
    if ((uVar3 & 1) == 0) {
      if (lVar7 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(undefined8 *)(lVar7 + 0x20);
      }
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar3 = UnityEngine_Object__op_Implicit(uVar6,0);
      if ((uVar3 & 1) != 0) {
        lVar10 = thunk_FUN_03f9944c(DAT_09184b68);
        UnityEngine_GameObject___ctor(lVar10,DAT_091fc900,0);
        *plVar8 = lVar10;
        thunk_FUN_03f5d7b8(plVar8,lVar10);
        if ((*plVar8 == 0) ||
           (lVar10 = UnityEngine_GameObject__get_transform(*plVar8,0), lVar10 == 0))
        goto LAB_044df064;
        UnityEngine_Transform__SetParent(lVar10,*(undefined8 *)(param_1 + 0x20),0,0);
        if ((*(long *)(param_1 + 0x40) == 0) ||
           ((lVar10 = FUN_04b7c294(*(long *)(param_1 + 0x40),DAT_091cd7c0), lVar7 == 0 ||
            (lVar10 == 0)))) goto LAB_044df064;
        UnityEngine_SpriteRenderer__set_sprite(lVar10,*(undefined8 *)(lVar7 + 0x20),0);
      }
    }
    else {
      if (lVar7 == 0) goto LAB_044df064;
      uVar6 = *(undefined8 *)(lVar7 + 0x18);
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar7 = FUN_04c35338(uVar6,uVar9,DAT_091d4bc0);
      *plVar8 = lVar7;
      thunk_FUN_03f5d7b8(plVar8,lVar7);
    }
    lVar7 = *plVar8;
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar3 = UnityEngine_Object__op_Implicit(lVar7,0);
    if ((uVar3 & 1) != 0) {
      if (*plVar8 != 0) {
        lVar7 = UnityEngine_GameObject__get_transform(*plVar8,0);
        if (DAT_09515ce6 == '\0') {
          FUN_03f5c2a4(&DAT_0918cbd0);
          DAT_09515ce6 = '\x01';
        }
        if (lVar7 != 0) {
          puVar5 = *(undefined4 **)(DAT_0918cbd0 + 0xb8);
          fVar12 = (float)puVar5[1];
          fVar13 = (float)puVar5[2];
          UnityEngine_Transform__set_localPosition(*puVar5,fVar12,fVar13,lVar7,0);
          if ((*plVar8 != 0) &&
             (lVar7 = UnityEngine_GameObject__get_transform(*plVar8,0), lVar7 != 0)) {
            fVar11 = (float)UnityEngine_Transform__get_localScale(lVar7,0);
            fVar14 = *(float *)(param_1 + 0x30);
            UnityEngine_Transform__set_localScale
                      (fVar11 * fVar14,fVar12 * fVar14,fVar13 * fVar14,lVar7,0);
            if ((*(long *)(param_1 + 0x40) != 0) &&
               (lVar7 = FUN_04b7ceb4(*(long *)(param_1 + 0x40),1,DAT_091cdba8), lVar7 != 0)) {
              uVar1 = *(uint *)(lVar7 + 0x18);
              if (0 < (int)uVar1) {
                lVar10 = 0;
                do {
                  if (uVar1 <= (uint)lVar10) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c558();
                  }
                  lVar4 = *(long *)(lVar7 + 0x20 + lVar10 * 8);
                  if (lVar4 == 0) goto LAB_044df064;
                  UnityEngine_Behaviour__set_enabled(lVar4,0,0);
                  uVar1 = *(uint *)(lVar7 + 0x18);
                  lVar10 = lVar10 + 1;
                } while ((int)lVar10 < (int)uVar1);
              }
              if ((*plVar8 != 0) &&
                 ((lVar7 = FUN_04b7c324(*plVar8,DAT_091cda60), lVar7 != 0 ||
                  ((*plVar8 != 0 && (lVar7 = FUN_04b7c294(*plVar8,DAT_091cd7a0), lVar7 != 0)))))) {
                UnityEngine_Rendering_SortingGroup__set_sortingOrder(lVar7,1,0);
                return;
              }
            }
          }
        }
      }
LAB_044df064:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

