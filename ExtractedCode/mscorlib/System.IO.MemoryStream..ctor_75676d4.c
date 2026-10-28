// rea decompile_all
// name: System.IO.MemoryStream$$.ctor
// address: 0x75676d4
// body: available
// range: 0x75676d4-0x75678a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75678a4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_IO_MemoryStream___ctor
               (long param_1,long param_2,int param_3,int param_4,byte param_5,byte param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_095219f3 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918b308);
    DAT_095219f3 = 1;
  }
  if (*(int *)(DAT_0918b308 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_IO_Stream___ctor(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    uVar4 = thunk_FUN_03fc39d4(&DAT_092185d8);
    uVar2 = thunk_FUN_03fc39d4(&DAT_091fcf10);
    System_ArgumentNullException___ctor(uVar3,uVar4,uVar2,0);
  }
  else {
    if (param_3 < 0) {
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar3 = thunk_FUN_03f9944c();
      puVar1 = &DAT_0921d350;
    }
    else {
      if (-1 < param_4) {
        if (param_4 <= *(int *)(param_2 + 0x18) - param_3) {
          *(long *)(param_1 + 0x28) = param_2;
          thunk_FUN_03f5d7b8((long *)(param_1 + 0x28),param_2);
          *(int *)(param_1 + 0x30) = param_3;
          *(int *)(param_1 + 0x34) = param_3;
          *(int *)(param_1 + 0x38) = param_4 + param_3;
          *(int *)(param_1 + 0x3c) = param_4 + param_3;
          *(byte *)(param_1 + 0x41) = param_5 & 1;
          *(byte *)(param_1 + 0x42) = param_6 & 1;
          *(undefined1 *)(param_1 + 0x40) = 0;
          *(undefined1 *)(param_1 + 0x43) = 1;
          return;
        }
        thunk_FUN_03fc39d4(&DAT_09181548);
        uVar3 = thunk_FUN_03f9944c();
        uVar4 = thunk_FUN_03fc39d4(&DAT_09209710);
        System_ArgumentException___ctor(uVar3,uVar4,0);
        goto LAB_07567890;
      }
      thunk_FUN_03fc39d4(&DAT_09181558);
      uVar3 = thunk_FUN_03f9944c();
      puVar1 = &DAT_09219b28;
    }
    uVar4 = thunk_FUN_03fc39d4(puVar1);
    uVar2 = thunk_FUN_03fc39d4(&DAT_09208d80);
    System_ArgumentOutOfRangeException___ctor(uVar3,uVar4,uVar2,0);
  }
LAB_07567890:
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d3078);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

