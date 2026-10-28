// rea decompile_all
// name: System.IO.FileStream$$.ctor
// address: 0x75864a8
// body: available
// range: 0x75864a8-0x7586bcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7586aa0 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7586b6c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7586bc8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_FileStream___ctor
               (long *param_1,long param_2,int param_3,uint param_4,uint param_5,ulong param_6,
               byte param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long *plVar12;
  int local_6c;
  uint local_68;
  undefined4 local_64;
  
  uVar11 = param_6 & 0xffffffff;
  if ((DAT_09521b0f & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188380);
    FUN_03f5c2a4(&DAT_09188f20);
    FUN_03f5c2a4(&DAT_0918a508);
    FUN_03f5c2a4(&DAT_0918b308);
    FUN_03f5c2a4(&DAT_092144d8);
    DAT_09521b0f = 1;
  }
  local_64 = 0;
  plVar12 = param_1 + 6;
  *plVar12 = DAT_092144d8;
  thunk_FUN_03f5d7b8(plVar12);
  if (*(int *)(DAT_0918b308 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_MarshalByRefObject___ctor(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar10 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_09220b48);
    System_ArgumentNullException___ctor(uVar10,uVar9,0);
    goto LAB_07586bb4;
  }
  if (*(int *)(param_2 + 0x10) == 0) {
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar10 = thunk_FUN_03f9944c();
    puVar7 = &DAT_0920a620;
LAB_07586a00:
    uVar9 = thunk_FUN_03fc39d4(puVar7);
    System_ArgumentException___ctor(uVar10,uVar9,0);
  }
  else {
    *(byte *)((long)param_1 + 0x57) = param_7 & 1;
    if ((int)param_6 < 1) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar10 = thunk_FUN_03f9944c();
      uVar9 = thunk_FUN_03fc39d4(&DAT_092185f0);
      puVar7 = &DAT_0920aaf0;
    }
    else {
      if (param_3 - 1U < 6) {
        if (param_4 - 1 < 3) {
          if ((param_5 & 0xffffffef) < 8) {
            if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
              FUN_03f5c424();
            }
            iVar2 = System_String__IndexOfAny(param_2,**(undefined8 **)(DAT_09188f20 + 0xb8),0);
            if (iVar2 == -1) {
              if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              lVar3 = System_IO_Path__InsecureGetFullPath(param_2,0);
              uVar4 = System_IO_Directory__Exists();
              if ((uVar4 & 1) != 0) {
                uVar9 = thunk_FUN_03fc39d4(&DAT_091fb338);
                uVar9 = Locale__GetText(uVar9,0);
                uVar10 = System_IO_FileStream__GetSecureFileName(param_1,lVar3,0);
                uVar9 = System_String__Format(uVar9,uVar10,0);
                thunk_FUN_03fc39d4(&DAT_0918c5d8);
                uVar10 = thunk_FUN_03f9944c();
                System_UnauthorizedAccessException___ctor(uVar10,uVar9,0);
LAB_07586b58:
                uVar9 = thunk_FUN_03fc39d4(&DAT_091cc248);
                    /* WARNING: Subroutine does not return */
                FUN_03f5c414(uVar10,uVar9);
              }
              if ((param_3 != 6) || ((param_4 & 1) == 0)) {
                if ((1 < param_4) || (param_3 - 3U < 2)) {
                  System_Security_SecurityManager__EnsureElevatedPermissions(0);
                  if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar5 = System_IO_Path__GetDirectoryName(lVar3,0);
                  if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_03f5c550();
                  }
                  if (0 < *(int *)(lVar5 + 0x10)) {
                    if (*(int *)(DAT_09188f20 + 0xe4) == 0) {
                      FUN_03f5c424();
                    }
                    System_IO_Path__GetFullPath(lVar5,0);
                    uVar4 = System_IO_Directory__Exists();
                    if ((uVar4 & 1) == 0) {
                      uVar9 = thunk_FUN_03fc39d4(&DAT_091ff500);
                      uVar9 = Locale__GetText(uVar9,0);
                      if ((param_7 & 1) == 0) {
                        lVar5 = thunk_FUN_03fc39d4(&DAT_09188f20);
                        if (*(int *)(lVar5 + 0xe4) == 0) {
                          FUN_03f5c424();
                        }
                        lVar5 = System_IO_Path__GetFullPath(lVar3,0);
                      }
                      uVar9 = System_String__Format(uVar9,lVar5,0);
                      thunk_FUN_03fc39d4(&DAT_09183b80);
                      uVar10 = thunk_FUN_03f9944c();
                      System_IO_DirectoryNotFoundException___ctor(uVar10,uVar9,0);
                      goto LAB_07586b58;
                    }
                  }
                  if ((param_7 & 1) == 0) {
                    *plVar12 = lVar3;
                    thunk_FUN_03f5d7b8(plVar12,lVar3);
                  }
                  if (*(int *)(DAT_09188380 + 0xe4) == 0) {
                    FUN_03f5c424();
                  }
                  lVar5 = System_IO_MonoIO__Open
                                    (lVar3,param_3,param_4,param_5 & 0xffffffef,param_8,&local_64,0)
                  ;
                  if (lVar5 != **(long **)(DAT_09188380 + 0xb8)) {
                    lVar3 = thunk_FUN_03f9944c(DAT_0918a508);
                    Microsoft_Win32_SafeHandles_SafeFileHandle___ctor(lVar3,lVar5,0,0);
                    plVar12 = param_1 + 7;
                    *plVar12 = lVar3;
                    thunk_FUN_03f5d7b8(plVar12,lVar3);
                    lVar3 = DAT_09188380;
                    lVar5 = *plVar12;
                    *(uint *)(param_1 + 10) = param_4;
                    iVar2 = *(int *)(lVar3 + 0xe4);
                    *(undefined1 *)((long)param_1 + 0x54) = 1;
                    if (iVar2 == 0) {
                      FUN_03f5c424();
                    }
                    iVar2 = System_IO_MonoIO__GetFileType(lVar5,&local_64,0);
                    *(bool *)((long)param_1 + 0x56) = iVar2 == 1;
                    *(byte *)((long)param_1 + 0x55) = iVar2 == 1 & (byte)((uint)param_8 >> 0x1e);
                    if (((param_4 == 1) && ((int)param_6 == 0x1000)) && (iVar2 == 1)) {
                      if (*(int *)(DAT_0918b308 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      uVar11 = (**(code **)(*param_1 + 0x1f8))
                                         (param_1,*(undefined8 *)(*param_1 + 0x200));
                      if ((long)uVar11 < 0x1000) {
                        if ((long)uVar11 < 0x3e9) {
                          uVar11 = 1000;
                        }
                      }
                      else {
                        uVar11 = 0x1000;
                      }
                    }
                    System_IO_FileStream__InitBuffer(param_1,uVar11 & 0xffffffff,0);
                    if (param_3 == 6) {
                      if (*(int *)(DAT_0918b308 + 0xe4) == 0) {
                        FUN_03f5c424();
                      }
                      (**(code **)(*param_1 + 0x348))(param_1,0,2,*(undefined8 *)(*param_1 + 0x350))
                      ;
                      lVar3 = (**(code **)(*param_1 + 0x208))
                                        (param_1,*(undefined8 *)(*param_1 + 0x210));
                    }
                    else {
                      lVar3 = 0;
                    }
                    param_1[9] = lVar3;
                    return;
                  }
                  uVar9 = System_IO_FileStream__GetSecureFileName(param_1,lVar3);
                  uVar1 = local_64;
                  thunk_FUN_03fc39d4(&DAT_09188380);
                  FUN_039afb80();
                  uVar10 = System_IO_MonoIO__GetException(uVar9,uVar1,0);
                  goto LAB_07586bb4;
                }
                uVar9 = thunk_FUN_03fc39d4(&DAT_091fecd0);
                uVar9 = Locale__GetText(uVar9,0);
                local_68 = param_4;
                uVar10 = thunk_FUN_03fc39d4(&DAT_09184548);
                uVar10 = FUN_03f5c42c(uVar10,&local_68);
                local_6c = param_3;
                uVar8 = thunk_FUN_03fc39d4(&DAT_09184568);
                uVar8 = FUN_03f5c42c(uVar8,&local_6c);
                uVar9 = System_String__Format(uVar9,uVar10,uVar8,0);
                thunk_FUN_03fc39d4(&DAT_09181548);
                uVar10 = thunk_FUN_03f9944c();
                System_ArgumentException___ctor(uVar10,uVar9,0);
                goto LAB_07586b58;
              }
              thunk_FUN_03fc39d4(&DAT_09181548);
              uVar10 = thunk_FUN_03f9944c();
              puVar7 = &DAT_091fbc78;
            }
            else {
              thunk_FUN_03fc39d4(&DAT_09181548);
              uVar10 = thunk_FUN_03f9944c();
              puVar7 = &DAT_09208588;
            }
            goto LAB_07586a00;
          }
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar10 = thunk_FUN_03f9944c();
          puVar6 = &DAT_092229d8;
        }
        else {
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar10 = thunk_FUN_03f9944c();
          puVar6 = (undefined8 *)&DAT_09217050;
        }
      }
      else {
        if ((param_7 & 1) != 0) {
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar10 = thunk_FUN_03f9944c();
          uVar9 = thunk_FUN_03fc39d4(&DAT_0921f8a0);
          uVar8 = thunk_FUN_03fc39d4(&DAT_09201678);
          System_ArgumentException___ctor(uVar10,uVar9,uVar8,0);
          goto LAB_07586bb4;
        }
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar10 = thunk_FUN_03f9944c();
        puVar6 = &DAT_0921f8a0;
      }
      uVar9 = thunk_FUN_03fc39d4(puVar6);
      puVar7 = &DAT_09201678;
    }
    uVar8 = thunk_FUN_03fc39d4(puVar7);
    System_ArgumentOutOfRangeException___ctor(uVar10,uVar9,uVar8,0);
  }
LAB_07586bb4:
  uVar9 = thunk_FUN_03fc39d4(&DAT_091cc248);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar10,uVar9);
}

