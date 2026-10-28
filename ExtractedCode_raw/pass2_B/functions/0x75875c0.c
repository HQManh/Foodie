// rea decompile_all
// name: System.IO.FileStream$$ReadByte
// address: 0x75875c0
// body: available
// range: 0x75875c0-0x75876ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x758767c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75876f8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75876fc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_IO_FileStream__ReadByte(long *param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  
  if (param_1[7] == 0) goto LAB_0758767c;
  uVar2 = System_Runtime_InteropServices_SafeHandle__get_IsClosed(param_1[7],0);
  if ((uVar2 & 1) == 0) {
    uVar2 = (**(code **)(*param_1 + 0x1b8))(param_1,*(undefined8 *)(*param_1 + 0x1c0));
    if ((uVar2 & 1) != 0) {
      if (*(int *)((long)param_1 + 0x5c) == 0) {
        iVar1 = System_IO_FileStream__ReadData(param_1,param_1[7],param_1[5],0,1);
        if (iVar1 == 0) {
          return 0xffffffff;
        }
        lVar6 = param_1[5];
        if (lVar6 == 0) goto LAB_0758767c;
        if (*(int *)(lVar6 + 0x18) == 0) goto LAB_075876fc;
      }
      else {
        uVar5 = *(uint *)((long)param_1 + 100);
        if ((int)param_1[0xc] <= (int)uVar5) {
          System_IO_FileStream__RefillBuffer(param_1);
          if ((int)param_1[0xc] == 0) {
            return 0xffffffff;
          }
          uVar5 = *(uint *)((long)param_1 + 100);
        }
        lVar6 = param_1[5];
        *(uint *)((long)param_1 + 100) = uVar5 + 1;
        if (lVar6 == 0) {
LAB_0758767c:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c550();
        }
        if (*(uint *)(lVar6 + 0x18) <= uVar5) {
LAB_075876fc:
                    /* WARNING: Subroutine does not return */
          FUN_03f5c558();
        }
        lVar6 = lVar6 + (int)uVar5;
      }
      return (ulong)*(byte *)(lVar6 + 0x20);
    }
    thunk_FUN_03fc39d4(&DAT_09188920);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0920db80);
    System_NotSupportedException___ctor(uVar3,uVar4,0);
  }
  else {
    thunk_FUN_03fc39d4(&DAT_09188ae0);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_0920dbb8);
    System_ObjectDisposedException___ctor(uVar3,uVar4,0);
  }
  uVar4 = thunk_FUN_03fc39d4(&DAT_091cc2a8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

