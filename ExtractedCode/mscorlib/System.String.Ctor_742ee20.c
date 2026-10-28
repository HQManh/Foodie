// rea decompile_all
// name: System.String$$Ctor
// address: 0x742ee20
// body: available
// range: 0x742ee20-0x742efc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x742ee8c to 0x744f7ac System.Text.Encoding$$GetString (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x742eea8 to 0x742ec80 System.String$$Ctor (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x742ef8c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_String__Ctor(ulong param_1,uint param_2,int param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar5 = (ulong)param_2;
  if ((DAT_09521002 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091b9750);
    DAT_09521002 = 1;
  }
  if (param_4 == 0) {
    uVar1 = System_String__Ctor(param_1,uVar5,param_3);
    return uVar1;
  }
  if (param_3 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar2 = thunk_FUN_03f9944c();
    uVar1 = thunk_FUN_03fc39d4(&DAT_0921e638);
    puVar3 = &DAT_09208d80;
  }
  else if ((int)param_2 < 0) {
    thunk_FUN_03fc39d4(&DAT_09181558);
    uVar2 = thunk_FUN_03f9944c();
    uVar1 = thunk_FUN_03fc39d4(&DAT_09223268);
    puVar3 = &DAT_0920d950;
  }
  else {
    if (param_1 == 0) {
      if (param_3 == 0) {
        return **(undefined8 **)(DAT_09535468 + 0xb8);
      }
      thunk_FUN_03fc39d4(&DAT_09181550);
      uVar2 = thunk_FUN_03f9944c();
      uVar1 = thunk_FUN_03fc39d4(&DAT_09225370);
      System_ArgumentNullException___ctor(uVar2,uVar1,0);
      goto LAB_0742ef78;
    }
    if (!CARRY8(param_1,uVar5)) {
      uVar1 = System_Text_Encoding__GetString(param_4,param_1 + uVar5,param_3,0);
      return uVar1;
    }
    thunk_FUN_03fc39d4(&DAT_09181558,param_1 + uVar5);
    uVar2 = thunk_FUN_03f9944c();
    uVar1 = thunk_FUN_03fc39d4(&DAT_09223268);
    puVar3 = &DAT_0920aa00;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar3);
  System_ArgumentOutOfRangeException___ctor(uVar2,uVar1,uVar4,0);
LAB_0742ef78:
  uVar1 = thunk_FUN_03fc39d4(&DAT_091da298);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar1);
}

