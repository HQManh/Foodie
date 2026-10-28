// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamScoopOrder$$BuildId
// address: 0x4148640
// body: available
// range: 0x4148640-0x4148a6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4148a6c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IceCreamScoopOrder__BuildId
               (undefined8 param_1,undefined8 param_2,long *param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  ulong uVar9;
  int *piVar10;
  int iVar11;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  ulong local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09516493 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_0917b510);
    FUN_03f5c2a4(&DAT_09186a70);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_0918b348);
    FUN_03f5c2a4(&DAT_091f8e28);
    DAT_09516493 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_90 = 0;
  uStack_a8 = 0;
  local_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0918b348);
  System_Text_StringBuilder___ctor(lVar4,param_1,0);
  if (lVar4 != 0) {
    plVar5 = (long *)System_Text_StringBuilder__Append(lVar4,DAT_091f8e28,0);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09189158);
    }
    AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_d8,param_2,0);
    uStack_a8 = uStack_d0;
    local_b0 = local_d8;
    uStack_98 = uStack_c0;
    uStack_a0 = local_c8;
    local_90 = local_b8;
    while (uVar6 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_b0,0), uVar9 = local_90,
          (uVar6 & 1) != 0) {
      iVar11 = local_90._4_4_;
      if (*(int *)(DAT_09186a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = AnhPD_FoodOrder_IceCreamScoopOrder__IsFlavor(uVar9 & 0xffffffff);
      if (((uVar6 & 1) == 0) && (0 < iVar11)) {
        do {
          uVar7 = AnhPD_FoodOrder_FlexibleDragItem__ConvertIdToString(uVar9 & 0xffffffff,0);
          if (plVar5 == (long *)0x0) goto LAB_04148a6c;
          System_Text_StringBuilder__Append(plVar5,uVar7,0);
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
    }
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    puVar8 = *(undefined8 **)(DAT_09189158 + 0xb8);
    uStack_78 = puVar8[1];
    local_80 = *puVar8;
    local_70 = puVar8[2];
    if (param_3 != (long *)0x0) {
      iVar11 = 0;
      do {
        lVar4 = *param_3;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917b378) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_04148850;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917b378,0);
LAB_04148850:
        iVar1 = (*(code *)*puVar8)(param_3,puVar8[1]);
        if (iVar1 <= iVar11) break;
        lVar4 = *param_3;
        uVar9 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917b510) {
              puVar8 = (undefined8 *)(lVar4 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_041488b0;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar8 = (undefined8 *)FUN_03f95da8(param_3,DAT_0917b510,0);
LAB_041488b0:
        uVar2 = (*(code *)*puVar8)(param_3,iVar11,puVar8[1]);
        if (*(int *)(DAT_09186a70 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09186a70);
        }
        uVar9 = AnhPD_FoodOrder_IceCreamScoopOrder__IsFlavor(uVar2);
        if ((uVar9 & 1) != 0) {
          if (*(int *)(DAT_09189158 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(&local_80,uVar2,0);
          iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_2,uVar2,0);
          if (iVar1 < iVar3) {
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_PieceSet__Add(&local_d8,&local_80,uVar2,1,0);
            uStack_78 = uStack_d0;
            local_80 = local_d8;
            local_70 = local_c8;
            uVar7 = AnhPD_FoodOrder_FlexibleDragItem__ConvertIdToString(uVar2,0);
            if (plVar5 == (long *)0x0) goto LAB_04148a6c;
            System_Text_StringBuilder__Append(plVar5,uVar7,0);
          }
        }
        iVar11 = iVar11 + 1;
      } while( true );
    }
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    AnhPD_FoodOrder_PieceSet__GetEnumerator(&local_d8,param_2,0);
    uStack_a8 = uStack_d0;
    local_b0 = local_d8;
    uStack_98 = uStack_c0;
    uStack_a0 = local_c8;
    local_90 = local_b8;
    while (uVar6 = AnhPD_FoodOrder_PieceSet_Enumerator__MoveNext(&local_b0,0), uVar9 = local_90,
          (uVar6 & 1) != 0) {
      iVar11 = local_90._4_4_;
      if (*(int *)(DAT_09186a70 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = AnhPD_FoodOrder_IceCreamScoopOrder__IsFlavor(uVar9 & 0xffffffff);
      if ((uVar6 & 1) != 0) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(&local_80,uVar9 & 0xffffffff,0);
        iVar1 = iVar11 - iVar3;
        if (iVar1 != 0 && iVar3 <= iVar11) {
          do {
            uVar7 = AnhPD_FoodOrder_FlexibleDragItem__ConvertIdToString(uVar9 & 0xffffffff,0);
            if (plVar5 == (long *)0x0) goto LAB_04148a6c;
            System_Text_StringBuilder__Append(plVar5,uVar7,0);
            iVar1 = iVar1 + -1;
          } while (iVar1 != 0);
        }
      }
    }
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170));
      return;
    }
  }
LAB_04148a6c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

