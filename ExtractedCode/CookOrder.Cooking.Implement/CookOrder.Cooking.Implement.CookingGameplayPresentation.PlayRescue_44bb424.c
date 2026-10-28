// rea decompile_all
// name: CookOrder.Cooking.Implement.CookingGameplayPresentation$$PlayRescue
// address: 0x44bb424
// body: available
// range: 0x44bb424-0x44bb92b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44bb870 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bb90c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bb910 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bb914 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bb918 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bb91c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bb920 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x44bb928 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x044bb924) */

void CookOrder_Cooking_Implement_CookingGameplayPresentation__PlayRescue(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  float fVar9;
  float fVar10;
  
  if ((DAT_0951823f & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c6590);
    FUN_03f5c2a4(&DAT_091c6598);
    FUN_03f5c2a4(&DAT_0919d638);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5c0);
    FUN_03f5c2a4(&DAT_0917ac88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09188ad0);
    FUN_03f5c2a4(&DAT_0917f008);
    FUN_03f5c2a4(&DAT_0918c148);
    FUN_03f5c2a4(&DAT_091dbfe0);
    FUN_03f5c2a4(&DAT_091dbfe8);
    FUN_03f5c2a4(&DAT_091dc048);
    FUN_03f5c2a4(&DAT_091e7068);
    FUN_03f5c2a4(&DAT_0918f0c0);
    DAT_0951823f = 1;
  }
  fVar9 = (float)UnityEngine_Time__get_unscaledTime(0);
  uVar2 = DAT_0917f008;
  if ((*(long *)(param_1 + 0x2e8) != 0) &&
     (lVar4 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x58), lVar4 != 0)) {
    fVar10 = *(float *)(lVar4 + 0x40) * 0.5;
    *(float *)(param_1 + 0x3c8) = fVar9 + fVar10;
    uVar2 = thunk_FUN_03f9944c(uVar2);
    FUN_063be1d4(uVar2,param_1,DAT_091c6590,0);
    uVar2 = DG_Tweening_DOVirtual__Float(0,0x3f800000,fVar10,uVar2,0);
    uVar2 = FUN_04d9656c(uVar2,1,DAT_091dc048);
    FUN_04d9642c(uVar2,param_1,DAT_091dbfe8);
    fVar9 = *(float *)(param_1 + 0x2b8);
    if (*(float *)(param_1 + 0x2b8) <= *(float *)(param_1 + 0x3c8)) {
      fVar9 = *(float *)(param_1 + 0x3c8);
    }
    *(float *)(param_1 + 0x2b8) = fVar9;
    if ((*(long *)(param_1 + 0x2e8) != 0) &&
       (lVar4 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x58), lVar4 != 0)) {
      fVar9 = *(float *)(lVar4 + 0x40);
      uVar2 = thunk_FUN_03f9944c(DAT_0918c148);
      DG_Tweening_TweenCallback___ctor(uVar2,param_1,DAT_091c6598,0);
      uVar2 = DG_Tweening_DOVirtual__DelayedCall(fVar9 * 0.5,uVar2,1,0);
      FUN_04d9642c(uVar2,param_1,DAT_091dbfe0);
      if ((param_2 != 0) && (plVar8 = *(long **)(param_2 + 0x38), plVar8 != (long *)0x0)) {
        lVar4 = *plVar8;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 != 0) {
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar7 + -2) == DAT_0917a5c0) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_044bb690;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a5c0,0);
LAB_044bb690:
        plVar8 = (long *)(*(code *)*puVar3)(plVar8,puVar3[1]);
        do {
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_044bb730;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_044bb730:
          uVar6 = (*(code *)*puVar3)(plVar8,puVar3[1]);
          if ((uVar6 & 1) == 0) {
            if (plVar8 == (long *)0x0) {
              return;
            }
            lVar4 = *plVar8;
            uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
            if (uVar6 == 0) goto LAB_044bb8bc;
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            goto LAB_044bb8a4;
          }
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar4 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917ac88) {
                puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_044bb794;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917ac88,0);
LAB_044bb794:
          uVar1 = (*(code *)*puVar3)(plVar8,puVar3[1]);
          lVar4 = thunk_FUN_03f9944c(DAT_0918f0c0);
          CookOrder_Cooking_Implement_CookingGameplayPresentation_<>c__DisplayClass188_0___ctor
                    (lVar4,0);
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          *(long *)(lVar4 + 0x18) = param_1;
          thunk_FUN_03f5d7b8((long *)(lVar4 + 0x18),param_1);
          if (*(long *)(param_1 + 0x308) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar6 = FUN_06ef1fe8(*(long *)(param_1 + 0x308),uVar1,lVar4 + 0x10,DAT_0919d638);
          if ((uVar6 & 1) != 0) {
            uVar2 = *(undefined8 *)(lVar4 + 0x10);
            if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            uVar6 = UnityEngine_Object__op_Implicit(uVar2,0);
            if ((uVar6 & 1) != 0) {
              *(int *)(param_1 + 0x3c4) = *(int *)(param_1 + 0x3c4) + 1;
              if (*(long *)(param_1 + 0x2e8) == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar5 = *(long *)(*(long *)(param_1 + 0x2e8) + 0x58);
              if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              fVar9 = *(float *)(lVar5 + 0x40);
              uVar2 = thunk_FUN_03f9944c(DAT_0918c148);
              DG_Tweening_TweenCallback___ctor(uVar2,lVar4,DAT_091e7068,0);
              uVar2 = DG_Tweening_DOVirtual__DelayedCall(fVar9 * 0.5,uVar2,1,0);
              FUN_04d9642c(uVar2,param_1,DAT_091dbfe0);
            }
          }
        } while( true );
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_044bb8a4:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_044bb8d8;
    }
  }
LAB_044bb8bc:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_044bb8d8:
  (*(code *)*puVar3)(plVar8,puVar3[1]);
  return;
}

