// rea decompile_all
// name: System.RuntimeType$$GetNestedType
// address: 0x75f3844
// body: available
// range: 0x75f3844-0x75f3a2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x75f39a0 to 0x3f5c558 FUN_03f5c558 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f39f0 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f3a24 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x75f3a28 to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_RuntimeType__GetNestedType(undefined8 param_1,long param_2,uint param_3)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined1 local_54 [4];
  
  if ((DAT_09521f49 & 1) == 0) {
    FUN_03f5c2a4(&DAT_0918a400);
    DAT_09521f49 = 1;
  }
  local_54[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_6c = 0;
  if (param_2 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar3 = thunk_FUN_03f9944c();
    System_ArgumentNullException___ctor(uVar3,0);
    uVar4 = thunk_FUN_03fc39d4(&DAT_091d82a0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar3,uVar4);
  }
  if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
    FUN_03f5c424();
  }
  System_RuntimeType__SplitName(param_2,&local_60,&local_68);
  System_RuntimeType__FilterHelper(param_3 & 0xfffffff7,&local_60,local_54,&local_6c);
  lVar2 = System_RuntimeType__GetNestedTypes_internal
                    (param_1,local_60,param_3 & 0xfffffff7,local_6c);
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  if ((int)*(ulong *)(lVar2 + 0x18) < 1) {
    lVar8 = 0;
  }
  else {
    lVar8 = 0;
    uVar7 = 0;
    uVar5 = *(ulong *)(lVar2 + 0x18) & 0xffffffff;
    do {
      uVar4 = local_60;
      uVar3 = local_68;
      if (uVar5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_03f5c558();
      }
      lVar6 = *(long *)(lVar2 + 0x20 + uVar7 * 8);
      if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      uVar5 = System_RuntimeType__FilterApplyType(lVar6,param_3 & 0xfffffff7,uVar4,0,uVar3);
      if ((uVar5 & 1) != 0) {
        if (*(int *)(DAT_0918a400 + 0xe4) == 0) {
          FUN_03f5c424();
        }
        bVar1 = lVar8 != 0;
        lVar8 = lVar6;
        if (bVar1) {
          uVar3 = thunk_FUN_03fc39d4(&DAT_091fb838);
          uVar3 = System_Environment__GetResourceString(uVar3,0);
          thunk_FUN_03fc39d4(&DAT_09181088);
          uVar4 = thunk_FUN_03f9944c();
          System_Reflection_AmbiguousMatchException___ctor(uVar4,uVar3,0);
          uVar3 = thunk_FUN_03fc39d4(&DAT_091d82a0);
                    /* WARNING: Subroutine does not return */
          FUN_03f5c414(uVar4,uVar3);
        }
      }
      uVar5 = (ulong)*(uint *)(lVar2 + 0x18);
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)*(uint *)(lVar2 + 0x18));
  }
  return lVar8;
}

