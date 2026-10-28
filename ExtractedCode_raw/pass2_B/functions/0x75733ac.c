// rea decompile_all
// name: System.IO.TextReader$$Read
// address: 0x75733ac
// body: available
// range: 0x75733ac-0x7573557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x757345c to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7573554 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong System_IO_TextReader__Read(long *param_1,long param_2,uint param_3,uint param_4)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar6 = thunk_FUN_03fc39d4(&DAT_092185d8);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091fcf10);
    System_ArgumentNullException___ctor(uVar5,uVar6,uVar4,0);
  }
  else {
    if ((int)param_3 < 0) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar5 = thunk_FUN_03f9944c();
      puVar3 = &DAT_0921d350;
    }
    else {
      if (-1 < (int)param_4) {
        if ((int)param_4 <= (int)(*(int *)(param_2 + 0x18) - param_3)) {
          if (param_4 == 0) {
            uVar8 = 0;
          }
          else {
            lVar9 = (ulong)param_3 << 0x20;
            uVar7 = 0;
            do {
              iVar2 = (**(code **)(*param_1 + 0x1d8))(param_1,*(undefined8 *)(*param_1 + 0x1e0));
              uVar8 = uVar7;
              if (iVar2 == -1) break;
              if ((ulong)*(uint *)(param_2 + 0x18) <= param_3 + uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_03f5c558();
              }
              lVar1 = lVar9 >> 0x1f;
              uVar7 = uVar7 + 1;
              lVar9 = lVar9 + 0x100000000;
              *(short *)(param_2 + lVar1 + 0x20) = (short)iVar2;
              uVar8 = (ulong)param_4;
            } while (param_4 != uVar7);
          }
          return uVar8 & 0xffffffff;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar5 = thunk_FUN_03f9944c();
        uVar6 = thunk_FUN_03fc39d4(&DAT_09209710);
        System_ArgumentException___ctor(uVar5,uVar6,0);
        goto LAB_07573540;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar5 = thunk_FUN_03f9944c();
      puVar3 = &DAT_09219b28;
    }
    uVar6 = thunk_FUN_03fc39d4(puVar3);
    uVar4 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar5,uVar6,uVar4,0);
  }
LAB_07573540:
  uVar6 = thunk_FUN_03fc39d4(&DAT_091db2e8);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar5,uVar6);
}

