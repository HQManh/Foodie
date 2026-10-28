// rea decompile_all
// name: System.IO.MemoryStream$$Read
// address: 0x7568100
// body: available
// range: 0x7568100-0x7568317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7568218 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756821c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7568314 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint System_IO_MemoryStream__Read(long param_1,long param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;
  
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092185d8);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091fcf10);
    System_ArgumentNullException___ctor(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)param_3 < 0) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      puVar2 = &DAT_092202d8;
    }
    else {
      if (-1 < (int)param_4) {
        if ((int)param_4 <= (int)(*(int *)(param_2 + 0x18) - param_3)) {
          System_IO_MemoryStream__EnsureNotClosed();
          uVar9 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34);
          uVar10 = uVar9;
          if ((int)param_4 <= (int)uVar9) {
            uVar10 = param_4;
          }
          if ((int)uVar10 < 1) {
            uVar10 = 0;
          }
          else {
            if (uVar10 < 9) {
              uVar6 = (ulong)param_4;
              if ((long)(int)uVar9 <= (long)(ulong)param_4) {
                uVar6 = (long)(int)uVar9;
              }
              lVar7 = (ulong)((int)uVar6 + param_3) << 0x20;
              do {
                lVar7 = lVar7 + -0x100000000;
                lVar8 = *(long *)(param_1 + 0x28);
                if (lVar8 == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c550();
                }
                uVar9 = ((int)uVar6 + *(int *)(param_1 + 0x34)) - 1;
                if ((*(uint *)(lVar8 + 0x18) <= uVar9) ||
                   ((ulong)*(uint *)(param_2 + 0x18) <= ((ulong)param_3 - 1) + uVar6)) {
                    /* WARNING: Subroutine does not return */
                  FUN_03f5c558();
                }
                *(undefined1 *)(param_2 + (lVar7 >> 0x20) + 0x20) =
                     *(undefined1 *)(lVar8 + (int)uVar9 + 0x20);
                bVar1 = 1 < (long)uVar6;
                uVar6 = uVar6 - 1;
              } while (bVar1);
            }
            else {
              System_Buffer__BlockCopy
                        (*(undefined8 *)(param_1 + 0x28),*(int *)(param_1 + 0x34),param_2,param_3,
                         uVar10,0);
            }
            *(uint *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + uVar10;
          }
          return uVar10;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar4 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_09209710);
        System_ArgumentException___ctor(uVar4,uVar5,0);
        goto LAB_07568300;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar4 = thunk_FUN_03f9944c();
      puVar2 = &DAT_09219b28;
    }
    uVar5 = thunk_FUN_03fc39d4(puVar2);
    uVar3 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar3,0);
  }
LAB_07568300:
  uVar5 = thunk_FUN_03fc39d4(&DAT_091d30a8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

