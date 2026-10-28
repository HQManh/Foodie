// rea decompile_all
// name: System.IO.FileStream$$SetLength
// address: 0x7588c50
// body: available
// range: 0x7588c50-0x7588e5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7588d4c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7588e58 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_FileStream__SetLength(long *param_1,long param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  int local_24;
  
  if ((DAT_09521b19 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09188380);
    DAT_09521b19 = 1;
  }
  local_24 = 0;
  if (param_1[7] == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar2 = System_Runtime_InteropServices_SafeHandle__get_IsClosed(param_1[7],0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x1c8))(param_1,*(undefined8 *)(*param_1 + 0x1d0));
    if ((uVar2 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09188920);
      uVar5 = thunk_FUN_03f9944c();
      puVar3 = &DAT_0920ff70;
    }
    else {
      uVar2 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
      if ((uVar2 & 1) != 0) {
        if (param_2 < 0) {
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar5 = thunk_FUN_03f9944c();
          uVar4 = thunk_FUN_03fc39d4(&DAT_09225380);
          System_ArgumentOutOfRangeException___ctor(uVar5,uVar4,0);
        }
        else {
          System_IO_FileStream__FlushBuffer(param_1);
          lVar6 = param_1[7];
          if (*(int *)(DAT_09188380 + 0xe4) == 0) {
            FUN_03f5c424();
          }
          System_IO_MonoIO__SetLength(lVar6,param_2,&local_24,0);
          if (local_24 == 0) {
            lVar6 = (**(code **)(*param_1 + 0x208))(param_1,*(undefined8 *)(*param_1 + 0x210));
            if (param_2 < lVar6) {
              (**(code **)(*param_1 + 0x218))(param_1,param_2,*(undefined8 *)(*param_1 + 0x220));
            }
            return;
          }
          uVar4 = System_IO_FileStream__GetSecureFileName(param_1,param_1[6]);
          iVar1 = local_24;
          thunk_FUN_03fc39d4(&DAT_09188380);
          FUN_039afb80();
          uVar5 = System_IO_MonoIO__GetException(uVar4,iVar1,0);
        }
        goto LAB_07588e44;
      }
      thunk_FUN_03fc39d4(&DAT_09188920);
      uVar5 = thunk_FUN_03f9944c();
      puVar3 = &DAT_0920ff78;
    }
    uVar4 = thunk_FUN_03fc39d4(puVar3);
    System_NotSupportedException___ctor(uVar5,uVar4,0);
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar5 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0920dbb8);
    System_ObjectDisposedException___ctor(uVar5,uVar4,0);
  }
LAB_07588e44:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091cc2c8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar4);
}

