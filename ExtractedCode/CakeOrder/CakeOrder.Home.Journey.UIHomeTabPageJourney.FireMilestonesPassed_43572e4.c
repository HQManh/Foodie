// rea decompile_all
// name: CakeOrder.Home.Journey.UIHomeTabPageJourney$$FireMilestonesPassed
// address: 0x43572e4
// body: available
// range: 0x43572e4-0x43575af inclusive
// range: 0x43575b4-0x4357637 inclusive
// range: 0x435763c-0x435763f inclusive
// range: 0x4357688-0x43576e3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x43575ac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4357634 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x435763c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43576cc to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43576d0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43576d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43576d8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x43576e0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0435762c) */
/* WARNING: Removing unreachable block (ram,0x04357630) */
/* WARNING: Removing unreachable block (ram,0x043576c8) */

void CakeOrder_Home_Journey_UIHomeTabPageJourney__FireMilestonesPassed
               (float param_1,float param_2,long param_3)

{
  int iVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long lVar4;
  int *piVar5;
  long *plVar6;
  long local_a8;
  long *plStack_a0;
  long local_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  
  if ((DAT_095177e6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a4b50);
    FUN_03f5c2a4(&DAT_091a4b58);
    FUN_03f5c2a4(&DAT_091a4b60);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a7b0);
    FUN_03f5c2a4(&DAT_0917aea0);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b1500);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_095177e6 = 1;
  }
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0;
  if (param_1 < param_2) {
    if (*(long *)(param_3 + 0x120) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    FUN_057e185c(&local_a8,*(long *)(param_3 + 0x120),DAT_091b1500);
    uStack_88 = plStack_a0;
    local_90 = local_a8;
    local_80 = local_98;
    plStack_a0 = &local_90;
    local_a8 = 0;
    while (uVar2 = FUN_071bd28c(&local_90,DAT_091a4b58), lVar4 = local_a8, (uVar2 & 1) != 0) {
      if (local_80 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      plVar6 = *(long **)(local_80 + 0x48);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_0917a7b0) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_04357478;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917a7b0,0);
LAB_04357478:
      plVar6 = (long *)(*(code *)*puVar3)(plVar6,puVar3[1]);
joined_r0x04357490:
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar6;
      uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar2 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185b10) {
            puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_043574e0;
          }
          uVar2 = uVar2 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar2 != 0);
      }
      puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185b10,0);
LAB_043574e0:
      uVar2 = (*(code *)*puVar3)(plVar6,puVar3[1]);
      if ((uVar2 & 1) != 0) {
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        lVar4 = *plVar6;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_0917aea0) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_04357544;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_0917aea0,0);
LAB_04357544:
        lVar4 = (*(code *)*puVar3)(plVar6,puVar3[1]);
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar2 = UnityEngine_Object__op_Implicit(lVar4,0);
        if ((uVar2 & 1) != 0) {
          if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          iVar1 = CakeOrder_Home_Journey_UIJourneyMilestoneItem__get_GlobalLevel(lVar4,0);
          if ((param_1 < (float)iVar1) && ((float)iVar1 <= param_2)) {
            CakeOrder_Home_Journey_UIJourneyMilestoneItem__PlayReachedEffect(lVar4,0);
          }
        }
        goto joined_r0x04357490;
      }
      if (plVar6 != (long *)0x0) {
        lVar4 = *plVar6;
        uVar2 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar2 != 0) {
          piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
          do {
            if (*(long *)(piVar5 + -2) == DAT_09185a58) {
              puVar3 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
              goto LAB_04357614;
            }
            uVar2 = uVar2 - 1;
            piVar5 = piVar5 + 4;
          } while (uVar2 != 0);
        }
        puVar3 = (undefined8 *)FUN_03f95da8(plVar6,DAT_09185a58,0);
LAB_04357614:
        (*(code *)*puVar3)(plVar6,puVar3[1]);
      }
    }
    FUN_071bd288(plStack_a0,DAT_091a4b50);
    if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c548(lVar4);
    }
  }
  return;
}

