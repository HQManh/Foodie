// rea decompile_all
// name: AnhPD.FoodOrder.FlexibleBurgerDisplay$$Display
// address: 0x413c444
// body: available
// range: 0x413c444-0x413c903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x413c790 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_FlexibleBurgerDisplay__Display
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               undefined8 param_5,uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined8 uVar10;
  long lVar11;
  float fVar12;
  float fVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  int local_84;
  
  if ((DAT_0951639b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091820c0);
    FUN_03f5c2a4(&DAT_091a1730);
    FUN_03f5c2a4(&DAT_091a1738);
    FUN_03f5c2a4(&DAT_091a1740);
    FUN_03f5c2a4(&DAT_091aab10);
    FUN_03f5c2a4(&DAT_091aab18);
    FUN_03f5c2a4(&DAT_091b2ae8);
    FUN_03f5c2a4(&DAT_091b2af0);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_091bed58);
    DAT_0951639b = 1;
  }
  local_84 = 0;
  AnhPD_FoodOrder_FlexibleBurgerDisplay__KillAnim(param_4);
  lVar7 = *(long *)(param_4 + 0x80);
  if (lVar7 != 0) {
    iVar9 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar9) {
      System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar9,0);
    }
    AnhPD_FoodOrder_FlexibleBurgerDisplay__HideAllFillings(param_4);
    uVar10 = *(undefined8 *)(param_4 + 0x48);
    if (*(int *)(DAT_091820c0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_BurgerPieceTable__InterleaveFillings(param_5,uVar10);
    if (*(long *)(param_4 + 0x50) != 0) {
      FUN_06f2d49c(*(long *)(param_4 + 0x50),DAT_091a1730);
      lVar7 = *(long *)(param_4 + 0x48);
      *(undefined4 *)(param_4 + 0x58) = 0;
      if (lVar7 != 0) {
        fVar12 = *(float *)(param_4 + 0x3c);
        iVar9 = 0;
        while (iVar9 < *(int *)(lVar7 + 0x18)) {
          uVar2 = FUN_057997e4(lVar7,iVar9,DAT_091b2af0);
          lVar7 = AnhPD_FoodOrder_FlexibleBurgerDisplay__FindFilling(param_4,uVar2);
          if (lVar7 != 0) {
            if (*(long *)(param_4 + 0x50) == 0) goto LAB_0413c790;
            FUN_06f2ec88(*(long *)(param_4 + 0x50),uVar2,&local_84,DAT_091a1738);
            if (*(long *)(param_4 + 0x50) == 0) goto LAB_0413c790;
            FUN_06f2d308(*(long *)(param_4 + 0x50),uVar2,local_84 + 1,DAT_091a1740);
            lVar3 = AnhPD_FoodOrder_FlexibleBurgerDisplay__GetRenderer(param_4,lVar7,local_84);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09188ad0);
            }
            uVar4 = UnityEngine_Object__op_Implicit(lVar3,0);
            if ((uVar4 & 1) != 0) {
              if ((lVar3 == 0) ||
                 (lVar5 = UnityEngine_Component__get_gameObject(lVar3,0), lVar5 == 0))
              goto LAB_0413c790;
              UnityEngine_GameObject__SetActive(lVar5,1,0);
              *(int *)(param_4 + 0x58) = *(int *)(param_4 + 0x58) + 1;
              fVar13 = *(float *)(lVar7 + 0x20);
              lVar5 = UnityEngine_Component__get_transform(lVar3,0);
              if (lVar5 == 0) goto LAB_0413c790;
              uVar2 = UnityEngine_Transform__get_localPosition(lVar5,0);
              lVar5 = UnityEngine_Component__get_transform(lVar3,0);
              if (lVar5 == 0) goto LAB_0413c790;
              fVar12 = fVar12 + fVar13;
              UnityEngine_Transform__set_localPosition(uVar2,fVar12,param_3,lVar5,0);
              lVar11 = *(long *)(param_4 + 0x80);
              uVar10 = UnityEngine_Component__get_transform(lVar3,0);
              local_98 = 0;
              uStack_90 = 0;
              FUN_066d0a08(fVar12,&local_98,uVar10,DAT_091bed58);
              lVar5 = DAT_091aab10;
              if (lVar11 == 0) goto LAB_0413c790;
              lVar8 = *(long *)(lVar11 + 0x10);
              *(int *)(lVar11 + 0x1c) = *(int *)(lVar11 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_0413c790;
              uVar1 = *(uint *)(lVar11 + 0x18);
              if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                *(uint *)(lVar11 + 0x18) = uVar1 + 1;
                puVar6 = (undefined8 *)(lVar8 + 0x20);
                *puVar6 = local_98;
                *(undefined8 *)(lVar8 + 0x28) = uStack_90;
                thunk_FUN_03f5d7b8(puVar6,0);
              }
              else {
                FUN_056c100c(lVar11,local_98,uStack_90,
                             *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              fVar12 = fVar12 + *(float *)(lVar7 + 0x1c) + *(float *)(lVar7 + 0x24);
              UnityEngine_Renderer__set_sortingOrder(lVar3,iVar9,0);
            }
          }
          lVar7 = *(long *)(param_4 + 0x48);
          iVar9 = iVar9 + 1;
          if (lVar7 == 0) goto LAB_0413c790;
        }
        uVar10 = *(undefined8 *)(param_4 + 0x28);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar10,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if ((*(long *)(param_4 + 0x28) != 0) &&
           (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0), lVar7 != 0))
        {
          uVar2 = UnityEngine_Transform__get_localPosition(lVar7,0);
          if (*(long *)(param_4 + 0x28) != 0) {
            fVar13 = *(float *)(param_4 + 0x38);
            lVar7 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0);
            if (lVar7 != 0) {
              fVar12 = fVar12 + fVar13;
              UnityEngine_Transform__set_localPosition(uVar2,fVar12,param_3,lVar7,0);
              if ((*(long *)(param_4 + 0x48) != 0) && (*(long *)(param_4 + 0x28) != 0)) {
                UnityEngine_Renderer__set_sortingOrder
                          (*(long *)(param_4 + 0x28),
                           *(undefined4 *)(*(long *)(param_4 + 0x48) + 0x18),0);
                if ((*(long *)(param_4 + 0x28) != 0) &&
                   (lVar7 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x28),0),
                   lVar7 != 0)) {
                  UnityEngine_GameObject__SetActive(lVar7,param_6 & 1,0);
                  if ((param_6 & 1) == 0) {
                    return;
                  }
                  if (*(long *)(param_4 + 0x28) != 0) {
                    lVar3 = *(long *)(param_4 + 0x80);
                    uVar10 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0);
                    local_98 = 0;
                    uStack_90 = 0;
                    FUN_066d0a08(fVar12,&local_98,uVar10,DAT_091bed58);
                    lVar7 = DAT_091aab10;
                    if (lVar3 != 0) {
                      lVar5 = *(long *)(lVar3 + 0x10);
                      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
                      if (lVar5 != 0) {
                        uVar1 = *(uint *)(lVar3 + 0x18);
                        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
                          lVar5 = lVar5 + (long)(int)uVar1 * 0x10;
                          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
                          puVar6 = (undefined8 *)(lVar5 + 0x20);
                          *puVar6 = local_98;
                          *(undefined8 *)(lVar5 + 0x28) = uStack_90;
                          thunk_FUN_03f5d7b8(puVar6,0);
                          return;
                        }
                        FUN_056c100c(lVar3,local_98,uStack_90,
                                     *(undefined8 *)
                                      (*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
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
LAB_0413c790:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

