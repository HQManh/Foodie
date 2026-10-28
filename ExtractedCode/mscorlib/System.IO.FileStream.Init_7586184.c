// rea decompile_all
// name: System.IO.FileStream$$Init
// address: 0x7586184
// body: available
// range: 0x7586184-0x7586473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75863c4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7586428 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7586470 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_FileStream__Init
               (long param_1,long *param_2,int param_3,byte param_4,int param_5,byte param_6,
               uint param_7)

{
  int iVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  int local_44;
  
  if ((DAT_09521b10 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188380);
    DAT_09521b10 = 1;
  }
  local_44 = 0;
  if ((param_7 & 1) == 0) {
    if (param_2 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5c550();
    }
    uVar3 = (**(code **)(*param_2 + 0x188))(param_2,*(undefined8 *)(*param_2 + 400));
    if ((uVar3 & 1) != 0) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_092057e0);
      uVar6 = System_Environment__GetResourceString(uVar4,0);
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_0921c958);
      System_ArgumentException___ctor(uVar4,uVar6,uVar5,0);
      goto LAB_07586414;
    }
  }
  if (param_3 - 1U < 3) {
    if ((param_5 < 1) && ((param_7 & 1) == 0)) {
      uVar4 = thunk_FUN_03fc39d4(&DAT_0920aaf0);
      uVar6 = System_Environment__GetResourceString(uVar4,0);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      uVar5 = thunk_FUN_03fc39d4(&DAT_092185f0);
      System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar6,0);
LAB_07586414:
      uVar6 = thunk_FUN_03fc39d4(&DAT_091cc290);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar6);
    }
    if (*(int *)(DAT_09188380 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    iVar2 = System_IO_MonoIO__GetFileType(param_2,&local_44,0);
    iVar1 = local_44;
    if (local_44 == 0) {
      uVar7 = 1;
      if (iVar2 != 1) {
        if (iVar2 == 0) {
          thunk_FUN_03fc39d4(&DAT_09186188);
          uVar6 = thunk_FUN_03f9944c();
          uVar4 = thunk_FUN_03fc39d4(&DAT_092057e0);
          System_IO_IOException___ctor(uVar6,uVar4,0);
          goto LAB_0758645c;
        }
        uVar7 = 0;
      }
      *(undefined1 *)(param_1 + 0x56) = uVar7;
      *(long *)(param_1 + 0x38) = (long)param_2;
      thunk_FUN_03f5d7b8((long *)(param_1 + 0x38),param_2);
      *(undefined1 *)(param_1 + 0x40) = 1;
      System_IO_FileStream__FlushBuffer(param_1);
      System_IO_FileStream__InitBuffer(param_1,0,1);
      *(int *)(param_1 + 0x50) = param_3;
      *(byte *)(param_1 + 0x54) = param_4 & 1;
      *(byte *)(param_1 + 0x55) = param_6 & 1;
      *(undefined1 *)(param_1 + 0x57) = 0;
      if (*(char *)(param_1 + 0x56) == '\0') {
LAB_075862d8:
        *(undefined8 *)(param_1 + 0x48) = 0;
        return;
      }
      if (*(int *)(DAT_09188380 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar4 = System_IO_MonoIO__Seek(param_2,0,1,&local_44,0);
      iVar1 = local_44;
      *(undefined8 *)(param_1 + 0x68) = uVar4;
      if (local_44 == 0) goto LAB_075862d8;
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      thunk_FUN_03fc39d4(&DAT_09188380);
      FUN_039afb80();
    }
    else {
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      thunk_FUN_03fc39d4(&DAT_09188380);
      FUN_039afb80();
    }
    uVar6 = System_IO_MonoIO__GetException(uVar4,iVar1,0);
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar6 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_09217050);
    System_ArgumentOutOfRangeException___ctor(uVar6,uVar4,0);
  }
LAB_0758645c:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091cc290);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar4);
}

