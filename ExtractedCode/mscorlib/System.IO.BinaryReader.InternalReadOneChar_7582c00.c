// rea decompile_all
// name: System.IO.BinaryReader$$InternalReadOneChar
// address: 0x7582c00
// body: available
// range: 0x7582c00-0x7582dcb inclusive
// range: 0x7582e2c-0x7582e2f inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7582dc4 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7582dc8 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7582e2c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_IO_BinaryReader__InternalReadOneChar(long param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  undefined4 uVar8;
  
  if ((DAT_09521afa & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fc88);
    FUN_03f5c2a4(&DAT_0917fcc8);
    DAT_09521afa = 1;
  }
  plVar3 = *(long **)(param_1 + 0x10);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x1c8))(plVar3,*(undefined8 *)(*plVar3 + 0x1d0));
    if ((uVar4 & 1) != 0) {
      plVar3 = *(long **)(param_1 + 0x10);
      if (plVar3 == (long *)0x0) goto LAB_07582e2c;
      (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
    }
    plVar3 = (long *)(param_1 + 0x28);
    if (*plVar3 == 0) {
      lVar5 = FUN_03f5c394(DAT_0917fc88,0x80);
      *plVar3 = lVar5;
      thunk_FUN_03f5d7b8(plVar3,lVar5);
    }
    plVar7 = (long *)(param_1 + 0x30);
    if (*plVar7 == 0) {
      lVar5 = FUN_03f5c394(DAT_0917fcc8,1);
      *plVar7 = lVar5;
      thunk_FUN_03f5d7b8(plVar7,lVar5);
    }
    iVar2 = 0;
    while (iVar2 == 0) {
      cVar1 = *(char *)(param_1 + 0x44);
      plVar6 = *(long **)(param_1 + 0x10);
      uVar8 = 1;
      if (cVar1 != '\0') {
        uVar8 = 2;
      }
      if (plVar6 == (long *)0x0) goto LAB_07582e2c;
      uVar4 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
      lVar5 = *plVar3;
      if (lVar5 == 0) goto LAB_07582e2c;
      if (*(int *)(lVar5 + 0x18) == 0) goto LAB_07582dc4;
      *(char *)(lVar5 + 0x20) = (char)uVar4;
      if (((int)uVar4 == -1) || (cVar1 == '\0')) {
        if ((int)uVar4 == -1) {
          return uVar4;
        }
      }
      else {
        plVar6 = *(long **)(param_1 + 0x10);
        if (plVar6 == (long *)0x0) goto LAB_07582e2c;
        iVar2 = (**(code **)(*plVar6 + 0x388))(plVar6,*(undefined8 *)(*plVar6 + 0x390));
        lVar5 = *plVar3;
        if (lVar5 == 0) goto LAB_07582e2c;
        if ((*(uint *)(lVar5 + 0x18) & 0xfffffffe) == 0) goto LAB_07582dc4;
        *(char *)(lVar5 + 0x21) = (char)iVar2;
        uVar8 = 1;
        if (iVar2 != -1) {
          uVar8 = 2;
        }
      }
      plVar6 = *(long **)(param_1 + 0x20);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c550();
      }
      iVar2 = (**(code **)(*plVar6 + 0x1b8))
                        (plVar6,*plVar3,0,uVar8,*plVar7,0,*(undefined8 *)(*plVar6 + 0x1c0));
    }
    lVar5 = *plVar7;
    if (lVar5 != 0) {
      if (*(int *)(lVar5 + 0x18) != 0) {
        return (ulong)*(ushort *)(lVar5 + 0x20);
      }
LAB_07582dc4:
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
  }
LAB_07582e2c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

