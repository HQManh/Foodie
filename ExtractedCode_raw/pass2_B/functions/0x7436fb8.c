// rea decompile_all
// name: System.Text.DecoderNLS$$Convert
// address: 0x7436fb8
// body: available
// range: 0x7436fb8-0x7437273 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74371f4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7437270 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Text_DecoderNLS__Convert
               (long *param_1,long param_2,uint param_3,uint param_4,long param_5,uint param_6,
               uint param_7,uint param_8,undefined8 param_9,undefined8 param_10)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined1 auVar9 [16];
  
  if ((DAT_0952103c & 1) == 0) {
    FUN_03f5c2a4(&DAT_091d3028);
    FUN_03f5c2a4(&DAT_091d3038);
    FUN_03f5c2a4(&DAT_091ba938);
    FUN_03f5c2a4(&DAT_091ba9a8);
    DAT_0952103c = 1;
  }
  if ((param_2 == 0) || (param_5 == 0)) {
    puVar4 = &DAT_09218720;
    if (param_2 != 0) {
      puVar4 = (undefined8 *)&DAT_09218b60;
    }
    uVar3 = thunk_FUN_03fc39d4(puVar4);
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar6 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_091fbec0);
    System_ArgumentNullException___ctor(uVar6,uVar3,uVar5,0);
  }
  else {
    if ((int)(param_4 | param_3) < 0) {
      puVar7 = &DAT_092186f8;
      puVar8 = &DAT_092186f0;
    }
    else {
      if (-1 < (int)(param_7 | param_6)) {
        if ((int)(*(int *)(param_2 + 0x18) - param_3) < (int)param_4) {
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar3 = thunk_FUN_03f9944c();
          puVar4 = &DAT_09218720;
        }
        else {
          if ((int)param_7 <= (int)(*(int *)(param_5 + 0x18) - param_6)) {
            auVar9 = FUN_0610892c(param_2,DAT_091ba938);
            lVar1 = FUN_04c072b0(auVar9._0_8_,auVar9._8_8_,DAT_091d3028);
            auVar9 = FUN_06109734(param_5,DAT_091ba9a8);
            lVar2 = FUN_04c072b8(auVar9._0_8_,auVar9._8_8_,DAT_091d3038);
                    /* WARNING: Could not recover jumptable at 0x07437118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*param_1 + 0x208))
                      (param_1,lVar1 + (ulong)param_3,param_4,lVar2 + (ulong)param_6 * 2,param_7,
                       param_8 & 1,param_9,param_10);
            return;
          }
          thunk_FUN_03fc39d4(&DAT_09181558);
          uVar3 = thunk_FUN_03f9944c();
          puVar4 = (undefined8 *)&DAT_09218b60;
        }
        uVar5 = thunk_FUN_03fc39d4(puVar4);
        uVar6 = thunk_FUN_03fc39d4(&DAT_09204928);
        System_ArgumentOutOfRangeException___ctor(uVar3,uVar5,uVar6,0);
        uVar5 = thunk_FUN_03fc39d4(&DAT_091c81c0);
                    /* WARNING: Subroutine does not return */
        FUN_03f5c414(uVar3,uVar5);
      }
      puVar7 = &DAT_09218b00;
      puVar8 = &DAT_09218af8;
      param_3 = param_6;
    }
    if ((int)param_3 < 0) {
      puVar8 = puVar7;
    }
    uVar3 = thunk_FUN_03fc39d4(puVar8);
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar6 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar6,uVar3,uVar5,0);
  }
  uVar3 = thunk_FUN_03fc39d4(&DAT_091c81c0);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar6,uVar3);
}

