// rea decompile_all
// name: System.Text.StringBuilder$$CopyTo
// address: 0x743d4f0
// body: available
// range: 0x743d4f0-0x743d6b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743d5f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743d6b4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_StringBuilder__CopyTo
               (long param_1,uint param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  
  if ((DAT_0952106d & 1) == 0) {
    FUN_03f5c2a4(&DAT_09187e80);
    DAT_0952106d = 1;
  }
  if (param_5 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar8 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_09219b28);
    puVar6 = &DAT_091fbdd0;
  }
  else {
    uVar1 = *(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x24);
    if (param_2 <= uVar1) {
      if ((int)param_2 <= (int)(uVar1 - param_5)) {
        if (param_5 != 0) {
          iVar2 = param_5 + param_2;
          iVar10 = param_5;
          do {
            if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c550();
            }
            iVar4 = iVar2 - *(int *)(param_1 + 0x24);
            if (-1 < iVar4) {
              uVar3 = *(undefined4 *)(param_1 + 0x20);
              if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
                FUN_03f5c424();
              }
              iVar5 = System_Math__Min(iVar4,uVar3,0);
              uVar1 = iVar5 - iVar10;
              iVar4 = iVar10;
              if ((int)uVar1 < 0) {
                iVar4 = iVar5;
              }
              param_5 = param_5 - iVar4;
              iVar10 = iVar10 - iVar4;
              System_Text_StringBuilder__ThreadSafeCopy
                        (*(undefined8 *)(param_1 + 0x10),uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU),
                         param_3,param_4,param_5);
            }
            param_1 = *(long *)(param_1 + 0x18);
          } while (0 < iVar10);
        }
        return;
      }
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar8 = thunk_FUN_03f9944c();
      uVar9 = thunk_FUN_03fc39d4(&DAT_0920d4f0);
      System_ArgumentException___ctor(uVar8,uVar9,0);
      goto LAB_0743d6a0;
    }
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar8 = thunk_FUN_03f9944c();
    uVar9 = thunk_FUN_03fc39d4(&DAT_09222fd0);
    puVar6 = &DAT_092049a8;
  }
  uVar7 = thunk_FUN_03fc39d4(puVar6);
  System_ArgumentOutOfRangeException___ctor(uVar8,uVar9,uVar7,0);
LAB_0743d6a0:
  uVar9 = thunk_FUN_03fc39d4(&DAT_091da428);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar8,uVar9);
}

