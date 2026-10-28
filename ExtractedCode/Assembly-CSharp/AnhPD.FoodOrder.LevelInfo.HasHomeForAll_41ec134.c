// rea decompile_all
// name: AnhPD.FoodOrder.LevelInfo$$HasHomeForAll
// address: 0x41ec134
// body: available
// range: 0x41ec134-0x41ec73b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x41ec66c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ec720 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ec724 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ec728 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ec72c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ec730 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ec734 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x41ec738 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x041ec6f0) */

bool AnhPD_FoodOrder_LevelInfo__HasHomeForAll
               (long param_1,long *param_2,undefined1 *param_3,long param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  long *plVar11;
  undefined8 uStack_88;
  long local_80;
  long **local_78;
  undefined8 local_70;
  long *local_68;
  
  if ((DAT_09516b32 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919c8a8);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a768);
    FUN_03f5c2a4(&DAT_0917ae48);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_0917b3d8);
    FUN_03f5c2a4(&DAT_091b32a8);
    FUN_03f5c2a4(&DAT_091b0570);
    FUN_03f5c2a4(&DAT_091b32b0);
    FUN_03f5c2a4(&DAT_091b0558);
    FUN_03f5c2a4(&DAT_0917cce8);
    DAT_09516b32 = 1;
  }
  local_70 = 0;
  local_68 = (long *)0x0;
  *param_3 = 0;
  if (param_4 != 0) {
    iVar3 = *(int *)(param_4 + 0x18);
    *(undefined4 *)(param_4 + 0x18) = 0;
    *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
    if (0 < iVar3) {
      System_Array__Clear(*(undefined8 *)(param_4 + 0x10),0,iVar3,0);
    }
  }
  if (param_2 != (long *)0x0) {
    lVar6 = *param_2;
    uVar9 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar9 != 0) {
      piVar10 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar10 + -2) == DAT_0917b3d8) {
          puVar4 = (undefined8 *)(lVar6 + (long)*piVar10 * 0x10 + 0x138);
          goto LAB_041ec284;
        }
        uVar9 = uVar9 - 1;
        piVar10 = piVar10 + 4;
      } while (uVar9 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917b3d8,0);
LAB_041ec284:
    iVar3 = (*(code *)*puVar4)(param_2,puVar4[1]);
    if (iVar3 != 0) {
      lVar6 = thunk_FUN_03f9944c(DAT_0917cce8);
      FUN_057e0400(lVar6,DAT_091b0558);
      if (*(long *)(param_1 + 0x20) != 0) {
        FUN_06fd85dc(*(long *)(param_1 + 0x20),DAT_0919c8a8);
        lVar7 = *param_2;
        uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
        if (uVar9 != 0) {
          piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
          do {
            if (*(long *)(piVar10 + -2) == DAT_0917a768) {
              puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
              goto LAB_041ec350;
            }
            uVar9 = uVar9 - 1;
            piVar10 = piVar10 + 4;
          } while (uVar9 != 0);
        }
        puVar4 = (undefined8 *)FUN_03f95da8(param_2,DAT_0917a768,0);
LAB_041ec350:
        local_68 = (long *)(*(code *)*puVar4)(param_2,puVar4[1]);
        local_78 = &local_68;
        local_80 = 0;
        if (local_68 != (long *)0x0) {
          bVar1 = false;
LAB_041ec398:
          do {
            plVar11 = local_68;
            lVar7 = *local_68;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_09185b10) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_041ec3e4;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(local_68,DAT_09185b10,0);
LAB_041ec3e4:
            uVar9 = (*(code *)*puVar4)(plVar11,puVar4[1]);
            plVar11 = local_68;
            if ((uVar9 & 1) == 0) {
              plVar11 = *local_78;
              if (plVar11 == (long *)0x0) goto LAB_041ec6e0;
              lVar7 = *plVar11;
              uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
              if (uVar9 == 0) goto LAB_041ec6b8;
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              goto LAB_041ec6a0;
            }
            if (local_68 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            lVar7 = *local_68;
            uVar9 = (ulong)*(ushort *)(lVar7 + 0x12e);
            if (uVar9 != 0) {
              piVar10 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
              do {
                if (*(long *)(piVar10 + -2) == DAT_0917ae48) {
                  puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
                  goto LAB_041ec448;
                }
                uVar9 = uVar9 - 1;
                piVar10 = piVar10 + 4;
              } while (uVar9 != 0);
            }
            puVar4 = (undefined8 *)FUN_03f95da8(local_68,DAT_0917ae48,0);
LAB_041ec448:
            uVar5 = (*(code *)*puVar4)(plVar11,puVar4[1]);
            uVar9 = AnhPD_FoodOrder_LevelInfo__TryClaimStation
                              (param_1,uVar5,*(undefined8 *)(param_1 + 0x20),param_5 & 1,&local_70);
            if ((uVar9 & 1) == 0) {
              if ((!bVar1) &&
                 (uVar9 = AnhPD_FoodOrder_LevelInfo__ShelfCanTake(uVar5), (uVar9 & 1) != 0)) {
                if (param_4 != 0) {
                  uStack_88 = 0;
                  thunk_FUN_03f5d7b8(&uStack_88,0);
                  lVar8 = DAT_091b32a8;
                  lVar7 = *(long *)(param_4 + 0x10);
                  *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
                  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  uVar2 = *(uint *)(param_4 + 0x18);
                  if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                    lVar7 = lVar7 + (long)(int)uVar2 * 0x10;
                    *(uint *)(param_4 + 0x18) = uVar2 + 1;
                    puVar4 = (undefined8 *)(lVar7 + 0x28);
                    *puVar4 = uStack_88;
                    *(undefined8 *)(lVar7 + 0x20) = 2;
                    thunk_FUN_03f5d7b8(puVar4,0);
                  }
                  else {
                    FUN_0595c0ac(param_4,2,uStack_88,
                                 *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                  }
                }
                bVar1 = true;
                if (local_68 == (long *)0x0) break;
                goto LAB_041ec398;
              }
              lVar7 = DAT_091b0570;
              if (lVar6 == 0) {
LAB_041ec724:
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              lVar8 = *(long *)(lVar6 + 0x10);
              *(int *)(lVar6 + 0x1c) = *(int *)(lVar6 + 0x1c) + 1;
              if (lVar8 == 0) goto LAB_041ec724;
              uVar2 = *(uint *)(lVar6 + 0x18);
              if (uVar2 < *(uint *)(lVar8 + 0x18)) {
                *(uint *)(lVar6 + 0x18) = uVar2 + 1;
                puVar4 = (undefined8 *)(lVar8 + (long)(int)uVar2 * 8 + 0x20);
                *puVar4 = uVar5;
                thunk_FUN_03f5d7b8(puVar4,uVar5);
              }
              else {
                FUN_057e0c68(lVar6,uVar5,
                             *(undefined8 *)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
              }
              if (param_4 != 0) {
                uStack_88 = 0;
                thunk_FUN_03f5d7b8(&uStack_88,0);
                lVar8 = DAT_091b32a8;
                lVar7 = *(long *)(param_4 + 0x10);
                *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
                if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar2 = *(uint *)(param_4 + 0x18);
                if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                  lVar7 = lVar7 + (long)(int)uVar2 * 0x10;
                  *(uint *)(param_4 + 0x18) = uVar2 + 1;
                  puVar4 = (undefined8 *)(lVar7 + 0x28);
                  *puVar4 = uStack_88;
                  *(undefined8 *)(lVar7 + 0x20) = 0;
                  thunk_FUN_03f5d7b8(puVar4,0);
                }
                else {
                  FUN_0595c0ac(param_4,0,uStack_88,
                               *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
                }
              }
            }
            else if (param_4 != 0) {
              uStack_88 = local_70;
              thunk_FUN_03f5d7b8(&uStack_88);
              lVar8 = DAT_091b32a8;
              lVar7 = *(long *)(param_4 + 0x10);
              *(int *)(param_4 + 0x1c) = *(int *)(param_4 + 0x1c) + 1;
              if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c550();
              }
              uVar2 = *(uint *)(param_4 + 0x18);
              if (uVar2 < *(uint *)(lVar7 + 0x18)) {
                lVar7 = lVar7 + (long)(int)uVar2 * 0x10;
                *(uint *)(param_4 + 0x18) = uVar2 + 1;
                puVar4 = (undefined8 *)(lVar7 + 0x28);
                *puVar4 = uStack_88;
                *(undefined8 *)(lVar7 + 0x20) = 1;
                thunk_FUN_03f5d7b8(puVar4,0);
              }
              else {
                FUN_0595c0ac(param_4,1,uStack_88,
                             *(undefined8 *)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
              }
            }
          } while (local_68 != (long *)0x0);
        }
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      goto LAB_041ec730;
    }
  }
  return true;
  while( true ) {
    uVar9 = uVar9 - 1;
    piVar10 = piVar10 + 4;
    if (uVar9 == 0) break;
LAB_041ec6a0:
    if (*(long *)(piVar10 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar10 * 0x10 + 0x138);
      goto LAB_041ec6d4;
    }
  }
LAB_041ec6b8:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar11,DAT_09185a58,0);
LAB_041ec6d4:
  (*(code *)*puVar4)(plVar11,puVar4[1]);
LAB_041ec6e0:
  if (local_80 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c548();
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    uVar9 = AnhPD_FoodOrder_AreaService__CanPlaceAll(*(long *)(param_1 + 0x40),lVar6,0);
    bVar1 = (uVar9 & 1) == 0;
    if (bVar1) {
      *param_3 = 1;
    }
    return !bVar1;
  }
LAB_041ec730:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

