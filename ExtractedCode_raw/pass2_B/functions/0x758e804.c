// rea decompile_all
// name: System.IO.Path$$GetRelativePath
// address: 0x758e804
// body: available
// range: 0x758e804-0x758ecc7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758ec58 to 0x7440700 System.Text.StringBuilderCache$$GetStringAndRelease (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x758ecc0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x758ecc4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_IO_Path__GetRelativePath(undefined8 param_1,long param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  
  if ((DAT_09521b51 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    FUN_03f5c2a4(&DAT_09188f58);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_091f9080);
    FUN_03f5c2a4(&DAT_091f8f68);
    DAT_09521b51 = 1;
  }
  uVar8 = System_String__IsNullOrEmpty(param_1,0);
  if ((uVar8 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    puVar13 = (undefined8 *)&DAT_092217b0;
LAB_0758ec98:
    uVar14 = thunk_FUN_03fc39d4(puVar13);
    System_ArgumentNullException___ctor(uVar9,uVar14,0);
    uVar14 = thunk_FUN_03fc39d4(&DAT_091d5898);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar9,uVar14);
  }
  if (DAT_09515cf2 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09515cf2 = '\x01';
  }
  if (param_2 == 0) {
    uVar9 = 0;
    uVar6 = 0;
  }
  else {
    uVar9 = System_String__GetRawStringData(param_2,0);
    uVar6 = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar8 = System_IO_PathInternal__IsEffectivelyEmpty(uVar9,uVar6,0);
  if ((uVar8 & 1) != 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar9 = thunk_FUN_03f9944c();
    puVar13 = &DAT_09220b48;
    goto LAB_0758ec98;
  }
  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  lVar10 = System_IO_Path__GetFullPath(param_1);
  lVar11 = System_IO_Path__GetFullPath(param_2);
  if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188f58);
  }
  uVar8 = System_IO_PathInternal__AreRootsEqual(lVar10,lVar11,param_3,0);
  if ((uVar8 & 1) == 0) {
    return lVar11;
  }
  if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  iVar3 = System_IO_PathInternal__GetCommonPathLength(lVar10,lVar11,param_3 == 5,0);
  if (iVar3 == 0) {
    return lVar11;
  }
  if (lVar10 == 0) goto LAB_0758ecc4;
  iVar1 = *(int *)(lVar10 + 0x10);
  if (DAT_09515cf2 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09515cf2 = '\x01';
  }
  uVar9 = System_String__GetRawStringData(lVar10,0);
  uVar6 = *(undefined4 *)(lVar10 + 0x10);
  if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188f58);
  }
  uVar4 = System_IO_PathInternal__EndsInDirectorySeparator(uVar9,uVar6,0);
  if (DAT_09515cf2 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09515cf2 = '\x01';
    if (lVar11 == 0) goto LAB_0758ea20;
LAB_0758e9f0:
    uVar9 = System_String__GetRawStringData(lVar11,0);
    uVar6 = *(undefined4 *)(lVar11 + 0x10);
  }
  else {
    if (lVar11 != 0) goto LAB_0758e9f0;
LAB_0758ea20:
    uVar9 = 0;
    uVar6 = 0;
  }
  if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  uVar5 = System_IO_PathInternal__EndsInDirectorySeparator(uVar9,uVar6,0);
  if (lVar11 != 0) {
    iVar7 = *(int *)(lVar11 + 0x10);
    iVar1 = iVar1 - (uVar4 & 1);
    iVar2 = iVar7 - (uVar5 & 1);
    if ((iVar1 <= iVar3) && (iVar1 == iVar2)) {
      return DAT_091f8f68;
    }
    uVar6 = *(undefined4 *)(lVar10 + 0x10);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar9 = System_Math__Max(uVar6,iVar7,0);
    lVar12 = System_Text_StringBuilderCache__Acquire(uVar9,0);
    if (iVar3 < iVar1) {
      if (lVar12 == 0) goto LAB_0758ecc4;
      System_Text_StringBuilder__Append(lVar12,DAT_091f9080,0);
      iVar7 = iVar3 + 1;
      if (iVar7 < iVar1) {
        do {
          uVar6 = System_String__get_Chars(lVar10,iVar7,0);
          if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
            FUN_03f5c424(DAT_09188f58);
          }
          uVar8 = System_IO_PathInternal__IsDirectorySeparator(uVar6,0);
          if ((uVar8 & 1) != 0) {
            if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            System_Text_StringBuilder__Append
                      (lVar12,*(undefined2 *)(*(long *)(DAT_09188f20 + 0xb8) + 10),0);
            System_Text_StringBuilder__Append(lVar12,DAT_091f9080,0);
          }
          iVar7 = iVar7 + 1;
        } while (iVar1 != iVar7);
      }
    }
    else {
      uVar6 = System_String__get_Chars(lVar11,iVar3,0);
      if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188f58);
      }
      uVar4 = System_IO_PathInternal__IsDirectorySeparator(uVar6,0);
      iVar3 = iVar3 + (uVar4 & 1);
    }
    iVar1 = (iVar2 - iVar3) + (uVar5 & 1);
    if (0 < iVar1) {
      if (lVar12 == 0) goto LAB_0758ecc4;
      iVar7 = System_Text_StringBuilder__get_Length(lVar12,0);
      if (0 < iVar7) {
        if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        System_Text_StringBuilder__Append
                  (lVar12,*(undefined2 *)(*(long *)(DAT_09188f20 + 0xb8) + 10),0);
      }
      System_Text_StringBuilder__Append(lVar12,lVar11,iVar3,iVar1,0);
    }
    lVar10 = System_Text_StringBuilderCache__GetStringAndRelease(lVar12,0);
    return lVar10;
  }
LAB_0758ecc4:
                    /* WARNING: Subroutine does not return */
  FUN_03f5c550();
}

