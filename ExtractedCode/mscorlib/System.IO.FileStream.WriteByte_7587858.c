// rea decompile_all
// name: System.IO.FileStream$$WriteByte
// address: 0x7587858
// body: available
// range: 0x7587858-0x75879ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7587924 to 0x758743c System.IO.FileStream$$FlushBuffer (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7587928 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75879a4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75879a8 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_FileStream__WriteByte(long *param_1,undefined1 param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if (param_1[7] == 0) goto LAB_07587928;
  uVar2 = System_Runtime_InteropServices_SafeHandle__get_IsClosed(param_1[7],0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
    if ((uVar2 & 1) != 0) {
      iVar6 = *(int *)((long)param_1 + 0x5c);
      if (*(int *)((long)param_1 + 100) == iVar6) {
        System_IO_FileStream__FlushBuffer(param_1);
        iVar6 = *(int *)((long)param_1 + 0x5c);
      }
      lVar5 = param_1[5];
      if (iVar6 == 0) {
        if (lVar5 == 0) goto LAB_07587928;
        if (*(int *)(lVar5 + 0x18) != 0) {
          *(undefined1 *)(lVar5 + 0x20) = param_2;
          *(undefined1 *)(param_1 + 0xb) = 1;
          *(undefined4 *)(param_1 + 0xc) = 1;
          System_IO_FileStream__FlushBuffer(param_1);
          return;
        }
      }
      else {
        uVar1 = *(uint *)((long)param_1 + 100);
        *(uint *)((long)param_1 + 100) = uVar1 + 1;
        if (lVar5 == 0) {
LAB_07587928:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (uVar1 < *(uint *)(lVar5 + 0x18)) {
          *(undefined1 *)(lVar5 + (int)uVar1 + 0x20) = param_2;
          if ((int)param_1[0xc] < *(int *)((long)param_1 + 100)) {
            *(int *)(param_1 + 0xc) = *(int *)((long)param_1 + 100);
          }
          *(undefined1 *)(param_1 + 0xb) = 1;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_03f5c558();
    }
    thunk_FUN_03fc39d4(&DAT_09188920);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0920dba0);
    System_NotSupportedException___ctor(uVar3,uVar4,0);
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0920dbb8);
    System_ObjectDisposedException___ctor(uVar3,uVar4,0);
  }
  uVar4 = thunk_FUN_03fc39d4(&DAT_091cc2d8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

