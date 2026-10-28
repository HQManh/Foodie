// rea decompile_all
// name: System.IO.BinaryWriter$$Write
// address: 0x7584e44
// body: available
// range: 0x7584e44-0x75850ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758506c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75850b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75850c8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_BinaryWriter__Write(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  uint uVar15;
  
  if ((DAT_09521b01 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091c3e10);
    FUN_03f5c2a4(&DAT_0917fc88);
    DAT_09521b01 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar10 = thunk_FUN_03f9944c();
    uVar11 = thunk_FUN_03fc39d4(&DAT_09225370);
    System_ArgumentNullException___ctor(uVar10,uVar11,0);
LAB_075850a0:
    uVar11 = thunk_FUN_03fc39d4(&DAT_091c3e10);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar10,uVar11);
  }
  plVar8 = *(long **)(param_1 + 0x20);
  if (plVar8 == (long *)0x0) goto LAB_0758506c;
  iVar5 = (**(code **)(*plVar8 + 0x1f8))(plVar8,param_2,*(undefined8 *)(*plVar8 + 0x200));
  System_IO_BinaryWriter__Write7BitEncodedInt(param_1,iVar5);
  plVar8 = (long *)(param_1 + 0x38);
  lVar12 = *plVar8;
  if (lVar12 == 0) {
    lVar12 = FUN_03f5c394(DAT_0917fc88,0x100);
    *plVar8 = lVar12;
    thunk_FUN_03f5d7b8(plVar8,lVar12);
    lVar14 = *plVar8;
    if ((lVar14 == 0) || (plVar9 = *(long **)(param_1 + 0x20), plVar9 == (long *)0x0))
    goto LAB_0758506c;
    iVar6 = (**(code **)(*plVar9 + 0x348))(plVar9,1,*(undefined8 *)(*plVar9 + 0x350));
    lVar12 = *(long *)(param_1 + 0x38);
    iVar4 = 0;
    if (iVar6 != 0) {
      iVar4 = *(int *)(lVar14 + 0x18) / iVar6;
    }
    *(int *)(param_1 + 0x40) = iVar4;
    if (lVar12 == 0) goto LAB_0758506c;
  }
  if (*(int *)(lVar12 + 0x18) < iVar5) {
    if (0 < (int)*(uint *)(param_2 + 0x10)) {
      uVar13 = *(uint *)(param_2 + 0x10);
      uVar15 = 0;
      do {
        uVar3 = *(uint *)(param_1 + 0x40);
        uVar2 = uVar13;
        if ((int)uVar3 <= (int)uVar13) {
          uVar2 = uVar3;
        }
        if (((int)uVar15 < 0) || ((int)uVar3 < 0)) {
LAB_07585070:
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar10 = thunk_FUN_03f9944c();
          uVar11 = thunk_FUN_03fc39d4(&DAT_09218af8);
          System_ArgumentOutOfRangeException___ctor(uVar10,uVar11,0);
          goto LAB_075850a0;
        }
        if ((ulong)uVar2 + (ulong)uVar15 >> 0x1f != 0) {
          uVar10 = FUN_03f5c560();
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar10,DAT_091c3e10);
        }
        if (*(int *)(param_2 + 0x10) < (int)(uVar2 + uVar15)) goto LAB_07585070;
        iVar5 = thunk_FUN_03f68190(0);
        lVar12 = *plVar8;
        if (lVar12 == 0) goto LAB_0758506c;
        plVar9 = *(long **)(param_1 + 0x28);
        if (plVar9 == (long *)0x0) goto LAB_0758506c;
        lVar14 = 0;
        if (*(int *)(lVar12 + 0x18) != 0) {
          lVar14 = lVar12 + 0x20;
        }
        uVar7 = (**(code **)(*plVar9 + 0x1b8))
                          (plVar9,param_2 + (ulong)uVar15 * 2 + (long)iVar5,uVar2,lVar14,
                           *(int *)(lVar12 + 0x18),(int)uVar13 <= (int)uVar3,
                           *(undefined8 *)(*plVar9 + 0x1c0));
        plVar9 = *(long **)(param_1 + 0x10);
        if (plVar9 == (long *)0x0) goto LAB_0758506c;
        (**(code **)(*plVar9 + 0x398))(plVar9,*plVar8,0,uVar7,*(undefined8 *)(*plVar9 + 0x3a0));
        uVar3 = uVar13 - uVar2;
        bVar1 = (int)uVar2 <= (int)uVar13;
        uVar13 = uVar3;
        uVar15 = uVar2 + uVar15;
      } while (uVar3 != 0 && bVar1);
    }
    return;
  }
  plVar9 = *(long **)(param_1 + 0x20);
  if (plVar9 != (long *)0x0) {
    (**(code **)(*plVar9 + 0x268))
              (plVar9,param_2,0,*(undefined4 *)(param_2 + 0x10),lVar12,0,
               *(undefined8 *)(*plVar9 + 0x270));
    plVar9 = *(long **)(param_1 + 0x10);
    if (plVar9 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x07585068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar9 + 0x398))(plVar9,*plVar8,0,iVar5,*(undefined8 *)(*plVar9 + 0x3a0));
      return;
    }
  }
LAB_0758506c:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

