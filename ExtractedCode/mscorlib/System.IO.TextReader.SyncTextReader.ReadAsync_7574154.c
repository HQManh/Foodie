// rea decompile_all
// name: System.IO.TextReader.SyncTextReader$$ReadAsync
// address: 0x7574154
// body: available
// range: 0x7574154-0x7574317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7574218 to 0x4d823b8 FUN_04d823b8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x75742cc to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x7574314 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_TextReader_SyncTextReader__ReadAsync
               (long *param_1,long param_2,uint param_3,uint param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_09521a54 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091dae18);
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_09521a54 = 1;
  }
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_092185d8);
    uVar3 = thunk_FUN_03fc39d4(&DAT_091fcf10);
    System_ArgumentNullException___ctor(uVar4,uVar5,uVar3,0);
  }
  else {
    if ((int)(param_4 | param_3) < 0) {
      puVar1 = &DAT_09219b28;
      if ((int)param_3 < 0) {
        puVar1 = &DAT_0921d350;
      }
      uVar5 = thunk_FUN_03fc39d4(puVar1);
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_09208d80);
      System_ArgumentOutOfRangeException___ctor(uVar3,uVar5,uVar4,0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_091f0d10);
                    /* WARNING: Subroutine does not return */
      FUN_03f5c414(uVar3,uVar5);
    }
    if ((int)param_4 <= (int)(*(int *)(param_2 + 0x18) - param_3)) {
      uVar2 = (**(code **)(*param_1 + 0x1e8))
                        (param_1,param_2,param_3,param_4,*(undefined8 *)(*param_1 + 0x1f0));
      if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
        FUN_03f5c424(DAT_0918b8c8);
      }
      FUN_04d823b8(uVar2,DAT_091dae18);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar5 = thunk_FUN_03fc39d4(&DAT_09209710);
    System_ArgumentException___ctor(uVar4,uVar5,0);
  }
  uVar5 = thunk_FUN_03fc39d4(&DAT_091f0d10);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar4,uVar5);
}

