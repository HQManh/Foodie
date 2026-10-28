// rea decompile_all
// name: AnhPD.FoodOrder.LevelInfo$$CollectBusyStations
// address: 0x41eff4c
// body: available
// range: 0x41eff4c-0x41f03d7 inclusive
// range: 0x41f03dc-0x41f03df inclusive
// range: 0x41f03e4-0x41f03e7 inclusive
// range: 0x41f0430-0x41f0483 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41f03d4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f03dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f03e4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f0470 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f0474 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f0478 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41f0480 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041f046c) */

void AnhPD_FoodOrder_LevelInfo__CollectBusyStations(undefined8 param_1,long *param_2,long param_3)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  int *piVar12;
  long local_a8;
  undefined8 *puStack_a0;
  long *local_98;
  undefined4 local_8c;
  long *local_88;
  long local_80;
  undefined8 uStack_78;
  long *local_70;
  
  if ((DAT_09516b66 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091a27c8);
    FUN_03f5c2a4(&DAT_091a27d0);
    FUN_03f5c2a4(&DAT_091a27d8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b3d8);
    FUN_03f5c2a4(&DAT_091ac050);
    FUN_03f5c2a4(&DAT_091ac060);
    FUN_03f5c2a4(&DAT_091ac068);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09516b66 = 1;
  }
  local_80 = 0;
  uStack_78 = 0;
  local_70 = (long *)0x0;
  local_88 = (long *)0x0;
  local_8c = 0;
  if (param_3 == 0) {
LAB_041f0478:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  iVar6 = *(int *)(param_3 + 0x18);
  *(undefined4 *)(param_3 + 0x18) = 0;
  *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
  if (0 < iVar6) {
    System_Array__Clear(*(undefined8 *)(param_3 + 0x10),0,iVar6,0);
  }
  if (param_2 != (long *)0x0) {
    lVar9 = *param_2;
    uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar11 != 0) {
      piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar12 + -2) == DAT_0917b3d8) {
          puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
          goto LAB_041f00b4;
        }
        uVar11 = uVar11 - 1;
        piVar12 = piVar12 + 4;
      } while (uVar11 != 0);
    }
    puVar7 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3d8,0);
LAB_041f00b4:
    iVar6 = (*(code *)*puVar7)(param_2,puVar7[1]);
    if (iVar6 != 0) {
      if ((**(long **)(DAT_091881a0 + 0xb8) == 0) ||
         (lVar9 = AnhPD_FoodOrder_MessyController__GetCookingStations
                            (**(long **)(DAT_091881a0 + 0xb8),0), lVar9 == 0)) goto LAB_041f0478;
      FUN_057e185c(&local_a8,lVar9,DAT_091ac068);
      uStack_78 = puStack_a0;
      local_80 = local_a8;
      local_70 = local_98;
      puStack_a0 = &local_80;
      local_a8 = 0;
      while (uVar11 = FUN_071bd28c(&local_80,DAT_091a27d0), plVar5 = local_70, lVar9 = local_a8,
            (uVar11 & 1) != 0) {
        if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar11 = UnityEngine_Object__op_Implicit(plVar5,0);
        if ((uVar11 & 1) != 0) {
          lVar9 = *param_2;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_0917a768) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_041f01bc;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a768,0);
LAB_041f01bc:
          local_88 = (long *)(*(code *)*puVar7)(param_2,puVar7[1]);
          bVar2 = 0;
          bVar3 = 0;
LAB_041f01dc:
          plVar4 = local_88;
          if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          lVar9 = *local_88;
          uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
          if (uVar11 != 0) {
            piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
            do {
              if (*(long *)(piVar12 + -2) == DAT_09185b10) {
                puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                goto LAB_041f0230;
              }
              uVar11 = uVar11 - 1;
              piVar12 = piVar12 + 4;
            } while (uVar11 != 0);
          }
          puVar7 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185b10,0);
LAB_041f0230:
          uVar11 = (*(code *)*puVar7)(plVar4,puVar7[1]);
          plVar4 = local_88;
          if ((uVar11 & 1) != 0) {
            if (local_88 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar9 = *local_88;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_0917ae48) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_041f0294;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(local_88,DAT_0917ae48,0);
LAB_041f0294:
            uVar8 = (*(code *)*puVar7)(plVar4,puVar7[1]);
            if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar11 = (**(code **)(*plVar5 + 0x1e8))(plVar5,uVar8,*(undefined8 *)(*plVar5 + 0x1f0));
            if ((uVar11 & 1) != 0) {
              iVar6 = AnhPD_FoodOrder_LevelInfo__StationRoomFor(param_1,plVar5,uVar8,0,0,&local_8c);
              bVar2 = 1;
              bVar3 = 0 < iVar6 | bVar3;
            }
            goto LAB_041f01dc;
          }
          if (local_88 != (long *)0x0) {
            lVar9 = *local_88;
            uVar11 = (ulong)*(ushort *)(lVar9 + 0x12e);
            if (uVar11 != 0) {
              piVar12 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
              do {
                if (*(long *)(piVar12 + -2) == DAT_09185a58) {
                  puVar7 = (undefined8 *)(lVar9 + (long)*piVar12 * 0x10 + 0x138);
                  goto LAB_041f0354;
                }
                uVar11 = uVar11 - 1;
                piVar12 = piVar12 + 4;
              } while (uVar11 != 0);
            }
            puVar7 = (undefined8 *)FUN_03f95da8(local_88,DAT_09185a58,0);
LAB_041f0354:
            (*(code *)*puVar7)(plVar4,puVar7[1]);
          }
          lVar9 = DAT_091ac050;
          if (!(bool)(bVar3 | bVar2 ^ 1)) {
            lVar10 = *(long *)(param_3 + 0x10);
            *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
            if (lVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            uVar1 = *(uint *)(param_3 + 0x18);
            if (uVar1 < *(uint *)(lVar10 + 0x18)) {
              *(uint *)(param_3 + 0x18) = uVar1 + 1;
              puVar7 = (undefined8 *)(lVar10 + (long)(int)uVar1 * 8 + 0x20);
              *puVar7 = plVar5;
              thunk_FUN_03f5d7b8(puVar7,plVar5);
            }
            else {
              FUN_057e0c68(param_3,plVar5,
                           *(undefined8 *)(*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
            }
          }
        }
      }
      FUN_071bd288(puStack_a0,DAT_091a27c8);
      if (lVar9 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c548(lVar9);
      }
    }
  }
  return;
}

