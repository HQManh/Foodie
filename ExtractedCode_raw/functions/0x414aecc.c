// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamScoopDisplay$$SetScoops
// address: 0x414aecc
// body: available
// range: 0x414aecc-0x414b2bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414b16c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414b2bc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int AnhPD_FoodOrder_IceCreamScoopDisplay__SetScoops
              (long *param_1,long param_2,undefined8 param_3,long *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  uint uVar6;
  undefined8 *puVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  ulong uVar11;
  int iVar12;
  undefined8 uVar13;
  int iVar14;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0951648f & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917b378);
    FUN_03f5c2a4(&DAT_0917b510);
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_0951648f = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  if (*(int *)(DAT_09189158 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar7 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_78 = puVar7[1];
  local_80 = *puVar7;
  local_70 = puVar7[2];
  if (param_4 != (long *)0x0) {
    iVar12 = 0;
    uVar11 = 0;
    do {
      lVar8 = *param_4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917b378) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0414afe4;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917b378,0);
LAB_0414afe4:
      iVar1 = (*(code *)*puVar7)(param_4,puVar7[1]);
      if (iVar1 <= iVar12) {
        if (param_2 != 0) goto LAB_0414b178;
        goto LAB_0414b16c;
      }
      if (param_2 == 0) goto LAB_0414b16c;
      uVar6 = (uint)uVar11;
      if (*(int *)(param_2 + 0x18) <= (int)uVar6) goto LAB_0414b178;
      lVar8 = *param_4;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917b510) {
            puVar7 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_0414b054;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar7 = (undefined8 *)FUN_03f95da8(param_4,DAT_0917b510,0);
LAB_0414b054:
      uVar2 = (*(code *)*puVar7)(param_4,iVar12,puVar7[1]);
      if (uVar2 < 0x30) {
        if (*(int *)(DAT_09189158 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        iVar1 = AnhPD_FoodOrder_PieceSet__get_Item(&local_80,uVar2,0);
        iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_3,uVar2,0);
        if (iVar1 < iVar3) {
          if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = AnhPD_FoodOrder_IceCreamPieceTable__IsFlavor(uVar2);
          if ((uVar9 & 1) != 0) {
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_PieceSet__Add(&local_98,&local_80,uVar2,1,0);
            uStack_78 = uStack_90;
            local_80 = local_98;
            local_70 = local_88;
            if (*(uint *)(param_2 + 0x18) <= uVar6) goto LAB_0414b2bc;
            uVar13 = *(undefined8 *)(param_2 + (long)(int)uVar6 * 8 + 0x20);
            uVar5 = (**(code **)(*param_1 + 0x1a8))
                              (param_1,uVar11,uVar2,*(undefined8 *)(*param_1 + 0x1b0));
            AnhPD_FoodOrder_IceCreamScoopDisplay__SetScoop(uVar13,uVar5);
            uVar11 = (ulong)(uVar6 + 1);
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while( true );
  }
  uVar11 = 0;
  if (param_2 == 0) {
LAB_0414b16c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
LAB_0414b178:
  iVar12 = 0;
  do {
    uVar6 = *(uint *)(param_2 + 0x18);
    iVar1 = (int)uVar11;
    if ((int)uVar6 <= iVar1) goto LAB_0414b260;
    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = AnhPD_FoodOrder_IceCreamPieceTable__IsFlavor(iVar12);
    if ((uVar9 & 1) != 0) {
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      iVar3 = AnhPD_FoodOrder_PieceSet__get_Item(param_3,iVar12,0);
      iVar4 = AnhPD_FoodOrder_PieceSet__get_Item(&local_80,iVar12,0);
      if (0 < iVar3 - iVar4) {
        iVar14 = (iVar3 - iVar4) + 1;
        uVar11 = (ulong)iVar1;
        do {
          uVar6 = (uint)*(undefined8 *)(param_2 + 0x18);
          if ((long)(int)uVar6 <= (long)uVar11) goto LAB_0414b250;
          if (uVar6 <= (uint)uVar11) goto LAB_0414b2bc;
          uVar13 = *(undefined8 *)(param_2 + 0x20 + uVar11 * 8);
          uVar5 = (**(code **)(*param_1 + 0x1a8))
                            (param_1,uVar11 & 0xffffffff,iVar12,*(undefined8 *)(*param_1 + 0x1b0));
          AnhPD_FoodOrder_IceCreamScoopDisplay__SetScoop(uVar13,uVar5);
          iVar14 = iVar14 + -1;
          uVar11 = uVar11 + 1;
        } while (1 < iVar14);
        uVar11 = (ulong)(uint)((iVar3 + iVar1) - iVar4);
      }
    }
LAB_0414b250:
    iVar1 = (int)uVar11;
    iVar12 = iVar12 + 1;
  } while (iVar12 != 0x30);
  uVar6 = *(uint *)(param_2 + 0x18);
LAB_0414b260:
  uVar11 = (ulong)uVar6;
  if (iVar1 < (int)uVar6) {
    lVar8 = (long)iVar1;
    do {
      if ((uint)uVar11 <= (uint)lVar8) {
LAB_0414b2bc:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      AnhPD_FoodOrder_IceCreamScoopDisplay__SetScoop(*(undefined8 *)(param_2 + 0x20 + lVar8 * 8),0);
      uVar11 = *(ulong *)(param_2 + 0x18);
      lVar8 = lVar8 + 1;
    } while (lVar8 < (int)uVar11);
  }
  return iVar1;
}

