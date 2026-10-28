// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamPieceTable$$Roll
// address: 0x414a444
// body: available
// range: 0x414a444-0x414aa5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x414aa54 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x414aa58 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IceCreamPieceTable__Roll
               (undefined8 *param_1,int param_2,undefined4 param_3,long param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  long lVar14;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_09516489 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091835d0);
    FUN_03f5c2a4(&DAT_09178aa0);
    FUN_03f5c2a4(&DAT_09186a50);
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_091ad820);
    FUN_03f5c2a4(&DAT_091ad830);
    FUN_03f5c2a4(&DAT_091ad818);
    FUN_03f5c2a4(&DAT_091ad838);
    FUN_03f5c2a4(&DAT_091ad840);
    FUN_03f5c2a4(&DAT_0917c458);
    FUN_03f5c2a4(&DAT_09189158);
    FUN_03f5c2a4(&DAT_091eb448);
    FUN_03f5c2a4(&DAT_091915a0);
    FUN_03f5c2a4(&DAT_09213d80);
    FUN_03f5c2a4(&DAT_0920b6e8);
    FUN_03f5c2a4(&DAT_09213d78);
    DAT_09516489 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  lVar6 = thunk_FUN_03f9944c(DAT_091915a0);
  System_Object___ctor(lVar6,0);
  if (lVar6 == 0) goto LAB_0414aa58;
  plVar13 = (long *)(lVar6 + 0x10);
  *plVar13 = param_4;
  thunk_FUN_03f5d7b8(plVar13,param_4);
  uVar7 = AnhPD_FoodOrder_PieceLookup__get_HasConfig(0);
  if ((uVar7 & 1) == 0) {
    if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    UnityEngine_Debug__LogWarning(DAT_09213d78,0);
    if (*(int *)(DAT_09189158 + 0xe4) == 0) {
      FUN_03f5c424();
    }
  }
  else {
    if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar8 = AnhPD_FoodOrder_IceCreamPieceTable__MainsOf(param_2);
    iVar3 = *(int *)(DAT_09189158 + 0xe4);
    if (lVar8 == 0) {
joined_r0x0414a690:
      if (iVar3 == 0) {
        FUN_03f5c424();
      }
    }
    else {
      if (iVar3 == 0) {
        FUN_03f5c424();
      }
      puVar10 = *(undefined8 **)(DAT_09189158 + 0xb8);
      uStack_78 = puVar10[1];
      local_80 = *puVar10;
      local_70 = puVar10[2];
      if (param_2 == 5) {
        if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar7 = AnhPD_FoodOrder_PieceLookup__Exists(0x12,0);
        iVar3 = *(int *)(DAT_09189158 + 0xe4);
        if ((uVar7 & 1) == 0) goto joined_r0x0414a690;
        if (iVar3 == 0) {
          FUN_03f5c424();
        }
        AnhPD_FoodOrder_PieceSet__One(&local_a0,0x12,0);
        uStack_78 = uStack_98;
        local_80 = local_a0;
        local_70 = local_90;
LAB_0414a720:
        lVar14 = *plVar13;
      }
      else {
        if (param_2 != 4) {
          if (param_2 == 1) {
            if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar7 = AnhPD_FoodOrder_PieceLookup__Exists(0x10,0);
            iVar3 = *(int *)(DAT_09189158 + 0xe4);
            if ((uVar7 & 1) == 0) goto joined_r0x0414a690;
            if (iVar3 == 0) {
              FUN_03f5c424();
            }
            AnhPD_FoodOrder_PieceSet__One(&local_80,0x10,0);
          }
          goto LAB_0414a720;
        }
        lVar14 = thunk_FUN_03f9944c(DAT_09178aa0);
        FUN_05316834(lVar14,lVar6,DAT_091eb448,0);
      }
      lVar6 = thunk_FUN_03f9944c(DAT_0917c458);
      FUN_0579924c(lVar6,DAT_091ad818);
      if (0 < (int)*(ulong *)(lVar8 + 0x18)) {
        uVar7 = 0;
        uVar11 = *(ulong *)(lVar8 + 0x18) & 0xffffffff;
        do {
          if (uVar11 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          uVar4 = *(undefined4 *)(lVar8 + 0x20 + uVar7 * 4);
          if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar11 = AnhPD_FoodOrder_PieceLookup__Exists(uVar4,0);
          if (((uVar11 & 1) != 0) &&
             ((lVar14 == 0 ||
              (uVar11 = (**(code **)(lVar14 + 0x18))
                                  (*(undefined8 *)(lVar14 + 0x40),uVar4,
                                   *(undefined8 *)(lVar14 + 0x28)), (uVar11 & 1) != 0)))) {
            lVar2 = DAT_091ad820;
            if (lVar6 == 0) goto LAB_0414aa58;
            lVar12 = *(long *)(lVar6 + 0x10);
            *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
            if (lVar12 == 0) goto LAB_0414aa58;
            uVar1 = *(uint *)(lVar6 + 0x18);
            if (uVar1 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar6 + 0x18) = uVar1 + 1;
              *(undefined4 *)(lVar12 + (long)(int)uVar1 * 4 + 0x20) = uVar4;
            }
            else {
              FUN_05799adc(lVar6,uVar4,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar11 = (ulong)*(uint *)(lVar8 + 0x18);
          uVar7 = uVar7 + 1;
        } while ((long)uVar7 < (long)(int)*(uint *)(lVar8 + 0x18));
      }
      if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      if (lVar6 == 0) {
LAB_0414aa58:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if ((int)(uint)(param_2 != 5) <= *(int *)(lVar6 + 0x18)) {
        if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        if (param_2 - 1U < 5) {
          iVar3 = *(int *)(&DAT_01a8f6c0 + (ulong)(param_2 - 1U) * 4);
        }
        else {
          iVar3 = 0;
        }
        if (*(int *)(lVar6 + 0x18) <= iVar3) {
          iVar3 = *(int *)(lVar6 + 0x18);
        }
        iVar3 = UnityEngine_Random__Range(param_2 != 5,iVar3 + 1,0);
        if (0 < iVar3) {
          do {
            uVar4 = UnityEngine_Random__Range(0,*(undefined4 *)(lVar6 + 0x18),0);
            uVar5 = FUN_057997e4(lVar6,uVar4,DAT_091ad840);
            if (*(int *)(DAT_09189158 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189158);
            }
            AnhPD_FoodOrder_PieceSet__Add(&local_a0,&local_80,uVar5,1,0);
            uStack_78 = uStack_98;
            local_80 = local_a0;
            local_70 = local_90;
            FUN_0579b33c(lVar6,uVar4,DAT_091ad830);
            iVar3 = iVar3 + -1;
          } while (iVar3 != 0);
        }
        local_90 = local_70;
        lVar6 = *plVar13;
        uStack_98 = uStack_78;
        local_a0 = local_80;
        if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        local_c0 = local_90;
        uStack_c8 = uStack_98;
        local_d0 = local_a0;
        AnhPD_FoodOrder_IceCreamPieceTable__RollToppings(&local_b8,param_2,&local_d0,param_3,lVar6);
        goto LAB_0414a91c;
      }
      local_a0 = CONCAT44(local_a0._4_4_,param_2);
      uVar9 = FUN_03f5c42c(DAT_09186a50,&local_a0);
      uVar9 = System_String__Format(DAT_09213d80,uVar9,0);
      uVar9 = System_String__Concat(uVar9,DAT_0920b6e8,0);
      if (*(int *)(DAT_091835d0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_091835d0);
      }
      UnityEngine_Debug__LogWarning(uVar9,0);
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424();
      }
    }
  }
  puVar10 = *(undefined8 **)(DAT_09189158 + 0xb8);
  uStack_b0 = puVar10[1];
  local_b8 = *puVar10;
  local_a8 = puVar10[2];
LAB_0414a91c:
  param_1[1] = uStack_b0;
  *param_1 = local_b8;
  param_1[2] = local_a8;
  return;
}

