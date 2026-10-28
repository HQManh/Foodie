// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorBundleBuilder$$LinkChains
// address: 0x40d7c34
// body: available
// range: 0x40d7c34-0x40d8377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40d7ef8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d835c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d8360 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d8364 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40d8374 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040d7f7c) */
/* WARNING: Removing unreachable block (ram,0x040d8370) */

void AnhPD_FoodOrder_ConveyorBundleBuilder__LinkChains(long param_1,long *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  float fVar19;
  int local_7c;
  
  if ((DAT_0951601d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a2e0);
    FUN_03f5c2a4(&DAT_0917a958);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b2d0);
    FUN_03f5c2a4(&DAT_0917b478);
    FUN_03f5c2a4(&DAT_091adc88);
    FUN_03f5c2a4(&DAT_091adca8);
    FUN_03f5c2a4(&DAT_091adc70);
    FUN_03f5c2a4(&DAT_091abdd8);
    FUN_03f5c2a4(&DAT_091add18);
    FUN_03f5c2a4(&DAT_091abde0);
    FUN_03f5c2a4(&DAT_091add20);
    FUN_03f5c2a4(&DAT_091add30);
    FUN_03f5c2a4(&DAT_0917c520);
    DAT_0951601d = 1;
  }
  if (param_2 == (long *)0x0) {
    return;
  }
  if (*(float *)(param_1 + 0x28) <= 0.0) {
    return;
  }
  lVar13 = *param_2;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_0917b2d0) {
        puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_040d7d88;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b2d0,0);
LAB_040d7d88:
  iVar4 = (*(code *)*puVar10)(param_2,puVar10[1]);
  if (iVar4 < 2) {
    return;
  }
  lVar13 = *param_2;
  uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
  if (uVar15 != 0) {
    piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
    do {
      if (*(long *)(piVar16 + -2) == DAT_0917a2e0) {
        puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
        goto LAB_040d7df0;
      }
      uVar15 = uVar15 - 1;
      piVar16 = piVar16 + 4;
    } while (uVar15 != 0);
  }
  puVar10 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a2e0,0);
LAB_040d7df0:
  plVar11 = (long *)(*(code *)*puVar10)(param_2,puVar10[1]);
  if (plVar11 != (long *)0x0) {
    iVar4 = 0;
    do {
      lVar13 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == DAT_09185b10) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_040d7e70;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185b10,0);
LAB_040d7e70:
      uVar15 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if ((uVar15 & 1) == 0) {
        if (plVar11 == (long *)0x0) goto LAB_040d7f70;
        lVar13 = *plVar11;
        uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
        if (uVar15 == 0) goto LAB_040d7f48;
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        goto LAB_040d7f30;
      }
      if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar13 = *plVar11;
      uVar15 = (ulong)*(ushort *)(lVar13 + 0x12e);
      if (uVar15 != 0) {
        piVar16 = (int *)(*(long *)(lVar13 + 0xb0) + 8);
        do {
          if (*(long *)(piVar16 + -2) == DAT_0917a958) {
            puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
            goto LAB_040d7ed4;
          }
          uVar15 = uVar15 - 1;
          piVar16 = piVar16 + 4;
        } while (uVar15 != 0);
      }
      puVar10 = (undefined8 *)FUN_03f95da8(plVar11,DAT_0917a958,0);
LAB_040d7ed4:
      lVar13 = (*(code *)*puVar10)(plVar11,puVar10[1]);
      if (lVar13 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (iVar4 <= *(int *)(lVar13 + 0x18)) {
        iVar4 = *(int *)(lVar13 + 0x18);
      }
    } while (plVar11 != (long *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar15 = uVar15 - 1;
    piVar16 = piVar16 + 4;
    if (uVar15 == 0) break;
LAB_040d7f30:
    if (*(long *)(piVar16 + -2) == DAT_09185a58) {
      puVar10 = (undefined8 *)(lVar13 + (long)*piVar16 * 0x10 + 0x138);
      goto LAB_040d7f64;
    }
  }
LAB_040d7f48:
  puVar10 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185a58,0);
LAB_040d7f64:
  (*(code *)*puVar10)(plVar11,puVar10[1]);
LAB_040d7f70:
  iVar18 = *(int *)(param_1 + 0x2c);
  iVar17 = *(int *)(param_1 + 0x30);
  iVar1 = iVar18;
  if (iVar17 <= iVar18) {
    iVar1 = iVar17;
  }
  if (iVar1 < 3) {
    iVar1 = 2;
  }
  lVar13 = thunk_FUN_03f9944c(DAT_0917c520);
  FUN_05796918(lVar13,DAT_091adc70);
  if (iVar4 < 1) {
    return;
  }
  if (iVar18 <= iVar17) {
    iVar18 = iVar17;
  }
  iVar17 = 0;
  iVar2 = iVar1;
  if (iVar1 <= iVar18) {
    iVar2 = iVar18;
  }
  local_7c = 1;
LAB_040d7ff8:
  fVar19 = (float)UnityEngine_Random__get_value(0);
  iVar18 = local_7c;
  if (fVar19 < *(float *)(param_1 + 0x28)) {
    if (lVar13 != 0) {
      iVar6 = 0;
      *(undefined4 *)(lVar13 + 0x18) = 0;
      *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
      do {
        lVar14 = *param_2;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == DAT_0917b2d0) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_040d8074;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b2d0,0);
LAB_040d8074:
        iVar5 = (*(code *)*puVar10)(param_2,puVar10[1]);
        if (iVar5 <= iVar6) goto LAB_040d8174;
        lVar14 = *param_2;
        uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
        if (uVar15 != 0) {
          piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
          do {
            if (*(long *)(piVar16 + -2) == DAT_0917b478) {
              puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
              goto LAB_040d80d4;
            }
            uVar15 = uVar15 - 1;
            piVar16 = piVar16 + 4;
          } while (uVar15 != 0);
        }
        puVar10 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b478,0);
LAB_040d80d4:
        lVar14 = (*(code *)*puVar10)(param_2,iVar6,puVar10[1]);
        if (lVar14 == 0) break;
        if (iVar17 < *(int *)(lVar14 + 0x18)) {
          lVar12 = FUN_057e0998(lVar14,iVar17,DAT_091abde0);
          lVar14 = DAT_091adc88;
          if (lVar12 == 0) break;
          if (*(int *)(lVar12 + 0x18) != 1) {
            lVar12 = *(long *)(lVar13 + 0x10);
            *(int *)(lVar13 + 0x1c) = *(int *)(lVar13 + 0x1c) + 1;
            if (lVar12 == 0) break;
            uVar3 = *(uint *)(lVar13 + 0x18);
            if (uVar3 < *(uint *)(lVar12 + 0x18)) {
              *(uint *)(lVar13 + 0x18) = uVar3 + 1;
              *(int *)(lVar12 + (long)(int)uVar3 * 4 + 0x20) = iVar6;
            }
            else {
              FUN_057971a8(lVar13,iVar6,
                           *(undefined8 *)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
        iVar6 = iVar6 + 1;
      } while( true );
    }
LAB_040d835c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_040d8330;
LAB_040d8174:
  if (1 < *(int *)(lVar13 + 0x18)) {
    iVar6 = UnityEngine_Random__Range(iVar1,iVar2 + 1,0);
    if (*(int *)(lVar13 + 0x18) <= iVar6) {
      iVar6 = *(int *)(lVar13 + 0x18);
    }
    if (iVar6 < 1) {
      iVar18 = local_7c + 1;
    }
    else {
      iVar18 = 0;
      do {
        uVar7 = UnityEngine_Random__Range(iVar18,*(undefined4 *)(lVar13 + 0x18),0);
        uVar8 = FUN_05796eb0(lVar13,uVar7,DAT_091add20);
        uVar9 = FUN_05796eb0(lVar13,iVar18,DAT_091add20);
        FUN_05796f04(lVar13,iVar18,uVar8,DAT_091add30);
        FUN_05796f04(lVar13,uVar7,uVar9,DAT_091add30);
        iVar18 = iVar18 + 1;
      } while (iVar6 != iVar18);
      iVar18 = local_7c + 1;
      if (0 < iVar6) {
        iVar5 = 0;
        do {
          uVar7 = FUN_05796eb0(lVar13,iVar5,DAT_091add20);
          lVar14 = *param_2;
          uVar15 = (ulong)*(ushort *)(lVar14 + 0x12e);
          if (uVar15 != 0) {
            piVar16 = (int *)(*(long *)(lVar14 + 0xb0) + 8);
            do {
              if (*(long *)(piVar16 + -2) == DAT_0917b478) {
                puVar10 = (undefined8 *)(lVar14 + (long)*piVar16 * 0x10 + 0x138);
                goto LAB_040d82ac;
              }
              uVar15 = uVar15 - 1;
              piVar16 = piVar16 + 4;
            } while (uVar15 != 0);
          }
          puVar10 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b478,0);
LAB_040d82ac:
          lVar14 = (*(code *)*puVar10)(param_2,uVar7,puVar10[1]);
          if ((lVar14 == 0) || (lVar14 = FUN_057e0998(lVar14,iVar17,DAT_091abde0), lVar14 == 0))
          goto LAB_040d835c;
          iVar5 = iVar5 + 1;
          *(int *)(lVar14 + 0x28) = local_7c;
          *(int *)(lVar14 + 0x2c) = iVar6;
        } while (iVar5 != iVar6);
      }
    }
  }
LAB_040d8330:
  local_7c = iVar18;
  iVar17 = iVar17 + 1;
  if (iVar17 == iVar4) {
    return;
  }
  goto LAB_040d7ff8;
}

