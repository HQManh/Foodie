// rea decompile_all
// name: System.Threading.Tasks.Task$$AddExceptionsFromChildren
// address: 0x76311e4
// body: available
// range: 0x76311e4-0x7631523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7631428 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7631508 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x763150c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7631510 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7631514 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7631518 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7631520 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x076314ac) */
/* WARNING: Removing unreachable block (ram,0x0763151c) */
/* WARNING: Removing unreachable block (ram,0x076314d8) */
/* WARNING: Removing unreachable block (ram,0x07631518) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void System_Threading_Tasks_Task__AddExceptionsFromChildren(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  int *piVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  char local_44 [4];
  
  if ((DAT_095221ef & 1) == 0) {
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_0917a788);
    FUN_03f5c2a4(&DAT_0917ae78);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_095221ef = 1;
  }
  lVar7 = *(long *)(param_1 + 0x48);
  local_44[0] = '\0';
  thunk_FUN_03f6a5cc();
  if (lVar7 == 0) {
    return;
  }
  puVar8 = (undefined8 *)(lVar7 + 0x40);
  plVar9 = (long *)*puVar8;
  thunk_FUN_03f6a5cc();
  if (plVar9 == (long *)0x0) {
    return;
  }
  local_44[0] = '\0';
  System_Threading_Monitor__Enter(plVar9,local_44);
  lVar7 = *plVar9;
  uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
  if (uVar5 != 0) {
    piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
    do {
      if (*(long *)(piVar6 + -2) == DAT_0917a788) {
        puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
        goto LAB_076312dc;
      }
      uVar5 = uVar5 - 1;
      piVar6 = piVar6 + 4;
    } while (uVar5 != 0);
  }
  puVar2 = (undefined8 *)FUN_03f95da8(plVar9,DAT_0917a788,0);
LAB_076312dc:
  plVar3 = (long *)(*(code *)*puVar2)(plVar9,puVar2[1]);
  do {
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_09185b10) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_07631358;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185b10,0);
LAB_07631358:
    uVar5 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if ((uVar5 & 1) == 0) {
      if (plVar3 == (long *)0x0) goto LAB_076314a4;
      lVar7 = *plVar3;
      uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
      if (uVar5 == 0) goto LAB_0763147c;
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      break;
    }
    if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar3;
    uVar5 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar5 != 0) {
      piVar6 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar6 + -2) == DAT_0917ae78) {
          puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
          goto LAB_076313bc;
        }
        uVar5 = uVar5 - 1;
        piVar6 = piVar6 + 4;
      } while (uVar5 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_0917ae78,0);
LAB_076313bc:
    lVar7 = (*(code *)*puVar2)(plVar3,puVar2[1]);
    if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar1 = *(uint *)(lVar7 + 0x38);
    thunk_FUN_03f6a5cc();
    if (((uVar1 >> 0x15 & 1) != 0) &&
       (uVar1 = *(uint *)(lVar7 + 0x38), thunk_FUN_03f6a5cc(), (uVar1 >> 0x13 & 1) == 0)) {
      lVar7 = *(long *)(lVar7 + 0x48);
      thunk_FUN_03f6a5cc();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar7 = *(long *)(lVar7 + 0x20);
      thunk_FUN_03f6a5cc();
      if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      uVar4 = System_Threading_Tasks_TaskExceptionHolder__CreateExceptionObject(lVar7,0,0);
      System_Threading_Tasks_Task__AddException(param_1,uVar4,0);
    }
  } while( true );
  while( true ) {
    uVar5 = uVar5 - 1;
    piVar6 = piVar6 + 4;
    if (uVar5 == 0) break;
    if (*(long *)(piVar6 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar7 + (long)*piVar6 * 0x10 + 0x138);
      goto LAB_07631498;
    }
  }
LAB_0763147c:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_07631498:
  (*(code *)*puVar2)(plVar3,puVar2[1]);
LAB_076314a4:
  if (local_44[0] != '\0') {
    FUN_03f6a050(plVar9);
  }
  thunk_FUN_03f6a5cc();
  *puVar8 = 0;
  thunk_FUN_03f5d7b8(puVar8,0);
  return;
}

