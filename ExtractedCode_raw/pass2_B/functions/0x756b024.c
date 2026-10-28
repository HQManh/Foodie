// rea decompile_all
// name: System.IO.StreamReader$$.ctor
// address: 0x756b024
// body: available
// range: 0x756b024-0x756b23b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x756b150 to 0x756b258 System.IO.StreamReader$$Init (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x756b1a8 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x756b238 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_StreamReader___ctor
               (long param_1,long *param_2,long param_3,uint param_4,int param_5,uint param_6)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((DAT_09521a10 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b8c8);
    FUN_03f5c2a4(&DAT_0918bb90);
    DAT_09521a10 = 1;
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  if (DAT_095175b2 == '\0') {
    FUN_03f5c2a4(&DAT_0918b8c8);
    DAT_095175b2 = '\x01';
  }
  if (*(int *)(DAT_0918b8c8 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(*(long *)(DAT_0918b8c8 + 0xb8) + 0x30);
  thunk_FUN_03f5d7b8();
  if (*(int *)(DAT_0918bb90 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_IO_TextReader___ctor(param_1,0);
  if ((param_2 != (long *)0x0) && (param_3 != 0)) {
    uVar2 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
    if ((uVar2 & 1) == 0) {
      thunk_FUN_03fc39d4(&DAT_09181548);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_0920dbe0);
      System_ArgumentException___ctor(uVar3,uVar4,0);
    }
    else {
      if (0 < param_5) {
        System_IO_StreamReader__Init(param_1,param_2,param_3,param_4 & 1,param_5,param_6 & 1);
        return;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar3 = thunk_FUN_03f9944c();
      uVar4 = thunk_FUN_03fc39d4(&DAT_092185f0);
      uVar5 = thunk_FUN_03fc39d4(&DAT_0920aaf0);
      System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,uVar5,0);
    }
    uVar4 = thunk_FUN_03fc39d4(&DAT_091da108);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  puVar1 = &DAT_092235d8;
  if (param_2 != (long *)0x0) {
    puVar1 = &DAT_0921af60;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar1);
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar3 = thunk_FUN_03f9944c();
  System_ArgumentNullException___ctor(uVar3,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091da108);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

