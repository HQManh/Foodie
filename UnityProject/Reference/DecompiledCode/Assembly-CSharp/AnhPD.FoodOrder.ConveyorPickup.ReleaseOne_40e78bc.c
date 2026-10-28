// rea decompile_all
// name: AnhPD.FoodOrder.ConveyorPickup$$ReleaseOne
// address: 0x40e78bc
// body: available
// range: 0x40e78bc-0x40e7ebb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x40e7ac4 to 0x40e8344 AnhPD.FoodOrder.IngredientConveyorItem$$PlayReleasePop (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x40e7ea4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7ea8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7eac to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7eb0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x40e7eb8 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x040e7eb4) */

void AnhPD_FoodOrder_ConveyorPickup__ReleaseOne
               (undefined1 param_1 [16],undefined4 param_2,undefined4 param_3,undefined8 param_4,
               long param_5,undefined8 param_6)

{
  long lVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  long *plVar10;
  long lVar11;
  undefined4 uVar12;
  long *local_98;
  long **pplStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long *local_70;
  long **pplStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long *local_38;
  
  if ((DAT_09516097 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091747a0);
    FUN_03f5c2a4(&DAT_09180e78);
    FUN_03f5c2a4(&DAT_091c6260);
    FUN_03f5c2a4(&DAT_091a5018);
    FUN_03f5c2a4(&DAT_091a5020);
    FUN_03f5c2a4(&DAT_091a5028);
    FUN_03f5c2a4(&DAT_09178b20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a5a0);
    FUN_03f5c2a4(&DAT_0917ac50);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_091b22e8);
    FUN_03f5c2a4(&DAT_091ac680);
    FUN_03f5c2a4(&DAT_0917c0a8);
    FUN_03f5c2a4(&DAT_091881a0);
    FUN_03f5c2a4(&DAT_09189140);
    FUN_03f5c2a4(&DAT_091e69c8);
    FUN_03f5c2a4(&DAT_091e69d0);
    FUN_03f5c2a4(&DAT_091e69d8);
    FUN_03f5c2a4(&DAT_091e69e0);
    FUN_03f5c2a4(&DAT_0918ee10);
    DAT_09516097 = 1;
  }
  local_50 = 0;
  local_38 = (long *)0x0;
  pplStack_68 = (long **)0x0;
  local_70 = (long *)0x0;
  local_58 = 0;
  local_60 = 0;
  lVar1 = thunk_FUN_03f9944c(DAT_0918ee10);
  System_Object___ctor(lVar1,0);
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x10) = param_4;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x10),param_4);
    plVar10 = (long *)(lVar1 + 0x18);
    *plVar10 = param_5;
    thunk_FUN_03f5d7b8(plVar10,param_5);
    *(undefined8 *)(lVar1 + 0x28) = param_6;
    thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x28),param_6);
    if (*plVar10 != 0) {
      AnhPD_FoodOrder_IngredientConveyorItem__BeginReleasePop();
      plVar2 = (long *)*plVar10;
      if (plVar2 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar2 + 0x1b8))(plVar2,*(undefined8 *)(*plVar2 + 0x1c0));
        lVar11 = *plVar10;
        if ((uVar3 & 1) == 0) {
          if ((lVar11 != 0) &&
             (lVar11 = UnityEngine_Component__get_transform(lVar11,0), lVar11 != 0)) {
            uVar12 = UnityEngine_Transform__get_position(lVar11,0);
            *(undefined4 *)(lVar1 + 0x38) = uVar12;
            *(undefined4 *)(lVar1 + 0x3c) = param_2;
            *(undefined4 *)(lVar1 + 0x40) = param_3;
            if (**(long **)(DAT_091881a0 + 0xb8) != 0) {
              plVar2 = (long *)(lVar1 + 0x30);
              *plVar2 = *(long *)(**(long **)(DAT_091881a0 + 0xb8) + 0x110);
              thunk_FUN_03f5d7b8(plVar2);
              if (*(long *)(lVar1 + 0x28) != 0) {
                FUN_058e1ec4(&local_98,*(long *)(lVar1 + 0x28),DAT_091b22e8);
                pplStack_68 = pplStack_90;
                local_70 = local_98;
                local_58 = uStack_80;
                local_60 = local_88;
                local_50 = local_78;
                local_98 = (long *)0x0;
                pplStack_90 = &local_70;
                while (uVar3 = FUN_07220620(&local_70,DAT_091a5020), (uVar3 & 1) != 0) {
                  if (*plVar2 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  AnhPD_FoodOrder_LevelInfo__ReserveHome(*plVar2,local_60,local_58,local_50,0);
                }
                FUN_0722061c(&local_70,DAT_091a5018);
                if ((*plVar10 != 0) &&
                   (plVar10 = *(long **)(*plVar10 + 0x90), plVar10 != (long *)0x0)) {
                  lVar11 = *plVar10;
                  uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
                  if (uVar3 != 0) {
                    piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                    do {
                      if (*(long *)(piVar9 + -2) == DAT_0917a5a0) {
                        puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
                        goto LAB_040e7bfc;
                      }
                      uVar3 = uVar3 - 1;
                      piVar9 = piVar9 + 4;
                    } while (uVar3 != 0);
                  }
                  puVar5 = (undefined8 *)FUN_03f95da8(plVar10,DAT_0917a5a0,0);
LAB_040e7bfc:
                  local_38 = (long *)(*(code *)*puVar5)(plVar10,puVar5[1]);
                  pplStack_90 = &local_38;
                  local_98 = (long *)0x0;
                  do {
                    plVar10 = local_38;
                    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar11 = *local_38;
                    uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar3 != 0) {
                      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == DAT_09185b10) {
                          puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
                          goto LAB_040e7c80;
                        }
                        uVar3 = uVar3 - 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar3 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_03f95da8(local_38,DAT_09185b10,0);
LAB_040e7c80:
                    uVar3 = (*(code *)*puVar5)(plVar10,puVar5[1]);
                    plVar10 = local_38;
                    if ((uVar3 & 1) == 0) {
                      if (local_38 == (long *)0x0) goto LAB_040e7d88;
                      lVar11 = *local_38;
                      uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
                      if (uVar3 == 0) goto LAB_040e7d60;
                      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      goto LAB_040e7d48;
                    }
                    if (local_38 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_03f5c550();
                    }
                    lVar11 = *local_38;
                    uVar3 = (ulong)*(ushort *)(lVar11 + 0x12e);
                    if (uVar3 != 0) {
                      piVar9 = (int *)(*(long *)(lVar11 + 0xb0) + 8);
                      do {
                        if (*(long *)(piVar9 + -2) == DAT_0917ac50) {
                          puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
                          goto LAB_040e7ce4;
                        }
                        uVar3 = uVar3 - 1;
                        piVar9 = piVar9 + 4;
                      } while (uVar3 != 0);
                    }
                    puVar5 = (undefined8 *)FUN_03f95da8(local_38,DAT_0917ac50,0);
LAB_040e7ce4:
                    uVar4 = (*(code *)*puVar5)(plVar10,puVar5[1]);
                    if (*(int *)(DAT_09189140 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    AnhPD_FoodOrder_PieceLedger__BeltOut(uVar4,1,0);
                  } while( true );
                }
              }
            }
          }
        }
        else {
          uVar4 = thunk_FUN_03f9944c(DAT_09180e78);
          System_Action___ctor(uVar4,lVar1,DAT_091e69c8,0);
          if (lVar11 != 0) {
            AnhPD_FoodOrder_IngredientConveyorItem__PlayReleasePop(lVar11,uVar4);
            return;
          }
        }
      }
    }
  }
  goto LAB_040e7eb0;
  while( true ) {
    uVar3 = uVar3 - 1;
    piVar9 = piVar9 + 4;
    if (uVar3 == 0) break;
LAB_040e7d48:
    if (*(long *)(piVar9 + -2) == DAT_09185a58) {
      puVar5 = (undefined8 *)(lVar11 + (long)*piVar9 * 0x10 + 0x138);
      goto LAB_040e7d7c;
    }
  }
LAB_040e7d60:
  puVar5 = (undefined8 *)FUN_03f95da8(local_38,DAT_09185a58,0);
LAB_040e7d7c:
  (*(code *)*puVar5)(plVar10,puVar5[1]);
LAB_040e7d88:
  *(undefined4 *)(lVar1 + 0x20) = 0;
  uVar4 = thunk_FUN_03f9944c(DAT_0917c0a8);
  FUN_057e0400(uVar4,DAT_091ac680);
  *(undefined8 *)(lVar1 + 0x48) = uVar4;
  thunk_FUN_03f5d7b8((undefined8 *)(lVar1 + 0x48),uVar4);
  lVar11 = *(long *)(lVar1 + 0x18);
  uVar4 = thunk_FUN_03f9944c(DAT_09178b20);
  FUN_053239c8(uVar4,0,DAT_091c6260,0);
  uVar6 = thunk_FUN_03f9944c(DAT_091747a0);
  FUN_070a8c30(uVar6,lVar1,DAT_091e69d0,0);
  uVar7 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar7,lVar1,DAT_091e69d8,0);
  uVar8 = thunk_FUN_03f9944c(DAT_09180e78);
  System_Action___ctor(uVar8,lVar1,DAT_091e69e0,0);
  if (lVar11 != 0) {
    AnhPD_FoodOrder_IngredientConveyorItem__PlayReleaseSequence(lVar11,uVar4,uVar6,uVar7,uVar8);
    return;
  }
LAB_040e7eb0:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

