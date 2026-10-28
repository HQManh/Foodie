// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorPickup$$CollectBatch
// address: 0x40e728c
// body: available
// range: 0x40e728c-0x40e763b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e73c8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40e73f4 to 0x57e0c68 FUN_057e0c68 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40e7594 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7624 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7628 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e762c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7630 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7638 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040e7634) */

void AnhPD_FoodOrder_ConveyorPickup__CollectBatch(long param_1,long param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  long *plVar8;
  undefined8 uVar9;
  
  if ((DAT_09516096 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a3f0);
    FUN_03f5c2a4(&DAT_0917aa98);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091ad968);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516096 = 1;
  }
  lVar4 = DAT_091ad968;
  if (param_1 != 0) {
    if (((*(long *)(param_1 + 0xc0) != 0) &&
        (lVar3 = *(long *)(*(long *)(param_1 + 0xc0) + 0x30), lVar3 != 0)) &&
       (plVar8 = *(long **)(lVar3 + 0x18), plVar8 != (long *)0x0)) {
      lVar4 = *plVar8;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar7 + -2) == DAT_0917a3f0) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
            goto LAB_040e7404;
          }
          uVar6 = uVar6 - 1;
          piVar7 = piVar7 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917a3f0,0);
LAB_040e7404:
      plVar8 = (long *)(*(code *)*puVar2)(plVar8,puVar2[1]);
joined_r0x040e741c:
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
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_040e7488;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185b10,0);
LAB_040e7488:
        uVar6 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        if ((uVar6 & 1) == 0) {
          if (plVar8 == (long *)0x0) {
            return;
          }
          lVar4 = *plVar8;
          uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
          if (uVar6 == 0) goto LAB_040e75e0;
          piVar7 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          goto LAB_040e75c8;
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
            if (*(long *)(piVar7 + -2) == DAT_0917aa98) {
              puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
              goto LAB_040e74ec;
            }
            uVar6 = uVar6 - 1;
            piVar7 = piVar7 + 4;
          } while (uVar6 != 0);
        }
        puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_0917aa98,0);
LAB_040e74ec:
        lVar4 = (*(code *)*puVar2)(plVar8,puVar2[1]);
        if (lVar4 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(undefined8 *)(lVar4 + 0x10);
        }
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar6 = UnityEngine_Object__op_Implicit(uVar9,0);
        lVar3 = DAT_091ad968;
      } while ((uVar6 & 1) == 0);
      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      if (param_2 != 0) {
        lVar5 = *(long *)(param_2 + 0x10);
        uVar9 = *(undefined8 *)(lVar4 + 0x10);
        *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
        if (lVar5 != 0) {
          uVar1 = *(uint *)(param_2 + 0x18);
          if (uVar1 < *(uint *)(lVar5 + 0x18)) {
            *(uint *)(param_2 + 0x18) = uVar1 + 1;
            *(undefined8 *)(lVar5 + (long)(int)uVar1 * 8 + 0x20) = uVar9;
            thunk_FUN_03f5d7b8();
          }
          else {
            FUN_057e0c68(param_2,uVar9,
                         *(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
          }
          goto joined_r0x040e741c;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (param_2 != 0) {
      lVar3 = *(long *)(param_2 + 0x10);
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + 1;
      if (lVar3 != 0) {
        uVar1 = *(uint *)(param_2 + 0x18);
        if (*(uint *)(lVar3 + 0x18) <= uVar1) {
          FUN_057e0c68(param_2,param_1,
                       *(undefined8 *)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          return;
        }
        *(uint *)(param_2 + 0x18) = uVar1 + 1;
        plVar8 = (long *)(lVar3 + (long)(int)uVar1 * 8 + 0x20);
        *plVar8 = param_1;
        thunk_FUN_03f5d7b8(plVar8,param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_040e75c8:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_040e75fc;
    }
  }
LAB_040e75e0:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar8,DAT_09185a58,0);
LAB_040e75fc:
  (*(code *)*puVar2)(plVar8,puVar2[1]);
  return;
}

