// rea decompile_all
// name: System.IO.FileStream$$BeginRead
// address: 0x7587d50
// body: available
// range: 0x7587d50-0x7587fe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7587e54 to 0x7589744 System.IO.FileStream.ReadDelegate$$BeginInvoke (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x7587e94 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7587fe0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_FileStream__BeginRead
               (long *param_1,long param_2,int param_3,int param_4,undefined8 param_5,
               undefined8 param_6)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if ((DAT_09521b13 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091cc2b8);
    FUN_03f5c2a4(&DAT_09190938);
    DAT_09521b13 = 1;
  }
  if (param_1[7] == 0) {
LAB_07587e94:
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  uVar1 = System_Runtime_InteropServices_SafeHandle__get_IsClosed(param_1[7],0);
  if ((uVar1 & 1) == 0) {
    uVar1 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar1 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09188920);
      uVar5 = thunk_FUN_03f9944c();
      uVar6 = thunk_FUN_03fc39d4(&DAT_09210850);
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
              System_IO_Stream__BeginReadInternal
                        (param_1,param_2,param_3,param_4,param_5,param_6,0,1);
              return;
            }
            lVar2 = thunk_FUN_03f9944c(DAT_09190938);
            System_IO_FileStream_ReadDelegate___ctor(lVar2,param_1,DAT_091cc2b8,0);
            if (lVar2 != 0) {
              System_IO_FileStream_ReadDelegate__BeginInvoke
                        (lVar2,param_2,param_3,param_4,param_5,param_6,0);
              return;
            }
            goto LAB_07587e94;
          }
          thunk_FUN_03fc39d4(&DAT_09181548);
          uVar5 = thunk_FUN_03f9944c();
          uVar6 = thunk_FUN_03fc39d4(&DAT_091fcf38);
          System_ArgumentException___ctor(uVar5,uVar6,0);
          goto LAB_07587fcc;
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
LAB_07587fcc:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091cc250);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

