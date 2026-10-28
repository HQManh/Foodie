// rea decompile_all
// name: System.Collections.BitArray.BitArrayEnumeratorSimple$$MoveNext
// address: 0x75595bc
// body: available
// range: 0x75595bc-0x7559763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7559718 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7559760 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool System_Collections_BitArray_BitArrayEnumeratorSimple__MoveNext(long param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  int *piVar11;
  long *plVar12;
  
  if ((DAT_09521973 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091857d8);
    DAT_09521973 = 1;
  }
  plVar12 = *(long **)(param_1 + 0x10);
  if (plVar12 != (long *)0x0) {
    if (*(int *)(param_1 + 0x1c) != *(int *)((long)plVar12 + 0x1c)) {
      thunk_FUN_03fc39d4(&DAT_091870e0);
      uVar7 = thunk_FUN_03f9944c();
      uVar8 = thunk_FUN_03fc39d4(&DAT_091feb80);
      System_InvalidOperationException___ctor(uVar7,uVar8,0);
      uVar8 = thunk_FUN_03fc39d4(&DAT_091e6440);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar7,uVar8);
    }
    lVar9 = *plVar12;
    iVar2 = *(int *)(param_1 + 0x18);
    uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
    if (uVar10 != 0) {
      piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
      do {
        if (*(long *)(piVar11 + -2) == DAT_091857d8) {
          puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
          goto LAB_07559660;
        }
        uVar10 = uVar10 - 1;
        piVar11 = piVar11 + 4;
      } while (uVar10 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar12,DAT_091857d8,1);
LAB_07559660:
    iVar4 = (*(code *)*puVar6)(plVar12,puVar6[1]);
    if (iVar2 < iVar4 + -1) {
      iVar1 = *(int *)(param_1 + 0x18) + 1;
      *(int *)(param_1 + 0x18) = iVar1;
      if (*(long *)(param_1 + 0x10) == 0) goto LAB_07559718;
      bVar3 = System_Collections_BitArray__Get(*(long *)(param_1 + 0x10),iVar1,0);
      *(byte *)(param_1 + 0x20) = bVar3 & 1;
    }
    else {
      lVar9 = *plVar12;
      uVar10 = (ulong)*(ushort *)(lVar9 + 0x12e);
      if (uVar10 != 0) {
        piVar11 = (int *)(*(long *)(lVar9 + 0xb0) + 8);
        do {
          if (*(long *)(piVar11 + -2) == DAT_091857d8) {
            puVar6 = (undefined8 *)(lVar9 + (long)(*piVar11 + 1) * 0x10 + 0x138);
            goto LAB_075596f0;
          }
          uVar10 = uVar10 - 1;
          piVar11 = piVar11 + 4;
        } while (uVar10 != 0);
      }
      puVar6 = (undefined8 *)FUN_03f95da8(plVar12,DAT_091857d8,1);
LAB_075596f0:
      uVar5 = (*(code *)*puVar6)(plVar12,puVar6[1]);
      *(undefined4 *)(param_1 + 0x18) = uVar5;
    }
    return iVar2 < iVar4 + -1;
  }
LAB_07559718:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

