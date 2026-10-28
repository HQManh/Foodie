// rea decompile_all
// name: System.IO.File$$ReadAllBytes
// address: 0x7579b8c
// body: available
// range: 0x7579b8c-0x7579daf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7579d34 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7579d58 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7579d5c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7579d64 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7579dac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x07579d60) */

undefined8 System_IO_File__ReadAllBytes(undefined8 param_1)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  
  if ((DAT_09521a9a & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_09184580);
    FUN_03f5c2a4(&DAT_09185a58);
    DAT_09521a9a = 1;
  }
  plVar3 = (long *)thunk_FUN_03f9944c(DAT_09184580);
  System_IO_FileStream___ctor(plVar3,param_1,3,1,1,1,0,0);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar4 = (**(code **)(*plVar3 + 0x1f8))(plVar3,*(undefined8 *)(*plVar3 + 0x200));
  if (0x7fffffff < (long)uVar4) {
    thunk_FUN_03fc39d4(&DAT_09186188);
    uVar5 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_0920f568);
    System_IO_IOException___ctor(uVar5,uVar7,0);
    uVar7 = thunk_FUN_03fc39d4(&DAT_091cc1d8);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,uVar7);
  }
  if (uVar4 == 0) {
    uVar5 = System_IO_File__ReadAllBytesUnknownLength(plVar3);
  }
  else {
    uVar5 = FUN_03f5c394(DAT_0917fc88,uVar4 & 0xffffffff);
    if (0 < (int)uVar4) {
      iVar10 = 0;
      do {
        if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        iVar2 = (**(code **)(*plVar3 + 0x368))
                          (plVar3,uVar5,iVar10,uVar4 & 0xffffffff,*(undefined8 *)(*plVar3 + 0x370));
        if (iVar2 == 0) {
          uVar5 = System_IO_Error__GetEndOfFile(0);
          uVar7 = thunk_FUN_03fc39d4(&DAT_091cc1d8);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar5,uVar7);
        }
        uVar1 = (int)uVar4 - iVar2;
        uVar4 = (ulong)uVar1;
        iVar10 = iVar2 + iVar10;
      } while (0 < (int)uVar1);
    }
  }
  if (plVar3 != (long *)0x0) {
    lVar8 = *plVar3;
    uVar4 = (ulong)*(ushort *)(lVar8 + 0x12e);
    if (uVar4 != 0) {
      piVar9 = (int *)(*(long *)(lVar8 + 0xb0) + 8);
      do {
        if (*(long *)(piVar9 + -2) == DAT_09185a58) {
          puVar6 = (undefined8 *)(lVar8 + (long)*piVar9 * 0x10 + 0x138);
          goto LAB_07579d10;
        }
        uVar4 = uVar4 - 1;
        piVar9 = piVar9 + 4;
      } while (uVar4 != 0);
    }
    puVar6 = (undefined8 *)FUN_03f95da8(plVar3,DAT_09185a58,0);
LAB_07579d10:
    (*(code *)*puVar6)(plVar3,puVar6[1]);
  }
  return uVar5;
}

