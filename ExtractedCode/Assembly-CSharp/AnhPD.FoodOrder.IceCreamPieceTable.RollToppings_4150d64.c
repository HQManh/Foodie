// rea decompile_all
// name: AnhPD.FoodOrder.IceCreamPieceTable$$RollToppings
// address: 0x4150d64
// body: available
// range: 0x4150d64-0x41510f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41510f0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41510f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void AnhPD_FoodOrder_IceCreamPieceTable__RollToppings
               (undefined8 *param_1,int param_2,undefined8 *param_3,int param_4,long param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  if ((DAT_0951648a & 1) == 0) {
    FUN_03f5c2a4(&DAT_09186a68);
    FUN_03f5c2a4(&DAT_091ad820);
    FUN_03f5c2a4(&DAT_091ad828);
    FUN_03f5c2a4(&DAT_091ad818);
    FUN_03f5c2a4(&DAT_091ad838);
    FUN_03f5c2a4(&DAT_091ad840);
    FUN_03f5c2a4(&DAT_0917c458);
    FUN_03f5c2a4(&DAT_09189158);
    DAT_0951648a = 1;
  }
  if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (param_2 - 1U < 5) {
    iVar3 = *(int *)(&DAT_01a8f6d4 + (ulong)(param_2 - 1U) * 4);
  }
  else {
    iVar3 = 0;
  }
  iVar9 = iVar3;
  if (param_4 <= iVar3) {
    iVar9 = param_4;
  }
  if (0 < param_4) {
    iVar3 = iVar9;
  }
  iVar3 = UnityEngine_Random__Range(0,iVar3 + 1,0);
  lVar5 = thunk_FUN_03f9944c(DAT_0917c458);
  FUN_0579924c(lVar5,DAT_091ad818);
  if (0 < iVar3) {
    if (lVar5 == 0) {
LAB_041510f4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    iVar9 = 0;
    do {
      lVar12 = DAT_09186a68;
      *(undefined4 *)(lVar5 + 0x18) = 0;
      *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
      if (*(int *)(lVar12 + 0xe4) == 0) {
        FUN_03f5c424();
        lVar12 = DAT_09186a68;
      }
      lVar12 = *(long *)(*(long *)(lVar12 + 0xb8) + 0x50);
      if (lVar12 == 0) goto LAB_041510f4;
      uVar1 = *(uint *)(lVar12 + 0x18);
      if (0 < (int)uVar1) {
        uVar13 = 0;
        do {
          if (uVar1 <= uVar13) {
LAB_041510f0:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar11 = *(long *)(lVar12 + uVar13 * 8 + 0x20);
          if (lVar11 == 0) goto LAB_041510f4;
          if (0 < (int)*(ulong *)(lVar11 + 0x18)) {
            uVar10 = 0;
            uVar6 = *(ulong *)(lVar11 + 0x18) & 0xffffffff;
            do {
              if (uVar6 <= uVar10) goto LAB_041510f0;
              uVar4 = *(undefined4 *)(lVar11 + 0x20 + uVar10 * 4);
              if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              uVar6 = AnhPD_FoodOrder_IceCreamPieceTable__IsMain(param_2,uVar4);
              if ((uVar6 & 1) == 0) {
                if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
                  FUN_03f5c424();
                }
                uVar6 = AnhPD_FoodOrder_PieceLookup__Exists(uVar4,0);
                if (((uVar6 & 1) != 0) &&
                   ((param_5 == 0 ||
                    (uVar6 = (**(code **)(param_5 + 0x18))
                                       (*(undefined8 *)(param_5 + 0x40),uVar4,
                                        *(undefined8 *)(param_5 + 0x28)), (uVar6 & 1) != 0)))) {
                  uStack_78 = param_3[1];
                  local_80 = *param_3;
                  local_70 = param_3[2];
                  if (*(int *)(DAT_09186a68 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  uStack_98 = uStack_78;
                  local_a0 = local_80;
                  local_90 = local_70;
                  uVar6 = AnhPD_FoodOrder_IceCreamPieceTable__ToppingAllows(param_2,&local_a0,uVar4)
                  ;
                  lVar2 = DAT_091ad820;
                  if ((uVar6 & 1) != 0) {
                    lVar7 = *(long *)(lVar5 + 0x10);
                    *(int *)(lVar5 + 0x1c) = *(int *)(lVar5 + 0x1c) + 1;
                    if (lVar7 == 0) goto LAB_041510f4;
                    uVar1 = *(uint *)(lVar5 + 0x18);
                    if (uVar1 < *(uint *)(lVar7 + 0x18)) {
                      *(uint *)(lVar5 + 0x18) = uVar1 + 1;
                      *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uVar4;
                    }
                    else {
                      FUN_05799adc(lVar5,uVar4,
                                   *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70)
                                  );
                    }
                  }
                }
              }
              uVar6 = (ulong)*(uint *)(lVar11 + 0x18);
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)*(uint *)(lVar11 + 0x18));
          }
          uVar1 = *(uint *)(lVar12 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar1);
      }
      if (*(int *)(lVar5 + 0x18) == 0) break;
      uVar4 = UnityEngine_Random__Range(0,*(int *)(lVar5 + 0x18),0);
      uVar4 = FUN_057997e4(lVar5,uVar4,DAT_091ad840);
      if (*(int *)(DAT_09189158 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09189158);
      }
      AnhPD_FoodOrder_PieceSet__Add(&local_80,param_3,uVar4,1,0);
      iVar9 = iVar9 + 1;
      param_3[1] = uStack_78;
      *param_3 = local_80;
      param_3[2] = local_70;
    } while (iVar9 != iVar3);
  }
  uVar14 = *param_3;
  uVar8 = param_3[2];
  param_1[1] = param_3[1];
  *param_1 = uVar14;
  param_1[2] = uVar8;
  return;
}

