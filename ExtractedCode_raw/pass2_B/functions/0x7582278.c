// rea decompile_all
// name: System.IO.__Error$$WinIOError
// address: 0x7582278
// body: available
// range: 0x7582278-0x75827b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75822f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7582504 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75825b4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75827b0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO___Error__WinIOError(uint param_1,undefined8 param_2)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = System_IO___Error__GetDisplayablePath(param_2,param_1 == 0x7b || param_1 == 0xa1);
  if ((int)param_1 < 0x51) {
    if ((int)param_1 < 0x10) {
      if ((int)param_1 < 5) {
        if (param_1 == 2) {
          if (lVar2 == 0) goto LAB_075825b4;
          if (*(int *)(lVar2 + 0x10) == 0) {
            uVar3 = thunk_FUN_03fc39d4(&DAT_09211a20);
            uVar3 = System_Environment__GetResourceString(uVar3,0);
            thunk_FUN_03fc39d4(&DAT_09184570);
            uVar4 = thunk_FUN_03f9944c();
            System_IO_FileNotFoundException___ctor(uVar4,uVar3,0);
            goto LAB_0758279c;
          }
          uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
          uVar3 = FUN_03f5c394(uVar3,1);
          FUN_039b1d98();
          FUN_039b0da0(uVar3,lVar2);
          FUN_039af17c(uVar3,0,lVar2);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091ff560);
          uVar4 = System_Environment__GetResourceString(uVar4,uVar3,0);
          thunk_FUN_03fc39d4(&DAT_09184570);
          uVar3 = thunk_FUN_03f9944c();
          System_IO_FileNotFoundException___ctor(uVar3,uVar4,lVar2,0);
          goto LAB_075824f0;
        }
        if (param_1 == 3) {
          if (lVar2 != 0) {
            if (*(int *)(lVar2 + 0x10) == 0) {
              uVar3 = thunk_FUN_03fc39d4(&DAT_091ff510);
              uVar3 = System_Environment__GetResourceString(uVar3,0);
            }
            else {
              uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
              uVar3 = FUN_03f5c394(uVar3,1);
              FUN_039b1d98();
              FUN_039b0da0(uVar3,lVar2);
              FUN_039af17c(uVar3,0,lVar2);
              uVar4 = thunk_FUN_03fc39d4(&DAT_091ff508);
              uVar3 = System_Environment__GetResourceString(uVar4,uVar3,0);
            }
            thunk_FUN_03fc39d4(&DAT_09183b80);
            uVar4 = thunk_FUN_03f9944c();
            System_IO_DirectoryNotFoundException___ctor(uVar4,uVar3,0);
            goto LAB_0758279c;
          }
LAB_075825b4:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
      }
      else {
        if (param_1 == 5) {
          if (lVar2 == 0) goto LAB_075825b4;
          if (*(int *)(lVar2 + 0x10) == 0) {
            uVar3 = thunk_FUN_03fc39d4(&DAT_091fb340);
            uVar3 = System_Environment__GetResourceString(uVar3,0);
          }
          else {
            uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
            uVar3 = FUN_03f5c394(uVar3,1);
            FUN_039b1d98();
            FUN_039b0da0(uVar3,lVar2);
            FUN_039af17c(uVar3,0,lVar2);
            uVar4 = thunk_FUN_03fc39d4(&DAT_091fb338);
            uVar3 = System_Environment__GetResourceString(uVar4,uVar3,0);
          }
          thunk_FUN_03fc39d4(&DAT_0918c5d8);
          uVar4 = thunk_FUN_03f9944c();
          System_UnauthorizedAccessException___ctor(uVar4,uVar3,0);
LAB_0758279c:
          uVar3 = thunk_FUN_03fc39d4(&DAT_091e0ea8);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,uVar3);
        }
        if (param_1 == 0xf) {
          uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
          uVar3 = FUN_03f5c394(uVar3,1);
          FUN_039b1d98();
          FUN_039b0da0(uVar3,lVar2);
          FUN_039af17c(uVar3,0,lVar2);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091ff5f8);
          uVar3 = System_Environment__GetResourceString(uVar4,uVar3,0);
          thunk_FUN_03fc39d4(&DAT_09183d88);
          uVar4 = thunk_FUN_03f9944c();
          System_IO_DriveNotFoundException___ctor(uVar4,uVar3);
          goto LAB_0758279c;
        }
      }
      goto LAB_075824ac;
    }
    if (param_1 != 0x20) {
      if (param_1 == 0x50) {
        if (lVar2 == 0) goto LAB_075825b4;
        if (*(int *)(lVar2 + 0x10) != 0) {
          uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
          uVar3 = FUN_03f5c394(uVar3,1);
          FUN_039b1d98();
          FUN_039b0da0(uVar3,lVar2);
          FUN_039af17c(uVar3,0,lVar2);
          uVar4 = thunk_FUN_03fc39d4(&DAT_0920f560);
          uVar4 = System_Environment__GetResourceString(uVar4,uVar3,0);
          param_1 = 0x50;
          goto LAB_075824c0;
        }
      }
      goto LAB_075824ac;
    }
    if (lVar2 == 0) goto LAB_075825b4;
    if (*(int *)(lVar2 + 0x10) == 0) {
      uVar3 = thunk_FUN_03fc39d4(&DAT_0920fb20);
      uVar4 = System_Environment__GetResourceString(uVar3,0);
    }
    else {
      uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
      uVar3 = FUN_03f5c394(uVar3,1);
      FUN_039b1d98();
      FUN_039b0da0(uVar3,lVar2);
      FUN_039af17c(uVar3,0,lVar2);
      uVar4 = thunk_FUN_03fc39d4(&DAT_0920fb18);
      uVar4 = System_Environment__GetResourceString(uVar4,uVar3,0);
    }
    param_1 = 0x20;
  }
  else {
    if (param_1 < 0xb8) {
      if (((param_1 & 0xff) != 0x57) && ((param_1 & 0xff) == 0xb7)) {
        if (lVar2 == 0) goto LAB_075825b4;
        if (*(int *)(lVar2 + 0x10) != 0) {
          uVar3 = thunk_FUN_03fc39d4(&DAT_09180318);
          uVar3 = FUN_03f5c394(uVar3,1);
          FUN_039b1d98();
          FUN_039b0da0(uVar3,lVar2);
          FUN_039af17c(uVar3,0,lVar2);
          uVar4 = thunk_FUN_03fc39d4(&DAT_091fdbb8);
          uVar4 = System_Environment__GetResourceString(uVar4,uVar3,0);
          goto LAB_075824c0;
        }
      }
    }
    else {
      if (param_1 == 0xce) {
        uVar3 = thunk_FUN_03fc39d4(&DAT_0920fef8);
        uVar3 = System_Environment__GetResourceString(uVar3,0);
        thunk_FUN_03fc39d4(&DAT_09188f78);
        uVar4 = thunk_FUN_03f9944c();
        System_IO_PathTooLongException___ctor(uVar4,uVar3,0);
        goto LAB_0758279c;
      }
      if (param_1 == 0x3e3) {
        thunk_FUN_03fc39d4(&DAT_09188c68);
        uVar3 = thunk_FUN_03f9944c();
        System_OperationCanceledException___ctor(uVar3,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091e0ea8);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,uVar4);
      }
    }
LAB_075824ac:
    uVar4 = Microsoft_Win32_Win32Native__GetMessage(param_1,0);
  }
LAB_075824c0:
  uVar1 = Microsoft_Win32_Win32Native__MakeHRFromErrorCode(param_1,0);
  thunk_FUN_03fc39d4(&DAT_09186188);
  uVar3 = thunk_FUN_03f9944c();
  System_IO_IOException___ctor(uVar3,uVar4,uVar1,0);
LAB_075824f0:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091e0ea8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

