// rea decompile_all
// name: _GAME.GameUI.PopupController$$CloseAll
// address: 0x774ba50
// body: available
// range: 0x774ba50-0x774bda3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x774bd8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x774bd90 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x774bd94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x774bd98 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x774bda0 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0774bd9c) */

void _GAME_GameUI_PopupController__CloseAll(void)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 uVar8;
  
  if ((DAT_09522b72 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091ca148);
    FUN_03f5c2a4(&DAT_09178e40);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a6a8);
    FUN_03f5c2a4(&DAT_0917ad88);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09189468);
    FUN_03f5c2a4(&DAT_091ee800);
    FUN_03f5c2a4(&DAT_091935d8);
    DAT_09522b72 = 1;
  }
  if (*(int *)(DAT_09189468 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar1 = _GAME_GameUI_PopupController__OpenInstances();
  if (*(int *)(DAT_091935d8 + 0xe4) == 0) {
    FUN_03f5c424(DAT_091935d8);
  }
  puVar4 = *(undefined8 **)(DAT_091935d8 + 0xb8);
  lVar7 = puVar4[1];
  if (lVar7 == 0) {
    if (*(int *)(DAT_091935d8 + 0xe4) == 0) {
      FUN_03f5c424(DAT_091935d8);
      puVar4 = *(undefined8 **)(DAT_091935d8 + 0xb8);
    }
    uVar8 = *puVar4;
    lVar7 = thunk_FUN_03f9944c(DAT_09178e40);
    FUN_053239c8(lVar7,uVar8,DAT_091ee800,0);
    plVar2 = (long *)(*(long *)(DAT_091935d8 + 0xb8) + 8);
    *plVar2 = lVar7;
    thunk_FUN_03f5d7b8(plVar2,lVar7);
  }
  plVar2 = (long *)FUN_04aeb234(uVar1,lVar7,DAT_091ca148);
  if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  lVar7 = *plVar2;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_0917a6a8) {
        puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_0774bc00;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917a6a8,0);
LAB_0774bc00:
  plVar2 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
  do {
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185b10) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0774bc84;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185b10,0);
LAB_0774bc84:
    uVar5 = (*(code *)*puVar4)(plVar2,puVar4[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar2 == (long *)0x0) {
        return;
      }
      lVar7 = *plVar2;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 == 0) goto LAB_0774bd4c;
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar2;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917ad88) {
          puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_0774bce8;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_0917ad88,0);
LAB_0774bce8:
    plVar3 = (long *)(*(code *)*puVar4)(plVar2,puVar4[1]);
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    (**(code **)(*plVar3 + 0x308))(plVar3,*(undefined8 *)(*plVar3 + 0x310));
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar4 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_0774bd68;
    }
  }
LAB_0774bd4c:
  puVar4 = (undefined8 *)FUN_03f95da8(plVar2,DAT_09185a58,0);
LAB_0774bd68:
  (*(code *)*puVar4)(plVar2,puVar4[1]);
  return;
}

