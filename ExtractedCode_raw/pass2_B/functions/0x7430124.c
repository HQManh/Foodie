// rea decompile_all
// name: System.String$$Concat
// address: 0x7430124
// body: available
// range: 0x7430124-0x7430347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74302d8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74302dc to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7430310 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_String__Concat(long param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long *plVar13;
  
  if ((DAT_09521018 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091805f8);
    DAT_09521018 = 1;
  }
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar7 = thunk_FUN_03fc39d4(&DAT_09217980);
    System_ArgumentNullException___ctor(uVar6,uVar7,0);
LAB_074302fc:
    uVar7 = thunk_FUN_03fc39d4(&DAT_091da258);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar6,uVar7);
  }
  iVar8 = (int)*(long *)(param_1 + 0x18);
  if (iVar8 < 2) {
    if (*(long *)(param_1 + 0x18) != 0) {
      if (iVar8 == 0) goto LAB_074302d8;
      plVar5 = *(long **)(param_1 + 0x20);
      if ((plVar5 != (long *)0x0) &&
         (lVar2 = (**(code **)(*plVar5 + 0x168))(plVar5,*(undefined8 *)(*plVar5 + 0x170)),
         lVar2 != 0)) {
        return lVar2;
      }
    }
  }
  else {
    lVar2 = FUN_03f5c394(DAT_091805f8);
    if (0 < (int)*(ulong *)(param_1 + 0x18)) {
      uVar12 = 0;
      iVar8 = 0;
      uVar9 = *(ulong *)(param_1 + 0x18) & 0xffffffff;
      plVar5 = (long *)(lVar2 + 0x20);
      plVar13 = (long *)(param_1 + 0x20);
      do {
        if (uVar9 <= uVar12) goto LAB_074302d8;
        plVar3 = (long *)*plVar13;
        if ((plVar3 == (long *)0x0) ||
           (lVar4 = (**(code **)(*plVar3 + 0x168))(plVar3,*(undefined8 *)(*plVar3 + 0x170)),
           lVar4 == 0)) {
          lVar4 = **(long **)(DAT_09535468 + 0xb8);
        }
        if (lVar2 == 0) goto LAB_074302dc;
        if (*(uint *)(lVar2 + 0x18) <= uVar12) goto LAB_074302d8;
        *plVar5 = lVar4;
        thunk_FUN_03f5d7b8(plVar5,lVar4);
        if (lVar4 == 0) goto LAB_074302dc;
        iVar8 = *(int *)(lVar4 + 0x10) + iVar8;
        if (iVar8 < 0) {
          thunk_FUN_03fc39d4(&DAT_09188d60);
          uVar6 = thunk_FUN_03f9944c();
          System_OutOfMemoryException___ctor(uVar6,0);
          goto LAB_074302fc;
        }
        uVar9 = (ulong)*(uint *)(param_1 + 0x18);
        uVar12 = uVar12 + 1;
        plVar13 = plVar13 + 1;
        plVar5 = plVar5 + 1;
      } while ((long)uVar12 < (long)(int)*(uint *)(param_1 + 0x18));
      if (iVar8 != 0) {
        lVar4 = thunk_FUN_03f968a0(iVar8);
        uVar1 = *(uint *)(lVar2 + 0x18);
        if ((int)uVar1 < 1) {
          return lVar4;
        }
        lVar11 = 0;
        iVar8 = 0;
        while ((uint)lVar11 < uVar1) {
          lVar10 = *(long *)(lVar2 + 0x20 + lVar11 * 8);
          System_String__FillStringChecked(lVar4,iVar8,lVar10);
          if (lVar10 == 0) {
LAB_074302dc:
                    /* WARNING: Subroutine does not return */
            FUN_03f5c550();
          }
          uVar1 = *(uint *)(lVar2 + 0x18);
          lVar11 = lVar11 + 1;
          iVar8 = *(int *)(lVar10 + 0x10) + iVar8;
          if ((int)uVar1 <= (int)lVar11) {
            return lVar4;
          }
        }
LAB_074302d8:
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
    }
  }
  return **(long **)(DAT_09535468 + 0xb8);
}

