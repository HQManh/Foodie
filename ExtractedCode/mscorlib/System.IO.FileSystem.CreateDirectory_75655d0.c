// rea decompile_all
// name: System.IO.FileSystem$$CreateDirectory
// address: 0x75655d0
// body: available
// range: 0x75655d0-0x7565b97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7565b04 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7565b54 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7565b94 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_FileSystem__CreateDirectory(long param_1)

{
  uint uVar1;
  bool bVar2;
  byte bVar3;
  short sVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined4 uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong local_70;
  undefined8 local_68;
  
  if ((DAT_095219d9 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188f58);
    FUN_03f5c2a4(&DAT_091bb3b8);
    FUN_03f5c2a4(&DAT_091bb3c0);
    FUN_03f5c2a4(&DAT_091bb388);
    FUN_03f5c2a4(&DAT_091bb3c8);
    FUN_03f5c2a4(&DAT_0917e940);
    FUN_03f5c2a4(&DAT_09191e88);
    DAT_095219d9 = 1;
  }
  local_70 = 0;
  if (param_1 == 0) {
LAB_07565b04:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar15 = *(uint *)(param_1 + 0x10);
  if (1 < (int)uVar15) {
    if (DAT_09519f66 == '\0') {
      FUN_03f5c2a4(&DAT_091b97b8);
      DAT_09519f66 = '\x01';
    }
    uVar7 = System_String__GetRawStringData(param_1,0);
    uVar14 = *(undefined4 *)(param_1 + 0x10);
    if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09188f58);
    }
    uVar5 = System_IO_PathInternal__EndsInDirectorySeparator(uVar7,uVar14);
    uVar15 = uVar15 - (uVar5 & 1);
    if (uVar15 == 2) {
      sVar4 = System_String__get_Chars(param_1,1,0);
      if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09188f58);
      }
      if (sVar4 == 0x2f) {
        uVar7 = thunk_FUN_03fc39d4(&DAT_0920feb8);
        uVar7 = SR__Format(uVar7,param_1,0);
        thunk_FUN_03fc39d4(&DAT_09186188);
        uVar13 = thunk_FUN_03f9944c();
        System_IO_IOException___ctor(uVar13,uVar7);
        uVar7 = thunk_FUN_03fc39d4(&DAT_091cc318);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar13,uVar7);
      }
      uVar15 = 2;
    }
  }
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
  }
  uVar7 = System_String__GetRawStringData(param_1,0);
  local_68 = 0;
  uVar8 = System_IO_FileSystem__FileExists(uVar7,*(undefined4 *)(param_1 + 0x10),0x4000,&local_68);
  if ((uVar8 & 1) != 0) {
    return;
  }
  lVar9 = thunk_FUN_03f9944c(DAT_0917e940);
  FUN_061a1268(lVar9,DAT_091bb388);
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
  }
  uVar7 = System_String__GetRawStringData(param_1,0);
  uVar14 = *(undefined4 *)(param_1 + 0x10);
  if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
    FUN_03f5c424(DAT_09188f58);
  }
  uVar5 = System_IO_PathInternal__GetRootLength(uVar7,uVar14);
  if (((int)uVar5 < (int)uVar15) && (uVar1 = uVar15 - 1, uVar5 <= uVar1)) {
    do {
      lVar10 = System_String__Substring(param_1,0,uVar15,0);
      if (DAT_09519f66 == '\0') {
        FUN_03f5c2a4(&DAT_091b97b8);
        DAT_09519f66 = '\x01';
        if (lVar10 == 0) goto LAB_07565848;
LAB_07565824:
        uVar7 = System_String__GetRawStringData(lVar10,0);
        uVar14 = *(undefined4 *)(lVar10 + 0x10);
      }
      else {
        if (lVar10 != 0) goto LAB_07565824;
LAB_07565848:
        uVar7 = 0;
        uVar14 = 0;
      }
      local_68 = 0;
      bVar3 = System_IO_FileSystem__FileExists(uVar7,uVar14,0x4000,&local_68);
      uVar15 = uVar1;
      if ((bVar3 & 1) == 0) {
        if (lVar9 == 0) goto LAB_07565b04;
        FUN_061a19e4(lVar9,lVar10,DAT_091bb3c0);
      }
      for (; (int)uVar5 < (int)uVar1; uVar1 = uVar1 - 1) {
        sVar4 = System_String__get_Chars(param_1,uVar1,0);
        if (*(int *)(DAT_09188f58 + 0xe4) == 0) {
          FUN_03f5c424(DAT_09188f58);
        }
        uVar15 = uVar1;
        if (sVar4 == 0x2f) break;
        uVar15 = uVar5;
      }
      uVar1 = uVar15 - 1;
    } while (((int)uVar5 <= (int)uVar1 & (bVar3 ^ 1)) != 0);
  }
  else {
    bVar3 = 0;
  }
  if (lVar9 == 0) goto LAB_07565b04;
  if ((*(int *)(lVar9 + 0x18) == 0 & (bVar3 ^ 1)) == 0) {
    if (*(int *)(lVar9 + 0x18) < 1) {
      return;
    }
    uVar17 = 0;
    uVar8 = 0;
    do {
      lVar10 = FUN_061a18e8(lVar9,DAT_091bb3b8);
      if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
        FUN_03f5c424(DAT_09191e88);
      }
      iVar6 = Interop_Sys__MkDir(lVar10,0x1ff,0);
      if ((iVar6 < 0) && ((int)uVar8 == 0)) {
        if (*(int *)(DAT_09191e88 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        uVar8 = Interop_Sys__GetLastErrorInfo(0);
        local_70 = uVar8;
        if ((int)uVar8 == 0x10014) {
          if (DAT_09519f66 == '\0') {
            FUN_03f5c2a4(&DAT_091b97b8);
            DAT_09519f66 = '\x01';
            if (lVar10 == 0) goto LAB_075659d4;
LAB_075659a0:
            uVar7 = System_String__GetRawStringData(lVar10,0);
            uVar14 = *(undefined4 *)(lVar10 + 0x10);
          }
          else {
            if (lVar10 != 0) goto LAB_075659a0;
LAB_075659d4:
            uVar7 = 0;
            uVar14 = 0;
          }
          uVar11 = System_IO_FileSystem__FileExists(uVar7,uVar14);
          uVar12 = 0x10014;
          uVar16 = uVar8;
          if ((uVar11 & 1) == 0) {
            if (DAT_09519f66 == '\0') {
              FUN_03f5c2a4(&DAT_091b97b8);
              DAT_09519f66 = '\x01';
              if (lVar10 == 0) goto LAB_07565a24;
LAB_075659f8:
              uVar7 = System_String__GetRawStringData(lVar10,0);
              uVar14 = *(undefined4 *)(lVar10 + 0x10);
            }
            else {
              if (lVar10 != 0) goto LAB_075659f8;
LAB_07565a24:
              uVar7 = 0;
              uVar14 = 0;
            }
            uVar12 = System_IO_FileSystem__FileExists(uVar7,uVar14,0x4000,&local_70);
            uVar8 = 0;
            if (((uVar12 & 1) != 0) ||
               (bVar2 = (int)local_70 != 0x10002, uVar12 = local_70, uVar16 = local_70, bVar2))
            goto LAB_07565a60;
          }
          uVar17 = uVar16 >> 0x20;
          uVar8 = uVar12 & 0xffffffff;
          param_1 = lVar10;
        }
        else {
          uVar17 = uVar8 >> 0x20;
        }
      }
LAB_07565a60:
    } while (0 < *(int *)(lVar9 + 0x18));
    if (-1 < iVar6) {
      return;
    }
    if ((int)uVar8 == 0) {
      return;
    }
    uVar8 = uVar8 & 0xffffffff | uVar17 << 0x20;
    goto LAB_07565b6c;
  }
  lVar9 = System_IO_Directory__InternalGetDirectoryRoot(param_1,0);
  if (DAT_09519f66 == '\0') {
    FUN_03f5c2a4(&DAT_091b97b8);
    DAT_09519f66 = '\x01';
    if (lVar9 == 0) goto LAB_07565ac8;
LAB_07565a9c:
    uVar7 = System_String__GetRawStringData(lVar9,0);
    uVar14 = *(undefined4 *)(lVar9 + 0x10);
  }
  else {
    if (lVar9 != 0) goto LAB_07565a9c;
LAB_07565ac8:
    uVar7 = 0;
    uVar14 = 0;
  }
  local_68 = 0;
  uVar8 = System_IO_FileSystem__FileExists(uVar7,uVar14,0x4000,&local_68);
  if ((uVar8 & 1) != 0) {
    return;
  }
  uVar8 = InteropErrorExtensions__Info(0x1002d,0);
LAB_07565b6c:
  uVar7 = Interop__GetExceptionForIoErrno(uVar8,param_1,1,0);
  uVar13 = thunk_FUN_03fc39d4(&DAT_091cc318);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar13);
}

