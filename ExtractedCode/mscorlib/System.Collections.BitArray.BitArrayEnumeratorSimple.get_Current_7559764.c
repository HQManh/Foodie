// rea decompile_all
// name: System.Collections.BitArray.BitArrayEnumeratorSimple$$get_Current
// address: 0x7559764
// body: available
// range: 0x7559764-0x75598ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7559860 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75598a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Collections_BitArray_BitArrayEnumeratorSimple__get_Current(long param_1)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  int *piVar9;
  long *plVar10;
  undefined1 local_24 [4];
  
  if ((DAT_09521974 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091857d8);
    DAT_09521974 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == -1) {
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar4 = thunk_FUN_03f9944c();
    puVar5 = &DAT_092016c8;
  }
  else {
    plVar10 = *(long **)(param_1 + 0x10);
    if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    lVar7 = *plVar10;
    uVar8 = (ulong)*(ushort *)(lVar7 + 0x12e);
    if (uVar8 != 0) {
      piVar9 = (int *)(*(long *)(lVar7 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_091857d8) {
          puVar3 = (undefined8 *)(lVar7 + (long)(*piVar9 + 1) * 0x10 + 0x138);
          goto LAB_07559800;
        }
        uVar8 = uVar8 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar8 != 0);
    }
    puVar3 = (undefined8 *)FUN_03f95da8(plVar10,DAT_091857d8,1);
LAB_07559800:
    iVar2 = (*(code *)*puVar3)(plVar10,puVar3[1]);
    if (iVar1 < iVar2) {
      local_24[0] = *(undefined1 *)(param_1 + 0x20);
      FUN_03f5c42c(DAT_09535400,local_24);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_091870e0);
    uVar4 = thunk_FUN_03f9944c();
    puVar5 = &DAT_09201698;
  }
  uVar6 = thunk_FUN_03fc39d4(puVar5);
  System_InvalidOperationException___ctor(uVar4,uVar6,0);
  uVar6 = thunk_FUN_03fc39d4(&DAT_091e6450);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar6);
}

