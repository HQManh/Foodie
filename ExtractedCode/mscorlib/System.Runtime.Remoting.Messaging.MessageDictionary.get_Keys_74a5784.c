// rea decompile_all
// name: System.Runtime.Remoting.Messaging.MessageDictionary$$get_Keys
// address: 0x74a5784
// body: available
// range: 0x74a5784-0x74a5b2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74a5874 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5a74 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5b14 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5b18 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5b20 to 0x3f5c8d0 FUN_03f5c8d0 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5b24 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74a5b2c to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074a5b28) */

long * System_Runtime_Remoting_Messaging_MessageDictionary__get_Keys(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  int *piVar5;
  ulong uVar6;
  long *plVar7;
  
  if ((DAT_095213a4 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181588);
    FUN_03f5c2a4(&DAT_09185a20);
    FUN_03f5c2a4(&DAT_09185a58);
    FUN_03f5c2a4(&DAT_09185b08);
    FUN_03f5c2a4(&DAT_09185b10);
    DAT_095213a4 = 1;
  }
  plVar1 = (long *)thunk_FUN_03f9944c(DAT_09181588);
  System_Collections_ArrayList___ctor(plVar1,0);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    uVar6 = 0;
    do {
      if ((long)(int)*(uint *)(lVar4 + 0x18) <= (long)uVar6) {
        plVar7 = *(long **)(param_1 + 0x10);
        if (plVar7 == (long *)0x0) {
          return plVar1;
        }
        lVar4 = *plVar7;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 == 0) goto LAB_074a58b0;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_074a5898;
      }
      if (*(uint *)(lVar4 + 0x18) <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      if (plVar1 == (long *)0x0) break;
      (**(code **)(*plVar1 + 0x308))
                (plVar1,*(undefined8 *)(lVar4 + uVar6 * 8 + 0x20),*(undefined8 *)(*plVar1 + 0x310));
      lVar4 = *(long *)(param_1 + 0x20);
      uVar6 = uVar6 + 1;
    } while (lVar4 != 0);
  }
  goto LAB_074a5874;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar5 = piVar5 + 4;
    if (uVar6 == 0) break;
LAB_074a5ab4:
    if (*(long *)(piVar5 + -2) == DAT_09185a58) {
      puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
      goto LAB_074a5ae8;
    }
  }
LAB_074a5acc:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a58,0);
LAB_074a5ae8:
  (*(code *)*puVar2)(plVar7,puVar2[1]);
  return plVar1;
  while( true ) {
    uVar6 = uVar6 - 1;
    piVar5 = piVar5 + 4;
    if (uVar6 == 0) break;
LAB_074a5898:
    if (*(long *)(piVar5 + -2) == DAT_09185a20) {
      puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 2) * 0x10 + 0x138);
      goto LAB_074a58d0;
    }
  }
LAB_074a58b0:
  puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185a20,2);
LAB_074a58d0:
  plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
  if (plVar7 != (long *)0x0) {
    lVar4 = *plVar7;
    uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
    if (uVar6 != 0) {
      piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
      do {
        if (*(long *)(piVar5 + -2) == DAT_09185b08) {
          puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
          goto LAB_074a5930;
        }
        uVar6 = uVar6 - 1;
        piVar5 = piVar5 + 4;
      } while (uVar6 != 0);
    }
    puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b08,0);
LAB_074a5930:
    plVar7 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
    do {
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185b10) {
            puVar2 = (undefined8 *)(lVar4 + (long)*piVar5 * 0x10 + 0x138);
            goto LAB_074a59b4;
          }
          uVar6 = uVar6 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,0);
LAB_074a59b4:
      uVar6 = (*(code *)*puVar2)(plVar7,puVar2[1]);
      if ((uVar6 & 1) == 0) {
        plVar7 = (long *)thunk_FUN_03f99350(plVar7,DAT_09185a58);
        if (plVar7 == (long *)0x0) {
          return plVar1;
        }
        lVar4 = *plVar7;
        uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
        if (uVar6 == 0) goto LAB_074a5acc;
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        goto LAB_074a5ab4;
      }
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      lVar4 = *plVar7;
      uVar6 = (ulong)*(ushort *)(lVar4 + 0x12e);
      if (uVar6 != 0) {
        piVar5 = (int *)(*(long *)(lVar4 + 0xb0) + 8);
        do {
          if (*(long *)(piVar5 + -2) == DAT_09185b10) {
            puVar2 = (undefined8 *)(lVar4 + (long)(*piVar5 + 1) * 0x10 + 0x138);
            goto LAB_074a5a1c;
          }
          uVar6 = uVar6 - 1;
          piVar5 = piVar5 + 4;
        } while (uVar6 != 0);
      }
      puVar2 = (undefined8 *)FUN_03f95da8(plVar7,DAT_09185b10,1);
LAB_074a5a1c:
      plVar3 = (long *)(*(code *)*puVar2)(plVar7,puVar2[1]);
      if ((plVar3 != (long *)0x0) && (*plVar3 != DAT_09535468)) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c8d0(plVar3);
      }
      uVar6 = System_Runtime_Remoting_Messaging_MessageDictionary__IsOverridenKey(param_1,plVar3);
      if ((uVar6 & 1) == 0) {
        if (plVar1 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        (**(code **)(*plVar1 + 0x308))(plVar1,plVar3,*(undefined8 *)(*plVar1 + 0x310));
      }
    } while( true );
  }
LAB_074a5874:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

