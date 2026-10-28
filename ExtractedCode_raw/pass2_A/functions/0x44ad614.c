// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$PlaceHeldOnTool
// address: 0x44ad614
// body: available
// range: 0x44ad614-0x44ad97b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44ad974 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44ad978 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingGameplayPresentation__PlaceHeldOnTool
               (undefined1 param_1 [16],float param_2,float param_3,long param_4,undefined8 param_5,
               long param_6,uint param_7,undefined4 param_8)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  float local_68;
  undefined8 local_58;
  
  if ((DAT_0951821e & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c54d0);
    FUN_03f5c2a4(&DAT_0919e3a0);
    FUN_03f5c2a4(&DAT_0919e3a8);
    FUN_03f5c2a4(&DAT_0919e5b0);
    FUN_03f5c2a4(&DAT_091cd7a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bee98);
    DAT_0951821e = 1;
  }
  local_68 = 0.0;
  local_70 = 0;
  local_58 = 0;
  if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar4 = UnityEngine_Object__op_Implicit(param_6,0);
  if ((int)param_7 < 0) {
    return;
  }
  if ((uVar4 & 1) == 0) {
    return;
  }
  lVar6 = *(long *)(param_4 + 0x1c0);
  if (lVar6 == 0) goto LAB_044ad974;
  if ((int)param_7 < *(int *)(lVar6 + 0x18)) {
    uVar8 = *(undefined8 *)(lVar6 + (ulong)param_7 * 8 + 0x20);
    if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar4 = UnityEngine_Object__op_Implicit(uVar8,0);
    if ((uVar4 & 1) != 0) {
      lVar6 = *(long *)(param_4 + 0x1c0);
      if (lVar6 != 0) {
        if (*(uint *)(lVar6 + 0x18) <= param_7) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = *(long *)(lVar6 + (ulong)param_7 * 8 + 0x20);
        if (((lVar6 != 0) &&
            (lVar5 = CookOrder_Cooking_Implement_CookingToolPresentation__HeldAnchor
                               (lVar6,param_8,0), lVar5 != 0)) &&
           (UnityEngine_Transform__get_position(lVar5,0), param_6 != 0)) {
          UnityEngine_Transform__set_position(param_6,0);
          if (*(long *)(param_4 + 0xb8) != 0) {
            uVar4 = FUN_06f58518(*(long *)(param_4 + 0xb8),param_5,&local_70,DAT_0919e5b0);
            if ((uVar4 & 1) == 0) {
              fVar9 = (float)FUN_0436ebb8(0);
              fVar11 = param_2;
              fVar12 = param_3;
            }
            else {
              fVar9 = (float)local_70;
              fVar11 = local_70._4_4_;
              fVar12 = local_68;
            }
            fVar10 = (float)CookOrder_Cooking_Implement_CookingToolPresentation__HeldScale
                                      (lVar6,param_8,0);
            UnityEngine_Transform__set_localScale
                      (fVar9 * fVar10,fVar11 * param_2,fVar12 * param_3,param_6,0);
            lVar5 = FUN_04a6a14c(param_6,DAT_091c54d0);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar4 = UnityEngine_Object__op_Implicit(lVar5,0);
            if ((uVar4 & 1) == 0) {
              lVar5 = UnityEngine_Component__get_gameObject(param_6,0);
              if (lVar5 == 0) goto LAB_044ad974;
              lVar5 = FUN_04b7c294(lVar5,DAT_091cd7a0);
            }
            if (*(long *)(param_4 + 0xc0) != 0) {
              uVar4 = FUN_06f41c98(*(long *)(param_4 + 0xc0),param_5,DAT_0919e3a8);
              if ((uVar4 & 1) == 0) {
                if (lVar5 == 0) goto LAB_044ad974;
                lVar7 = *(long *)(param_4 + 0xc0);
                uVar1 = UnityEngine_Rendering_SortingGroup__get_sortingLayerID(lVar5,0);
                uVar2 = UnityEngine_Rendering_SortingGroup__get_sortingOrder(lVar5,0);
                local_80 = 0;
                uStack_78 = 0;
                FUN_066eb114(&local_80,lVar5,uVar1,uVar2,DAT_091bee98);
                if (lVar7 == 0) goto LAB_044ad974;
                FUN_06f41a94(lVar7,param_5,local_80,uStack_78,DAT_0919e3a0);
                CookOrder_Cooking_Implement_CookingToolPresentation__HeldSorting
                          (lVar6,param_8,(long)&local_58 + 4,&local_58,0);
              }
              else {
                CookOrder_Cooking_Implement_CookingToolPresentation__HeldSorting
                          (lVar6,param_8,(long)&local_58 + 4,&local_58,0);
                if (lVar5 == 0) goto LAB_044ad974;
              }
              UnityEngine_Rendering_SortingGroup__set_sortingLayerID(lVar5,local_58._4_4_,0);
              UnityEngine_Rendering_SortingGroup__set_sortingOrder(lVar5,local_58 & 0xffffffff,0);
              lVar5 = UnityEngine_Component__get_gameObject(param_6,0);
              uVar3 = CookOrder_Cooking_Implement_CookingToolPresentation__HidesHeldIngredient
                                (lVar6,param_8,0);
              if (lVar5 != 0) {
                UnityEngine_GameObject__SetActive(lVar5,(uVar3 ^ 0xffffffff) & 1,0);
                return;
              }
            }
          }
        }
      }
LAB_044ad974:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  return;
}

