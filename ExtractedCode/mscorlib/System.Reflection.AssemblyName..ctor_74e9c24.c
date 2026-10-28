// rea decompile_all
// name: System.Reflection.AssemblyName$$.ctor
// address: 0x74e9c24
// body: available
// range: 0x74e9c24-0x74e9e37 inclusive
// range: 0x74e9ed0-0x74e9ed3 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e9dac to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e9dc4 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e9e1c to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e9e34 to 0x3f5c548 FUN_03f5c548 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e9ed0 to 0x89db930 <EXTERNAL>::__stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x074e9e20) */
/* WARNING: Removing unreachable block (ram,0x074e9e30) */
/* WARNING: Removing unreachable block (ram,0x074e9db0) */
/* WARNING: Removing unreachable block (ram,0x074e9dc0) */

void System_Reflection_AssemblyName___ctor(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_90._0_8_ = 0;
  local_90._8_8_ = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_78 = 0;
  local_80 = 0;
  local_94[0] = 0;
  local_98[0] = 0;
  System_Object___ctor(param_1,0);
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar4 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_09217a90);
    System_ArgumentNullException___ctor(uVar4,uVar2,0);
  }
  else {
    if (0 < *(int *)(param_2 + 0x10)) {
      local_90 = Mono_RuntimeMarshal__MarshalString(param_2,0);
      uVar2 = Mono_SafeStringMarshal__get_Value(local_90,0);
      uVar3 = FUN_03f66724(uVar2,&local_80,local_94,local_98);
      if ((uVar3 & 1) == 0) {
        thunk_FUN_03fc39d4(&DAT_09184560);
        uVar2 = thunk_FUN_03f9944c();
        uVar4 = thunk_FUN_03fc39d4(&DAT_0920f120);
        System_IO_FileLoadException___ctor(uVar2,uVar4,0);
        uVar4 = thunk_FUN_03fc39d4(&DAT_091c0fc0);
        if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar2,uVar4);
        }
      }
      else {
        System_Reflection_AssemblyName__FillName(param_1,&local_80,0,local_94[0],0,local_98[0],0);
        thunk_FUN_03f61edc(&local_80,0,0);
        Mono_SafeStringMarshal__Dispose(local_90,0);
        if (*(long *)(lVar1 + 0x28) == local_28) {
          return;
        }
      }
      goto LAB_074e9ed0;
    }
    thunk_FUN_03fc39d4(&DAT_09181548);
    uVar4 = thunk_FUN_03f9944c();
    uVar2 = thunk_FUN_03fc39d4(&DAT_09217a98);
    System_ArgumentException___ctor(uVar4,uVar2,0);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    uVar2 = thunk_FUN_03fc39d4(&DAT_091c0fc0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar4,uVar2);
  }
LAB_074e9ed0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

