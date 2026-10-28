// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingBurgerDisplay$$Display
// address: 0x44c9244
// body: available
// range: 0x44c9244-0x44c96db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c9568 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void CookOrder_Cooking_Implement_CookingBurgerDisplay__Display
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               undefined8 param_5,uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_84;
  
  if ((DAT_0951829f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a16a0);
    FUN_03f5c2a4(&DAT_091a16a8);
    FUN_03f5c2a4(&DAT_091a16b0);
    FUN_03f5c2a4(&DAT_091aab10);
    FUN_03f5c2a4(&DAT_091aab18);
    FUN_03f5c2a4(&DAT_091b2358);
    FUN_03f5c2a4(&DAT_091b2360);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bed58);
    DAT_0951829f = 1;
  }
  local_84 = 0;
  CookOrder_Cooking_Implement_CookingBurgerDisplay__KillAnim(param_4);
  lVar8 = *(long *)(param_4 + 0x80);
  if (lVar8 != 0) {
    iVar10 = *(int *)(lVar8 + 0x18);
    *(undefined4 *)(lVar8 + 0x18) = 0;
    *(int *)(lVar8 + 0x1c) = *(int *)(lVar8 + 0x1c) + 1;
    if (0 < iVar10) {
      System_Array__Clear(*(undefined8 *)(lVar8 + 0x10),0,iVar10,0);
    }
    CookOrder_Cooking_Implement_CookingBurgerDisplay__HideAllFillings(param_4);
    CookOrder_Cooking_Implement_CookingBurgerArt__InterleaveFillings
              (param_5,*(undefined8 *)(param_4 + 0x48));
    if (*(long *)(param_4 + 0x50) != 0) {
      FUN_06f2d49c(*(long *)(param_4 + 0x50),DAT_091a16a0);
      lVar8 = *(long *)(param_4 + 0x48);
      *(undefined4 *)(param_4 + 0x58) = 0;
      if (lVar8 != 0) {
        fVar12 = *(float *)(param_4 + 0x3c);
        iVar10 = 0;
        while (iVar10 < *(int *)(lVar8 + 0x18)) {
          uVar2 = FUN_057997e4(lVar8,iVar10,DAT_091b2360);
          lVar8 = CookOrder_Cooking_Implement_CookingBurgerDisplay__FindFilling(param_4,uVar2);
          if (lVar8 != 0) {
            if (*(long *)(param_4 + 0x50) == 0) goto LAB_044c9568;
            FUN_06f2ec88(*(long *)(param_4 + 0x50),uVar2,&local_84,DAT_091a16a8);
            if (*(long *)(param_4 + 0x50) == 0) goto LAB_044c9568;
            FUN_06f2d308(*(long *)(param_4 + 0x50),uVar2,local_84 + 1,DAT_091a16b0);
            lVar3 = CookOrder_Cooking_Implement_CookingBurgerDisplay__GetRenderer
                              (param_4,lVar8,local_84);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
            if ((uVar4 & 1) != 0) {
              if ((lVar3 == 0) ||
                 (lVar5 = UnityEngine_Component__get_gameObject(lVar3,0), lVar5 == 0))
              goto LAB_044c9568;
              UnityEngine_GameObject__SetActive(lVar5,1,0);
              *(int *)(param_4 + 0x58) = *(int *)(param_4 + 0x58) + 1;
              fVar13 = *(float *)(lVar8 + 0x20);
              lVar5 = UnityEngine_Component__get_transform(lVar3,0);
              if (lVar5 == 0) goto LAB_044c9568;
              uVar2 = UnityEngine_Transform__get_localPosition(lVar5,0);
              lVar5 = UnityEngine_Component__get_transform(lVar3,0);
              if (lVar5 == 0) goto LAB_044c9568;
              fVar12 = fVar12 + fVar13;
              UnityEngine_Transform__set_localPosition(uVar2,fVar12,param_3,lVar5,0);
              lVar11 = *(long *)(param_4 + 0x80);
              uVar6 = UnityEngine_Component__get_transform(lVar3,0);
              local_98 = 0;
              uStack_90 = 0;
              FUN_066d0a08(fVar12,&local_98,uVar6,DAT_091bed58);
              lVar5 = DAT_091aab10;
              if (lVar11 == 0) goto LAB_044c9568;
              lVar9 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar9 == 0) goto LAB_044c9568;
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar9 + 0x18)) {
                lVar9 = lVar9 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                puVar7 = (undefined8 *)(lVar9 + 0x20);
                *puVar7 = local_98;
                *(undefined8 *)(lVar9 + 0x28) = uStack_90;
                thunk_FUN_03f5d7b8(puVar7,0);
              }
              else {
                FUN_056c100c(lVar11,local_98,uStack_90,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              fVar12 = fVar12 + *(float *)(lVar8 + 0x1c) + *(float *)(lVar8 + 0x24);
              UnityEngine_Renderer__set_sortingOrder(lVar3,iVar10,0);
            }
          }
          lVar8 = *(long *)(param_4 + 0x48);
          iVar10 = iVar10 + 1;
          if (lVar8 == 0) goto LAB_044c9568;
        }
        uVar6 = *(undefined8 *)(param_4 + 0x28);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar6,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if ((*(long *)(param_4 + 0x28) != 0) &&
           (lVar8 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0), lVar8 != 0))
        {
          uVar2 = UnityEngine_Transform__get_localPosition(lVar8,0);
          if (*(long *)(param_4 + 0x28) != 0) {
            fVar13 = *(float *)(param_4 + 0x38);
            lVar8 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0);
            if (lVar8 != 0) {
              fVar12 = fVar12 + fVar13;
              UnityEngine_Transform__set_localPosition(uVar2,fVar12,param_3,lVar8,0);
              if ((*(long *)(param_4 + 0x48) != 0) && (*(long *)(param_4 + 0x28) != 0)) {
                UnityEngine_Renderer__set_sortingOrder
                          (*(long *)(param_4 + 0x28),
                           *(undefined4 *)(*(long *)(param_4 + 0x48) + 0x18),0);
                if ((*(long *)(param_4 + 0x28) != 0) &&
                   (lVar8 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x28),0),
                   lVar8 != 0)) {
                  UnityEngine_GameObject__SetActive(lVar8,param_6 & 1,0);
                  if ((param_6 & 1) == 0) {
                    return;
                  }
                  if (*(long *)(param_4 + 0x28) != 0) {
                    lVar3 = *(long *)(param_4 + 0x80);
                    uVar6 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0);
                    local_98 = 0;
                    uStack_90 = 0;
                    FUN_066d0a08(fVar12,&local_98,uVar6,DAT_091bed58);
                    lVar8 = DAT_091aab10;
                    if (lVar3 != 0) {
                      lVar5 = *(long *)(lVar3 + 0x10);
                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                      if (lVar5 != 0) {
                        uVar1 = *(uint *)(lVar3 + 0x18);
                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                          lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                          puVar7 = (undefined8 *)(lVar5 + 0x20);
                          *puVar7 = local_98;
                          *(undefined8 *)(lVar5 + 0x28) = uStack_90;
                          thunk_FUN_03f5d7b8(puVar7,0);
                          return;
                        }
                        FUN_056c100c(lVar3,local_98,uStack_90,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_044c9568:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

