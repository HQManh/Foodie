// rea decompile_all
// name: System.Text.EncodingNLS$$GetBytes
// address: 0x743ac5c
// body: available
// range: 0x743ac5c-0x743aecf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x743ae6c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743aec8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x743aecc to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
System_Text_EncodingNLS__GetBytes
          (long *param_1,long param_2,uint param_3,uint param_4,long param_5,uint param_6)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  int iVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_09521056 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3028);
    FUN_03f5c2a4(&DAT_091ba938);
    DAT_09521056 = 1;
  }
  if ((param_2 == 0) || (param_5 == 0)) {
    puVar1 = (undefined8 *)&DAT_09218b60;
    if (param_2 != 0) {
      puVar1 = &DAT_09218720;
    }
    uVar4 = thunk_FUN_03fc39d4(puVar1);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar7 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_091fbec0);
    System_ArgumentNullException___ctor(uVar7,uVar4,uVar5,0);
  }
  else {
    if (-1 < (int)(param_4 | param_3)) {
      iVar8 = (int)*(ulong *)(param_2 + 0x18);
      if ((int)(iVar8 - param_3) < (int)param_4) {
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar4 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_09218b60);
        puVar6 = &DAT_09204928;
      }
      else {
        if ((-1 < (int)param_6) && (iVar2 = *(int *)(param_5 + 0x18), (int)param_6 <= iVar2)) {
          if (param_4 == 0) {
            return 0;
          }
          if ((*(ulong *)(param_2 + 0x18) & 0xffffffff) == 0) {
            param_2 = 0;
          }
          else {
            if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_03f5c558();
            }
            param_2 = param_2 + 0x20;
          }
          auVar9 = FUN_0610892c(param_5,DAT_091ba938);
          lVar3 = FUN_04c072b0(auVar9._0_8_,auVar9._8_8_,DAT_091d3028);
                    /* WARNING: Could not recover jumptable at 0x0743ad78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          uVar4 = (**(code **)(*param_1 + 0x278))
                            (param_1,param_2 + (ulong)param_3 * 2,param_4,lVar3 + (ulong)param_6,
                             iVar2 - param_6,0,*(undefined8 *)(*param_1 + 0x280));
          return uVar4;
        }
        thunk_FUN_03fc39d4(&DAT_09181558);
        uVar4 = thunk_FUN_03f9944c();
        uVar5 = thunk_FUN_03fc39d4(&DAT_092186f8);
        puVar6 = &DAT_092049a8;
      }
      uVar7 = thunk_FUN_03fc39d4(puVar6);
      System_ArgumentOutOfRangeException___ctor(uVar4,uVar5,uVar7,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091c8cf0);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar4,uVar5);
    }
    puVar6 = &DAT_09218af8;
    if ((int)param_3 < 0) {
      puVar6 = &DAT_09218b00;
    }
    uVar4 = thunk_FUN_03fc39d4(puVar6);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar7 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar7,uVar4,uVar5,0);
  }
  uVar4 = thunk_FUN_03fc39d4(&DAT_091c8cf0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar7,uVar4);
}

