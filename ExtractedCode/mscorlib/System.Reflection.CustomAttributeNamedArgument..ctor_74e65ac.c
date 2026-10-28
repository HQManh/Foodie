// rea decompile_all
// name: System.Reflection.CustomAttributeNamedArgument$$.ctor
// address: 0x74e65ac
// body: available
// range: 0x74e65ac-0x74e66f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x74e66a8 to 0x3f5c248 thunk_FUN_03f5d7b8 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x74e66f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x74e66f4 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Reflection_CustomAttributeNamedArgument___ctor
               (undefined8 *param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_095215bd & 1) == 0) {
    FUN_03f5c2a4(&DAT_09184518);
    DAT_095215bd = 1;
  }
  uVar2 = System_Reflection_MemberInfo__op_Equality(param_2,0);
  if ((uVar2 & 1) == 0) {
    thunk_FUN_03f6a5cc();
    param_1[5] = param_2;
    thunk_FUN_03f5d7b8(param_1 + 5,param_2);
    if (param_2 != (long *)0x0) {
      uVar3 = (**(code **)(*param_2 + 0x1c8))(param_2,*(undefined8 *)(*param_2 + 0x1d0));
      param_1[4] = uVar3;
      thunk_FUN_03f5d7b8();
      *param_1 = param_3;
      param_1[1] = param_4;
      thunk_FUN_03f5d7b8(param_1,0);
      if (*(byte *)(*param_2 + 0x130) < *(byte *)(DAT_09184518 + 0x130)) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(*(long *)(*param_2 + 200) + (ulong)*(byte *)(DAT_09184518 + 0x130) * 8 +
                         -8) == DAT_09184518;
      }
      *(bool *)(param_1 + 2) = bVar1;
      uVar3 = (**(code **)(*param_2 + 0x1b8))(param_2,*(undefined8 *)(*param_2 + 0x1c0));
      param_1[3] = uVar3;
      thunk_FUN_03f5d7b8(param_1 + 3,uVar3);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  thunk_FUN_03fc39d4(&DAT_09181550);
  uVar3 = thunk_FUN_03f9944c();
  uVar4 = thunk_FUN_03fc39d4(&DAT_0921f4d0);
  System_ArgumentNullException___ctor(uVar3,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091c6e20);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar3,uVar4);
}

