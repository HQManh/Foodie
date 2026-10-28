// rea decompile_all
// name: AnhPD.FoodOrder.OrderBoard$$PreviewSlots
// address: 0x42293d4
// body: available
// range: 0x42293d4-0x4229a9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4229a94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4229a98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4229a9c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long AnhPD_FoodOrder_OrderBoard__PreviewSlots
               (undefined1 param_1 [16],float param_2,float param_3,float param_4,long *param_5,
               long param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  undefined8 uVar9;
  float extraout_var;
  float extraout_var_00;
  float extraout_w1;
  float extraout_w1_00;
  undefined8 *puVar10;
  long lVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_c8;
  undefined8 *puStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  
  if ((DAT_09516d75 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09175aa0);
    FUN_03f5c2a4(&DAT_091a34d0);
    FUN_03f5c2a4(&DAT_091a34d8);
    FUN_03f5c2a4(&DAT_091a34e0);
    FUN_03f5c2a4(&DAT_091aac58);
    FUN_03f5c2a4(&DAT_091b19b8);
    FUN_03f5c2a4(&DAT_091aac60);
    FUN_03f5c2a4(&DAT_091adcc0);
    FUN_03f5c2a4(&DAT_091aac68);
    FUN_03f5c2a4(&DAT_091b19b0);
    FUN_03f5c2a4(&DAT_091aac50);
    FUN_03f5c2a4(&DAT_091aed48);
    FUN_03f5c2a4(&DAT_091aac70);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091aac78);
    FUN_03f5c2a4(&DAT_0917bb98);
    FUN_03f5c2a4(&DAT_0917d050);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917df28);
    FUN_03f5c2a4(&DAT_09189c98);
    FUN_03f5c2a4(&DAT_09189c30);
    FUN_03f5c2a4(&DAT_091ee228);
    FUN_03f5c2a4(&DAT_091ee230);
    FUN_03f5c2a4(&DAT_091930b8);
    FUN_03f5c2a4(&DAT_091930b0);
    FUN_03f5c2a4(&DAT_091bee70);
    DAT_09516d75 = 1;
  }
  local_b0 = 0;
  uStack_a8 = 0;
  local_a0 = 0;
  lVar4 = thunk_FUN_03f9944c(DAT_0917bb98);
  FUN_056d3b20(lVar4,DAT_091aac50);
  if ((param_5[0x12] != 0) && (iVar3 = *(int *)(param_5[0x12] + 0x18), 0 < iVar3)) {
    iVar12 = 0;
    do {
      lVar5 = (**(code **)(*param_5 + 0x1d8))(param_5,iVar12,*(undefined8 *)(*param_5 + 0x1e0));
      fVar14 = param_4;
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188ad0);
        fVar14 = param_4;
      }
      uVar6 = UnityEngine_Object__op_Implicit(lVar5,0);
      param_4 = fVar14;
      if ((uVar6 & 1) != 0) {
        if ((lVar5 == 0) || (lVar7 = UnityEngine_Component__get_gameObject(lVar5,0), lVar7 == 0))
        goto LAB_04229a98;
        uVar6 = UnityEngine_GameObject__get_activeSelf(lVar7,0);
        param_4 = fVar14;
        if (((uVar6 & 1) != 0) &&
           ((plVar8 = (long *)UnityEngine_Component__get_transform(lVar5,0), param_4 = fVar14,
            plVar8 != (long *)0x0 && (*plVar8 == DAT_09189c98)))) {
          uVar9 = UnityEngine_Transform__GetParent(plVar8,0);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188ad0);
          }
          uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
          param_4 = fVar14;
          if ((uVar6 & 1) != 0) {
            UnityEngine_RectTransform__get_rect(plVar8,0);
            fVar15 = param_2;
            param_4 = fVar14;
            fVar13 = (float)UnityEngine_Transform__get_localPosition(plVar8,0);
            lVar5 = UnityEngine_Transform__GetParent(plVar8,0);
            if (*(int *)(DAT_09189c30 + 0xe4) == 0) {
              FUN_03f5c424(DAT_09189c30);
            }
            if (lVar5 == 0) goto LAB_04229a98;
            param_3 = param_3 + 0.0;
            fVar14 = fVar15 + fVar14 + param_2;
            UnityEngine_Transform__TransformPoint(fVar13 + 0.0,fVar14,param_3,lVar5,0);
            lVar5 = UnityEngine_Transform__GetParent(plVar8,0);
            if (lVar5 == 0) goto LAB_04229a98;
            param_2 = param_2 + fVar15;
            UnityEngine_Transform__TransformPoint(fVar13 + 0.0,param_2,param_3,lVar5,0);
            puStack_c0 = (undefined8 *)((ulong)puStack_c0 & 0xffffffff00000000);
            local_c8 = 0;
            FUN_066e617c(fVar14,&local_c8,iVar12,DAT_091bee70);
            lVar5 = DAT_091aac58;
            if (lVar4 == 0) goto LAB_04229a98;
            lVar7 = *(long *)(lVar4 + 0x10);
            *(int *)(lVar4 + 0x1c) = *(int *)(lVar4 + 0x1c) + 1;
            if (lVar7 == 0) goto LAB_04229a98;
            uVar2 = *(uint *)(lVar4 + 0x18);
            if (uVar2 < *(uint *)(lVar7 + 0x18)) {
              lVar7 = lVar7 + (long)(int)uVar2 * 0xc;
              *(uint *)(lVar4 + 0x18) = uVar2 + 1;
              *(undefined8 *)(lVar7 + 0x20) = local_c8;
              *(undefined4 *)(lVar7 + 0x28) = puStack_c0._0_4_;
            }
            else {
              FUN_056d43dc(lVar4,local_c8,(ulong)puStack_c0 & 0xffffffff,
                           *(undefined8 *)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar3 != iVar12);
  }
  if (*(int *)(DAT_091930b0 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  puVar10 = *(undefined8 **)(DAT_091930b0 + 0xb8);
  lVar5 = puVar10[1];
  if (lVar5 == 0) {
    if (*(int *)(DAT_091930b0 + 0xe4) == 0) {
      FUN_03f5c424();
      puVar10 = *(undefined8 **)(DAT_091930b0 + 0xb8);
    }
    uVar9 = *puVar10;
    lVar5 = thunk_FUN_03f9944c(DAT_09175aa0);
    FUN_06d40efc(lVar5,uVar9,DAT_091ee228,0);
    plVar8 = (long *)(*(long *)(DAT_091930b0 + 0xb8) + 8);
    *plVar8 = lVar5;
    thunk_FUN_03f5d7b8(plVar8,lVar5);
  }
  if ((lVar4 == 0) || (FUN_056d5ff8(lVar4,lVar5,DAT_091aac68), param_6 == 0)) {
LAB_04229a98:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = *(undefined4 *)(param_6 + 0x18);
  lVar5 = thunk_FUN_03f9944c(DAT_0917d050);
  FUN_058abdf4(lVar5,uVar1,DAT_091b19b0);
  FUN_05797d74(&local_c8,param_6,DAT_091adcc0);
  local_a0 = local_b8;
  uStack_a8 = (ulong)puStack_c0;
  local_b0 = local_c8;
  local_c8 = 0;
  puStack_c0 = &local_b0;
  while( true ) {
    uVar6 = FUN_071ad7a4(&local_b0,DAT_091a34d8);
    if ((uVar6 & 1) == 0) {
      FUN_071ad7a0(&local_b0,DAT_091a34d0);
      return lVar5;
    }
    lVar7 = thunk_FUN_03f9944c(DAT_091930b8);
    System_Object___ctor(lVar7,0);
    uVar9 = DAT_0917df28;
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    *(undefined4 *)(lVar7 + 0x10) = (undefined4)local_a0;
    uVar9 = thunk_FUN_03f9944c(uVar9);
    FUN_05d7478c(uVar9,lVar7,DAT_091ee230,0);
    iVar3 = FUN_056d4cd8(lVar4,uVar9,DAT_091aac60);
    if (iVar3 < 0) {
      FUN_071ad7a0(&local_b0,DAT_091a34d0);
      return 0;
    }
    if (iVar3 == 0) {
      fVar14 = INFINITY;
    }
    else {
      FUN_056d40b8(lVar4,iVar3 + -1,DAT_091aac78);
      FUN_056d40b8(lVar4,iVar3,DAT_091aac78);
      fVar14 = (extraout_w1 + extraout_var) * 0.5;
    }
    if (iVar3 == *(int *)(lVar4 + 0x18) + -1) {
      fVar15 = -INFINITY;
    }
    else {
      FUN_056d40b8(lVar4,iVar3,DAT_091aac78);
      FUN_056d40b8(lVar4,iVar3 + 1,DAT_091aac78);
      fVar15 = (extraout_w1_00 + extraout_var_00) * 0.5;
    }
    lVar7 = DAT_091b19b8;
    if (lVar5 == 0) break;
    lVar11 = *(long *)(lVar5 + 0x10);
    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
    if (lVar11 == 0) break;
    uVar2 = *(uint *)(lVar5 + 0x18);
    if (uVar2 < *(uint *)(lVar11 + 0x18)) {
      lVar11 = lVar11 + (long)(int)uVar2 * 8;
      *(uint *)(lVar5 + 0x18) = uVar2 + 1;
      *(float *)(lVar11 + 0x20) = fVar14;
      *(float *)(lVar11 + 0x24) = fVar15;
    }
    else {
      FUN_058ac614(fVar14,lVar5,*(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

