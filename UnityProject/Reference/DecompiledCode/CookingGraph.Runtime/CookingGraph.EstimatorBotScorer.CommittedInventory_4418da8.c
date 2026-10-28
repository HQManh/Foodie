// rea decompile_all
// name: CookingGraph.EstimatorBotScorer$$CommittedInventory
// address: 0x4418da8
// body: available
// range: 0x4418da8-0x441916b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x44190c0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x441915c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4419164 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x4419168 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x04419160) */

undefined8 CookingGraph_EstimatorBotScorer__CommittedInventory(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  ulong uVar6;
  int *piVar7;
  undefined8 uVar8;
  undefined4 uVar9;
  
  if ((DAT_09517f0e & 1) == 0) {
    FUN_03f5c2a4(&DAT_0919d078);
    FUN_03f5c2a4(&DAT_091762d0);
    FUN_03f5c2a4(&DAT_091c9988);
    FUN_03f5c2a4(&DAT_09184160);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a370);
    FUN_03f5c2a4(&DAT_0917aa00);
    FUN_03f5c2a4(&DAT_09185b10);
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188ad0);
    DAT_09517f0e = 1;
  }
  uVar1 = thunk_FUN_03f9944c(DAT_091762d0);
  FUN_06fe1d68(uVar1,DAT_0919d078);
  lVar2 = DAT_091c9988;
  if (param_1 == (long *)0x0) {
    lVar5 = *(long *)(DAT_091c9988 + 0x38);
    if (lVar5 == 0) {
      FUN_03f95ac8(DAT_091c9988);
      lVar5 = *(long *)(lVar2 + 0x38);
    }
    lVar5 = *(long *)(lVar5 + 0x10);
    if ((*(ushort *)(lVar5 + 0x135) & 1) == 0) {
      lVar5 = FUN_03f95a6c();
    }
    if (*(int *)(lVar5 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    lVar2 = *(long *)(*(long *)(lVar2 + 0x38) + 0x10);
    if ((*(ushort *)(lVar2 + 0x135) & 1) == 0) {
      lVar2 = FUN_03f95a6c();
    }
    param_1 = (long *)**(undefined8 **)(lVar2 + 0xb8);
    if (param_1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
  }
  lVar2 = *param_1;
  uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar6 != 0) {
    piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar7 + -2) == DAT_0917a370) {
        puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
        goto LAB_04418f38;
      }
      uVar6 = uVar6 - 1;
      piVar7 = piVar7 + 4;
    } while (uVar6 != 0);
  }
  puVar3 = (undefined8 *)FUN_03f95da8(param_1,DAT_0917a370,0);
LAB_04418f38:
  plVar4 = (long *)(*(code *)*puVar3)(param_1,puVar3[1]);
  do {
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04418fcc;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185b10,0);
LAB_04418fcc:
    uVar6 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if ((uVar6 & 1) == 0) {
      if (plVar4 == (long *)0x0) {
        return uVar1;
      }
      lVar2 = *plVar4;
      uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
      if (uVar6 == 0) goto LAB_0441910c;
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      break;
    }
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar2 = *plVar4;
    uVar6 = (ulong)*(ushort *)(lVar2 + 0x12e);
    if (uVar6 != 0) {
      piVar7 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_0917aa00) {
          puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_04419030;
        }
        uVar6 = uVar6 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar6 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_0917aa00,0);
LAB_04419030:
    lVar2 = (*(code *)*puVar3)(plVar4,puVar3[1]);
    if (lVar2 != 0) {
      uVar8 = *(undefined8 *)(lVar2 + 0x10);
      if (*(int *)(DAT_09188ad0 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar6 = UnityEngine_Object__op_Inequality(uVar8,0,0);
      if ((uVar6 & 1) != 0) {
        uVar8 = *(undefined8 *)(lVar2 + 0x10);
        uVar9 = *(undefined4 *)(lVar2 + 0x18);
        if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar9 = System_Math__Max(0,uVar9,0);
        if (*(int *)(DAT_09184160 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        CookingGraph_EstimatorBotScorer__Add(uVar9,uVar1,uVar8);
      }
    }
  } while( true );
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar7 = piVar7 + 4;
    if (uVar6 == 0) break;
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar2 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_04419128;
    }
  }
LAB_0441910c:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar4,DAT_09185a58,0);
LAB_04419128:
  (*(code *)*puVar3)(plVar4,puVar3[1]);
  return uVar1;
}

