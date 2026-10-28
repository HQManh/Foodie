// rea decompile_all
// name: CookingGraph.CookingLevelSimulation$$TagMoment
// address: 0x4441970
// body: available
// range: 0x4441970-0x4441df3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4441dd4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4441dd8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4441ddc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4441de0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4441de4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4441de8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4441df0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04441dec) */

void CookingGraph_CookingLevelSimulation__TagMoment(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 local_78;
  ulong local_70;
  undefined8 local_68;
  long *local_60;
  int local_54;
  
  if ((DAT_09517ff0 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919e538);
    FUN_03f5c2a4(&DAT_091cb460);
    FUN_03f5c2a4(&DAT_09178730);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a478);
    FUN_03f5c2a4(&DAT_0917ab20);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b6fe8);
    FUN_03f5c2a4(&DAT_091b6ff0);
    FUN_03f5c2a4(&DAT_091e7cf8);
    FUN_03f5c2a4(&DAT_0918f470);
    FUN_03f5c2a4(&DAT_09220ca0);
    FUN_03f5c2a4(&DAT_092256e8);
    DAT_09517ff0 = 1;
  }
  local_54 = 0;
  local_68 = 0;
  local_60 = (long *)0x0;
  local_78 = 0;
  local_70 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918f470);
  CookingGraph_CookingLevelSimulation_<>c__DisplayClass17_0___ctor(lVar1,0);
  if (lVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x180);
    *(undefined8 *)(lVar1 + 0x10) = param_2;
    if ((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x48), lVar5 != 0)) {
      if (*(char *)(lVar5 + 0x13) == '\0') {
        return;
      }
      if ((param_3 & 1) == 0) {
        lVar5 = 0;
      }
      else {
        local_54 = *(int *)(param_1 + 0x20) + 1;
        *(int *)(param_1 + 0x20) = local_54;
        uVar2 = System_Int32__ToString(&local_54,0);
        lVar5 = System_String__Concat(DAT_09220ca0,uVar2,0);
      }
      if (*(long *)(param_1 + 0x178) != 0) {
        uVar2 = CookingGraph_Execution_CookingExecution__get_Transfers(*(long *)(param_1 + 0x178),0)
        ;
        lVar9 = *(long *)(lVar1 + 0x18);
        if (lVar9 == 0) {
          lVar9 = thunk_FUN_03f9944c(DAT_09178730);
          FUN_05322d94(lVar9,lVar1,DAT_091e7cf8,0);
          *(long *)(lVar1 + 0x18) = lVar9;
          thunk_FUN_03f5d7b8((long *)(lVar1 + 0x18),lVar9);
        }
        plVar3 = (long *)FUN_04b0cafc(uVar2,lVar9,DAT_091cb460);
        if (plVar3 != (long *)0x0) {
          lVar1 = *plVar3;
          uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
          if (uVar6 != 0) {
            piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
            do {
              if (*(long *)(piVar7 + -2) == DAT_0917a478) {
                puVar4 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                goto LAB_04441ba4;
              }
              uVar6 = uVar6 - 1;
              piVar7 = piVar7 + 4;
            } while (uVar6 != 0);
          }
          puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917a478,0);
LAB_04441ba4:
          plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
          do {
            local_60 = plVar3;
            if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar1 = *plVar3;
            uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_09185b10) {
                  puVar4 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_04441c38;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_04441c38:
            uVar6 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            plVar3 = local_60;
            if ((uVar6 & 1) == 0) {
              if (local_60 == (long *)0x0) {
                return;
              }
              lVar1 = *local_60;
              uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
              if (uVar6 == 0) goto LAB_04441d8c;
              piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              goto LAB_04441d74;
            }
            if (local_60 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar1 = *local_60;
            uVar6 = (ulong)*(ushort *)(lVar1 + 0x12e);
            if (uVar6 != 0) {
              piVar7 = (int *)(*(long *)(lVar1 + 0xb0) + 8);
              do {
                if (*(long *)(piVar7 + -2) == DAT_0917ab20) {
                  puVar4 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
                  goto LAB_04441c9c;
                }
                uVar6 = uVar6 - 1;
                piVar7 = piVar7 + 4;
              } while (uVar6 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(local_60,DAT_0917ab20,0);
LAB_04441c9c:
            lVar1 = (*(code *)*puVar4)(plVar3,puVar4[1]);
            if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            local_70 = *(ulong *)(lVar1 + 0x70);
            local_68 = *(undefined8 *)(lVar1 + 0x78);
            if ((local_70 & 0xff) == 0) {
              plVar3 = local_60;
              if ((lVar5 != 0) && (*(int *)(lVar1 + 0x40) == 0)) {
                if (*(long *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                FUN_06f533bc(*(long *)(param_1 + 0x10),*(undefined8 *)(lVar1 + 0x28),lVar5,
                             DAT_0919e538);
                plVar3 = local_60;
              }
            }
            else {
              lVar9 = *(long *)(param_1 + 0x10);
              uVar8 = *(undefined8 *)(lVar1 + 0x28);
              local_78 = FUN_05c30ee8(&local_70,DAT_091b6ff0);
              uVar2 = System_Int64__ToString(&local_78,0);
              uVar2 = System_String__Concat(DAT_092256e8,uVar2,0);
              if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              FUN_06f533bc(lVar9,uVar8,uVar2,DAT_0919e538);
              plVar3 = local_60;
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
LAB_04441d74:
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar1 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04441da8;
    }
  }
LAB_04441d8c:
  puVar4 = (undefined8 *)FUN_03f95da8(local_60,DAT_09185a58,0);
LAB_04441da8:
  (*(code *)*puVar4)(plVar3,puVar4[1]);
  return;
}

