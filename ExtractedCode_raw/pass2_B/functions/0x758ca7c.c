// rea decompile_all
// name: System.IO.Path$$CanonicalizePath
// address: 0x758ca7c
// body: available
// range: 0x758ca7c-0x758ce8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758ce84 to 0x7425784 System.String$$Concat (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x758ce88 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758ce8c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_IO_Path__CanonicalizePath(long param_1)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  short sVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  
  if ((DAT_09521b47 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0917fcc8);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_091f9080);
    FUN_03f5c2a4(&DAT_091f5700);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09521b47 = 1;
  }
  if (param_1 == 0) {
    return 0;
  }
  uVar6 = System_Environment__get_IsRunningOnWindows(0);
  if (((uVar6 & 1) != 0) && (param_1 = System_String__Trim(param_1,0), param_1 == 0))
  goto LAB_0758ce8c;
  if (*(int *)(param_1 + 0x10) == 0) {
    return param_1;
  }
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar7 = System_IO_Path__GetPathRoot(param_1);
  lVar8 = FUN_03f5c394(DAT_0917fcc8,2);
  if (lVar8 == 0) goto LAB_0758ce8c;
  if (*(int *)(lVar8 + 0x18) == 0) goto LAB_0758ce88;
  lVar12 = *(long *)(DAT_09188f20 + 0xb8);
  *(undefined2 *)(lVar8 + 0x20) = *(undefined2 *)(lVar12 + 10);
  if (*(int *)(lVar8 + 0x18) == 1) goto LAB_0758ce88;
  *(undefined2 *)(lVar8 + 0x22) = *(undefined2 *)(lVar12 + 8);
  lVar8 = System_String__Split(param_1,lVar8,0);
  uVar6 = System_Environment__get_IsRunningOnWindows(0);
  if ((uVar6 & 1) == 0) goto LAB_0758cc24;
  if (lVar7 == 0) goto LAB_0758ce8c;
  if (*(int *)(lVar7 + 0x10) < 3) {
LAB_0758cc24:
    bVar3 = 0;
    iVar11 = 0;
  }
  else {
    uVar5 = System_String__get_Chars(lVar7,0,0);
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188f20);
    }
    uVar6 = System_IO_Path__IsDirectorySeparator(uVar5);
    if ((uVar6 & 1) == 0) goto LAB_0758cc24;
    uVar5 = System_String__get_Chars(lVar7,1,0);
    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188f20);
    }
    bVar3 = System_IO_Path__IsDirectorySeparator(uVar5);
    iVar11 = 3;
    if ((bVar3 & 1) == 0) {
      iVar11 = 0;
    }
  }
  if (lVar8 == 0) {
LAB_0758ce8c:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar2 = (long *)(lVar8 + 0x20);
  uVar13 = 0;
  lVar12 = lVar7;
  if (0 < (int)*(undefined8 *)(lVar8 + 0x18)) {
    lVar15 = -2;
    plVar14 = plVar2;
    do {
      uVar6 = lVar15 + 2;
      uVar9 = System_Environment__get_IsRunningOnWindows(0);
      if ((uVar9 & 1) != 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_0758ce88;
        if (*plVar14 == 0) goto LAB_0758ce8c;
        lVar10 = System_String__TrimEnd(*plVar14,0);
        if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_0758ce88;
        *plVar14 = lVar10;
        thunk_FUN_03f5d7b8(plVar14,lVar10);
      }
      if ((bVar3 & lVar15 == 0) == 0) {
        if (*(uint *)(lVar8 + 0x18) <= uVar6) goto LAB_0758ce88;
        uVar9 = System_String__op_Equality(*plVar14,DAT_091f8f68,0);
        if ((uVar9 & 1) == 0) {
          if (lVar15 != -2) goto LAB_0758ccb4;
          uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
          goto LAB_0758cd00;
        }
      }
      else {
LAB_0758ccb4:
        uVar9 = (ulong)*(uint *)(lVar8 + 0x18);
        if (uVar9 <= uVar6) goto LAB_0758ce88;
        if (*plVar14 == 0) goto LAB_0758ce8c;
        if (*(int *)(*plVar14 + 0x10) != 0) {
LAB_0758cd00:
          if (uVar9 <= uVar6) goto LAB_0758ce88;
          uVar9 = System_String__op_Equality(*plVar14,DAT_091f9080,0);
          if ((uVar9 & 1) == 0) {
            if ((*(uint *)(lVar8 + 0x18) <= uVar6) || (*(uint *)(lVar8 + 0x18) <= uVar13))
            goto LAB_0758ce88;
            lVar10 = (long)(int)uVar13;
            lVar1 = (long)(int)uVar13;
            uVar13 = uVar13 + 1;
            *(long *)(lVar8 + lVar10 * 8 + 0x20) = *plVar14;
            thunk_FUN_03f5d7b8(plVar2 + lVar1);
          }
          else {
            uVar13 = uVar13 - (iVar11 < (int)uVar13);
          }
        }
      }
      lVar10 = lVar15 + 3;
      lVar15 = lVar15 + 1;
      plVar14 = plVar14 + 1;
    } while (lVar10 < *(int *)(lVar8 + 0x18));
    if (uVar13 != 0) {
      if (uVar13 == 1) {
        if (*(int *)(lVar8 + 0x18) == 0) {
LAB_0758ce88:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        uVar6 = System_String__op_Equality(*plVar2,DAT_091f5700,0);
        if ((uVar6 & 1) != 0) {
          return lVar7;
        }
      }
      if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      lVar12 = System_String__Join(*(undefined8 *)(*(long *)(DAT_09188f20 + 0xb8) + 0x10),lVar8,0,
                                   uVar13,0);
      uVar6 = System_Environment__get_IsRunningOnWindows(0);
      if (((uVar6 & 1) == 0) &&
         (uVar6 = System_String__op_Inequality(lVar7,DAT_091f5700,0), (uVar6 & 1) != 0)) {
        if (lVar12 == 0) goto LAB_0758ce8c;
        if ((0 < *(int *)(lVar12 + 0x10)) &&
           (sVar4 = System_String__get_Chars(lVar12,0,0), sVar4 != 0x2f)) {
          lVar7 = System_String__Concat(lVar7,lVar12,0);
          return lVar7;
        }
      }
    }
  }
  return lVar12;
}

