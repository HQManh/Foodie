// rea decompile_all
// name: AnhPD.FoodOrder.SushiPieceTable$$PickUsable
// address: 0x416e0c4
// body: available
// range: 0x416e0c4-0x416e497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x416e394 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416e484 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416e488 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416e48c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x416e494 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0416e490) */

undefined8 AnhPD_FoodOrder_SushiPieceTable__PickUsable(long *param_1,long param_2)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 local_48;
  
  if ((DAT_095165d1 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a778);
    FUN_03f5c2a4(&DAT_0917ae60);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b08f8);
    FUN_03f5c2a4(&DAT_091b08f0);
    FUN_03f5c2a4(&DAT_091b0908);
    FUN_03f5c2a4(&DAT_091b0910);
    FUN_03f5c2a4(&DAT_0917cd70);
    FUN_03f5c2a4(&DAT_091b7480);
    FUN_03f5c2a4(&DAT_0918b680);
    DAT_095165d1 = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_0917cd70);
  FUN_0579924c(lVar3,DAT_091b08f0);
  if (param_1 != (long *)0x0) {
    lVar6 = *param_1;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_0917a778) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_0416e1f8;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917a778,0);
LAB_0416e1f8:
    plVar5 = (long *)(*(code *)*puVar4)(param_1,puVar4[1]);
joined_r0x0416e210:
    do {
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_09185b10) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0416e284;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185b10,0);
LAB_0416e284:
      uVar8 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if ((uVar8 & 1) == 0) {
        if (plVar5 == (long *)0x0) goto LAB_0416e408;
        lVar6 = *plVar5;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_0416e3e0;
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_0416e3c8;
      }
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar6 = *plVar5;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 != 0) {
        piVar9 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        do {
          if (*(long *)(piVar9 + -2) == DAT_0917ae60) {
            puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
            goto LAB_0416e2e8;
          }
          uVar8 = uVar8 - 1;
          piVar9 = piVar9 + 4;
        } while (uVar8 != 0);
      }
      puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_0917ae60,0);
LAB_0416e2e8:
      uVar2 = (*(code *)*puVar4)(plVar5,puVar4[1]);
      if (*(int *)(DAT_0918b680 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar8 = AnhPD_FoodOrder_PieceLookup__Exists(uVar2,0);
    } while (((uVar8 & 1) == 0) ||
            ((param_2 != 0 &&
             (uVar8 = (**(code **)(param_2 + 0x18))
                                (*(undefined8 *)(param_2 + 0x40),uVar2,
                                 *(undefined8 *)(param_2 + 0x28)), (uVar8 & 1) == 0))));
    lVar6 = DAT_091b08f8;
    if (lVar3 != 0) {
      lVar7 = *(long *)(lVar3 + 0x10);
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      if (lVar7 != 0) {
        uVar1 = *(uint *)(lVar3 + 0x18);
        if (uVar1 < *(uint *)(lVar7 + 0x18)) {
          *(uint *)(lVar3 + 0x18) = uVar1 + 1;
          *(undefined4 *)(lVar7 + (long)(int)uVar1 * 4 + 0x20) = uVar2;
        }
        else {
          FUN_05799adc(lVar3,uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70)
                      );
        }
        goto joined_r0x0416e210;
      }
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  goto LAB_0416e48c;
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar9 = piVar9 + 4;
    if (uVar8 == 0) break;
LAB_0416e3c8:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar6 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_0416e3fc;
    }
  }
LAB_0416e3e0:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar5,DAT_09185a58,0);
LAB_0416e3fc:
  (*(code *)*puVar4)(plVar5,puVar4[1]);
LAB_0416e408:
  if (lVar3 != 0) {
    if (*(int *)(lVar3 + 0x18) < 1) {
      local_48 = 0;
    }
    else {
      uVar2 = UnityEngine_Random__Range(0,*(int *)(lVar3 + 0x18),0);
      uVar2 = FUN_057997e4(lVar3,uVar2,DAT_091b0910);
      local_48 = 0;
      FUN_05c30b18(&local_48,uVar2,DAT_091b7480);
    }
    return local_48;
  }
LAB_0416e48c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

