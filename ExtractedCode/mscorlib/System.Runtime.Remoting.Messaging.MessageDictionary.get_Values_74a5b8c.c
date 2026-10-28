// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MessageDictionary$$get_Values
// address: 0x74a5b8c
// body: available
// range: 0x74a5b8c-0x74a5f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a5c88 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5e4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5eec to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5ef0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5ef4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5ef8 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5f04 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5f08 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5f10 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074a5f0c) */

long * System_Runtime_Remoting_Messaging_MessageDictionary__get_Values(long *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  long *plVar9;
  
  if ((DAT_095213a5 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_09183b38);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_095213a5 = 1;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_09181588);
  System_Collections_ArrayList___ctor(plVar1,0);
  lVar6 = param_1[4];
  if (lVar6 != 0) {
    uVar8 = 0;
    do {
      if ((long)(int)*(uint *)(lVar6 + 0x18) <= (long)uVar8) {
        plVar9 = (long *)param_1[2];
        if (plVar9 == (long *)0x0) {
          return plVar1;
        }
        lVar6 = *plVar9;
        uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
        if (uVar8 == 0) goto LAB_074a5cc4;
        piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
        goto LAB_074a5cac;
      }
      if (*(uint *)(lVar6 + 0x18) <= uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      uVar2 = (**(code **)(*param_1 + 0x288))
                        (param_1,*(undefined8 *)(lVar6 + uVar8 * 8 + 0x20),
                         *(undefined8 *)(*param_1 + 0x290));
      if (plVar1 == (long *)0x0) break;
      (**(code **)(*plVar1 + 0x308))(plVar1,uVar2,*(undefined8 *)(*plVar1 + 0x310));
      lVar6 = param_1[4];
      uVar8 = uVar8 + 1;
    } while (lVar6 != 0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar7 = piVar7 + 4;
    if (uVar8 == 0) break;
LAB_074a5cac:
    if (*(long *)(piVar7 + -2) == DAT_09185a20) {
      puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 9) * 0x10 + 0x138);
      goto LAB_074a5ce4;
    }
  }
LAB_074a5cc4:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a20,9);
LAB_074a5ce4:
  plVar9 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
  do {
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
          goto LAB_074a5d70;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,0);
LAB_074a5d70:
    uVar8 = (*(code *)*puVar3)(plVar9,puVar3[1]);
    if ((uVar8 & 1) == 0) {
      plVar9 = (long *)thunk_FUN_03f99350(plVar9,DAT_09185a58);
      if (plVar9 == (long *)0x0) {
        return plVar1;
      }
      lVar6 = *plVar9;
      uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
      if (uVar8 == 0) goto LAB_074a5ea4;
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      break;
    }
    if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar6 = *plVar9;
    uVar8 = (ulong)*(ushort *)(lVar6 + 0x12e);
    if (uVar8 != 0) {
      piVar7 = (int *)(*(long *)(lVar6 + 0xb0) + 8);
      do {
        if (*(long *)(piVar7 + -2) == DAT_09185b10) {
          puVar3 = (undefined8 *)(lVar6 + (long)(*piVar7 + 1) * 0x10 + 0x138);
          goto LAB_074a5dd8;
        }
        uVar8 = uVar8 - 1;
        piVar7 = piVar7 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185b10,1);
LAB_074a5dd8:
    plVar4 = (long *)(*(code *)*puVar3)(plVar9,puVar3[1]);
    if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    if (*(long *)(*plVar4 + 0x40) != *(long *)(DAT_09183b38 + 0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0();
    }
    plVar5 = (long *)thunk_FUN_03f99594();
    plVar4 = (long *)*plVar5;
    lVar6 = plVar5[1];
    if ((plVar4 != (long *)0x0) && (*plVar4 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c8d0(plVar4,DAT_09535468);
    }
    uVar8 = System_Runtime_Remoting_Messaging_MessageDictionary__IsOverridenKey(param_1);
    if ((uVar8 & 1) == 0) {
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      (**(code **)(*plVar1 + 0x308))(plVar1,lVar6,*(undefined8 *)(*plVar1 + 0x310));
    }
  } while( true );
  while( true ) {
    uVar8 = uVar8 - 1;
    piVar7 = piVar7 + 4;
    if (uVar8 == 0) break;
    if (*(long *)(piVar7 + -2) == DAT_09185a58) {
      puVar3 = (undefined8 *)(lVar6 + (long)*piVar7 * 0x10 + 0x138);
      goto LAB_074a5ec0;
    }
  }
LAB_074a5ea4:
  puVar3 = (undefined8 *)FUN_03f95da8(plVar9,DAT_09185a58,0);
LAB_074a5ec0:
  (*(code *)*puVar3)(plVar9,puVar3[1]);
  return plVar1;
}

