// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingBurgerCompositeView$$Apply
// address: 0x44c8e14
// body: available
// range: 0x44c8e14-0x44c91d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44c90f8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c91b8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c91bc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c91c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c91c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c91c8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c91cc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44c91d4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044c917c) */
/* WARNING: Removing unreachable block (ram,0x044c91d0) */

void CookOrder_Cooking_Implement_CookingBurgerCompositeView__Apply
               (long param_1,long *param_2,uint param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long lVar11;
  undefined8 uVar12;
  uint uVar13;
  
  if ((DAT_0951829d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a598);
    FUN_03f5c2a4(&DAT_0917ac48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b2340);
    FUN_03f5c2a4(&DAT_091b2338);
    FUN_03f5c2a4(&DAT_0917d208);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_0951829d = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917d208);
  FUN_0579924c(lVar3,DAT_091b2338);
  if (param_2 != (long *)0x0) {
    lVar8 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917a598) {
          puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_044c8f30;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a598,0);
LAB_044c8f30:
    plVar5 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_044c8fbc;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_044c8fbc:
      uVar9 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar9 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_044c9170;
        lVar8 = *plVar5;
        uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
        if (uVar9 == 0) goto LAB_044c9148;
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        goto LAB_044c9130;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar8 = *plVar5;
      uVar9 = (ulong)*(ushort *)(lVar8 + 0x12e);
      if (uVar9 != 0) {
        piVar10 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
        do {
          if (*(long *)(piVar10 + -2) == DAT_0917ac48) {
            puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
            goto LAB_044c9020;
          }
          uVar9 = uVar9 - 1;
          piVar10 = piVar10 + 4;
        } while (uVar9 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917ac48,0);
LAB_044c9020:
      uVar6 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      lVar8 = *(long *)(param_1 + 0x48);
      if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar7 = *(uint *)(lVar8 + 0x18);
      if (0 < (int)uVar7) {
        uVar13 = 0;
        do {
          if (uVar7 <= uVar13) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c558();
          }
          lVar11 = *(long *)(lVar8 + (long)(int)uVar13 * 8 + 0x20);
          if (lVar11 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar12 = *(undefined8 *)(lVar11 + 0x10);
          if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          uVar9 = UnityEngine_Object__op_Equality(uVar12,uVar6,0);
          lVar2 = DAT_091b2340;
          if (((uVar9 & 1) != 0) && (iVar1 = *(int *)(lVar11 + 0x18), iVar1 != 0)) {
            if (lVar3 == 0) {
LAB_044c91c0:
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar11 = *(long *)(lVar3 + 0x10);
            *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
            if (lVar11 == 0) goto LAB_044c91c0;
            uVar7 = *(uint *)(lVar3 + 0x18);
            if (uVar7 < *(uint *)(lVar11 + 0x18)) {
              *(uint *)(lVar3 + 0x18) = uVar7 + 1;
              *(int *)(lVar11 + (long)(int)uVar7 * 4 + 0x20) = iVar1;
            }
            else {
              FUN_05799adc(lVar3,iVar1,
                           *(undefined8 *)(*(long *)(*(long *)(lVar2 + 0x20) + 0xc0) + 0x70));
            }
          }
          uVar7 = *(uint *)(lVar8 + 0x18);
          uVar13 = uVar13 + 1;
        } while ((int)uVar13 < (int)uVar7);
      }
    } while( true );
  }
  goto LAB_044c91cc;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_044c9130:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar8 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_044c9164;
    }
  }
LAB_044c9148:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_044c9164:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_044c9170:
  if (*(long *)(param_1 + 0x40) != 0) {
    CookOrder_Cooking_Implement_CookingBurgerDisplay__Display
              (*(long *)(param_1 + 0x40),lVar3,param_3 & 1);
    return;
  }
LAB_044c91cc:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

