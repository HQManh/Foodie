// rea decompile_all
// name: System.IO.FileStream$$BeginWrite
// address: 0x75885a8
// body: available
// range: 0x75885a8-0x7588887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75886f4 to 0x75898b8 System.IO.FileStream.WriteDelegate$$BeginInvoke (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7588738 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7588884 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_FileStream__BeginWrite
               (long *param_1,long param_2,int param_3,int param_4,undefined8 param_5,
               undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09521b16 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184588);
    FUN_03f5c2a4(&DAT_091cc2e0);
    FUN_03f5c2a4(&DAT_09190940);
    DAT_09521b16 = 1;
  }
  if (param_1[7] == 0) {
LAB_07588738:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = System_Runtime_InteropServices_SafeHandle__get_IsClosed(param_1[7],0);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x1e8))(param_1,*(undefined8 *)(*param_1 + 0x1f0));
    if ((uVar1 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09188920);
      uVar5 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_09210860);
      System_NotSupportedException___ctor(uVar5,uVar6,0);
    }
    else if (param_2 == 0) {
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar5 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_092179d0);
      System_ArgumentNullException___ctor(uVar5,uVar6,0);
    }
    else {
      if (param_4 < 0) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar5 = thunk_FUN_03f9944c();
        puVar3 = (undefined8 *)&DAT_09220080;
      }
      else {
        if (-1 < param_3) {
          if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
            if (*(char *)((long)param_1 + 0x55) == '\0') {
              System_IO_Stream__BeginWriteInternal
                        (param_1,param_2,param_3,param_4,param_5,param_6,0,1);
              return;
            }
            lVar2 = thunk_FUN_03f9944c(DAT_09184588);
            System_IO_FileStreamAsyncResult___ctor(lVar2,param_5,param_6,0);
            if (lVar2 != 0) {
              *(int *)(lVar2 + 0x38) = param_4;
              *(undefined4 *)(lVar2 + 0x3c) = 0xffffffff;
              *(int *)(lVar2 + 0x34) = param_4;
              lVar2 = thunk_FUN_03f9944c(DAT_09190940);
              System_IO_FileStream_WriteDelegate___ctor(lVar2,param_1,DAT_091cc2e0,0);
              if (lVar2 != 0) {
                System_IO_FileStream_WriteDelegate__BeginInvoke
                          (lVar2,param_2,param_3,param_4,param_5,param_6,0);
                return;
              }
            }
            goto LAB_07588738;
          }
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar5 = thunk_FUN_03f9944c();
          uVar6 = thunk_FUN_03fc39d4(&DAT_092179f0);
          System_ArgumentException___ctor(uVar5,uVar6,0);
          goto LAB_07588870;
        }
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar5 = thunk_FUN_03f9944c();
        puVar3 = &DAT_092202d8;
      }
      uVar6 = thunk_FUN_03fc39d4(puVar3);
      uVar4 = thunk_FUN_03fc39d4(&DAT_09208330);
      System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar4,0);
    }
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_0920dbb8);
    System_ObjectDisposedException___ctor(uVar5,uVar6,0);
  }
LAB_07588870:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091cc258);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

