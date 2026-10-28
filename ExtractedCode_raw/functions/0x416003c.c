// rea decompile_all
// name: AnhPD.FoodOrder.SandwichStackDisplay$$Display
// address: 0x416003c
// body: available
// range: 0x416003c-0x416054f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4160548 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416054c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_SandwichStackDisplay__Display
               (undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4,
               undefined8 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  undefined8 local_90;
  undefined8 uStack_88;
  
  if ((DAT_0951652b & 1) == 0) {
    FUN_03f5c2a4(&DAT_091aab10);
    FUN_03f5c2a4(&DAT_091aab18);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_091bed58);
    DAT_0951652b = 1;
  }
  AnhPD_FoodOrder_SandwichStackDisplay__KillAnim(param_4);
  lVar7 = *(long *)(param_4 + 0x68);
  if (lVar7 != 0) {
    iVar2 = *(int *)(lVar7 + 0x18);
    *(undefined4 *)(lVar7 + 0x18) = 0;
    *(int *)(lVar7 + 0x1c) = *(int *)(lVar7 + 0x1c) + 1;
    if (0 < iVar2) {
      System_Array__Clear(*(undefined8 *)(lVar7 + 0x10),0,iVar2,0);
    }
    lVar7 = *(long *)(param_4 + 0x20);
    if (lVar7 != 0) {
      uVar1 = *(uint *)(lVar7 + 0x18);
      if (0 < (int)uVar1) {
        uVar10 = 0;
        do {
          if (uVar1 <= uVar10) goto LAB_0416054c;
          lVar12 = *(long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
          if (lVar12 == 0) goto LAB_04160548;
          uVar9 = *(undefined8 *)(lVar12 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
          if ((uVar4 & 1) != 0) {
            if ((*(long *)(lVar12 + 0x10) == 0) ||
               (lVar12 = UnityEngine_Component__get_gameObject(*(long *)(lVar12 + 0x10),0),
               lVar12 == 0)) goto LAB_04160548;
            UnityEngine_GameObject__SetActive(lVar12,0,0);
          }
          uVar1 = *(uint *)(lVar7 + 0x18);
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < (int)uVar1);
      }
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar2 = AnhPD_FoodOrder_PieceSet__get_Item(param_5,0,0);
      uVar9 = *(undefined8 *)(param_4 + 0x30);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
      }
      uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
      if ((uVar4 & 1) != 0) {
        if ((*(long *)(param_4 + 0x30) == 0) ||
           (lVar7 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x30),0), lVar7 == 0))
        goto LAB_04160548;
        UnityEngine_GameObject__SetActive(lVar7,0 < iVar2,0);
      }
      fVar16 = *(float *)(param_4 + 0x3c);
      *(undefined4 *)(param_4 + 0x40) = 0;
      lVar7 = AnhPD_FoodOrder_SandwichStackDisplay__get_OrderedFillings(param_4);
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar7 + 0x18);
        if ((int)uVar1 < 1) {
          iVar11 = 1;
        }
        else {
          uVar10 = 0;
          iVar11 = 0;
          do {
            if (uVar1 <= uVar10) {
LAB_0416054c:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            lVar12 = *(long *)(lVar7 + (long)(int)uVar10 * 8 + 0x20);
            if (lVar12 == 0) goto LAB_04160548;
            uVar9 = *(undefined8 *)(lVar12 + 0x10);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
            if ((uVar4 & 1) != 0) {
              uVar15 = *(undefined4 *)(lVar12 + 0x18);
              if (*(int *)(DAT_09189158 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_5,uVar15,0);
              if (iVar3 != 0) {
                lVar13 = *(long *)(lVar12 + 0x10);
                if ((lVar13 == 0) ||
                   (lVar5 = UnityEngine_Component__get_gameObject(lVar13,0), lVar5 == 0))
                goto LAB_04160548;
                UnityEngine_GameObject__SetActive(lVar5,1,0);
                *(int *)(param_4 + 0x40) = *(int *)(param_4 + 0x40) + 1;
                fVar17 = *(float *)(lVar12 + 0x20);
                lVar5 = UnityEngine_Component__get_transform(lVar13,0);
                if (lVar5 == 0) goto LAB_04160548;
                uVar15 = UnityEngine_Transform__get_localPosition(lVar5,0);
                lVar5 = UnityEngine_Component__get_transform(lVar13,0);
                if (lVar5 == 0) goto LAB_04160548;
                fVar16 = fVar16 + fVar17;
                UnityEngine_Transform__set_localPosition(uVar15,fVar16,param_3,lVar5,0);
                lVar14 = *(long *)(param_4 + 0x68);
                uVar9 = UnityEngine_Component__get_transform(lVar13,0);
                local_90 = 0;
                uStack_88 = 0;
                FUN_066d0a08(fVar16,&local_90,uVar9,DAT_091bed58);
                lVar5 = DAT_091aab10;
                if (lVar14 == 0) goto LAB_04160548;
                lVar8 = *(long *)(lVar14 + 0x10);
                *(int *)(lVar14 + 0x1c) = *(int *)(lVar14 + 0x1c) + 1;
                if (lVar8 == 0) goto LAB_04160548;
                uVar1 = *(uint *)(lVar14 + 0x18);
                if (uVar1 < *(uint *)(lVar8 + 0x18)) {
                  lVar8 = lVar8 + (long)(int)uVar1 * 0x10;
                  *(uint *)(lVar14 + 0x18) = uVar1 + 1;
                  puVar6 = (undefined8 *)(lVar8 + 0x20);
                  *puVar6 = local_90;
                  *(undefined8 *)(lVar8 + 0x28) = uStack_88;
                  thunk_FUN_03f5d7b8(puVar6,0);
                }
                else {
                  FUN_056c100c(lVar14,local_90,uStack_88,
                               *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                iVar11 = iVar11 + 1;
                fVar16 = fVar16 + *(float *)(lVar12 + 0x1c) + *(float *)(lVar12 + 0x24);
                UnityEngine_Renderer__set_sortingOrder(lVar13,iVar11,0);
              }
            }
            uVar1 = *(uint *)(lVar7 + 0x18);
            uVar10 = uVar10 + 1;
          } while ((int)uVar10 < (int)uVar1);
          iVar11 = iVar11 + 1;
        }
        uVar9 = *(undefined8 *)(param_4 + 0x28);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar4 = UnityEngine_Object__op_Implicit(uVar9,0);
        if ((uVar4 & 1) == 0) {
          return;
        }
        if ((*(long *)(param_4 + 0x28) != 0) &&
           (lVar7 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0), lVar7 != 0))
        {
          uVar15 = UnityEngine_Transform__get_localPosition(lVar7,0);
          if (*(long *)(param_4 + 0x28) != 0) {
            fVar17 = *(float *)(param_4 + 0x38);
            lVar7 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0);
            if (lVar7 != 0) {
              fVar16 = fVar16 + fVar17;
              UnityEngine_Transform__set_localPosition(uVar15,fVar16,param_3,lVar7,0);
              if (*(long *)(param_4 + 0x28) != 0) {
                UnityEngine_Renderer__set_sortingOrder(*(long *)(param_4 + 0x28),iVar11,0);
                if ((*(long *)(param_4 + 0x28) != 0) &&
                   (lVar7 = UnityEngine_Component__get_gameObject(*(long *)(param_4 + 0x28),0),
                   lVar7 != 0)) {
                  UnityEngine_GameObject__SetActive(lVar7,0 < iVar2,0);
                  if (iVar2 < 1) {
                    return;
                  }
                  if (*(long *)(param_4 + 0x28) != 0) {
                    lVar12 = *(long *)(param_4 + 0x68);
                    uVar9 = UnityEngine_Component__get_transform(*(long *)(param_4 + 0x28),0);
                    local_90 = 0;
                    uStack_88 = 0;
                    FUN_066d0a08(fVar16,&local_90,uVar9,DAT_091bed58);
                    lVar7 = DAT_091aab10;
                    if (lVar12 != 0) {
                      lVar13 = *(long *)(lVar12 + 0x10);
                      *(int *)(lVar12 + 0x1c) = *(int *)(lVar12 + 0x1c) + 1;
                      if (lVar13 != 0) {
                        uVar1 = *(uint *)(lVar12 + 0x18);
                        if (uVar1 < *(uint *)(lVar13 + 0x18)) {
                          lVar13 = lVar13 + (long)(int)uVar1 * 0x10;
                          *(uint *)(lVar12 + 0x18) = uVar1 + 1;
                          puVar6 = (undefined8 *)(lVar13 + 0x20);
                          *puVar6 = local_90;
                          *(undefined8 *)(lVar13 + 0x28) = uStack_88;
                          thunk_FUN_03f5d7b8(puVar6,0);
                          return;
                        }
                        FUN_056c100c(lVar12,local_90,uStack_88,
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
LAB_04160548:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

