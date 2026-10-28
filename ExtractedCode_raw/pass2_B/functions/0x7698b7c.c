// rea decompile_all
// name: Newtonsoft.Json.Utilities.LateBoundReflectionDelegateFactory$$CreateParameterizedConstructor
// address: 0x7698b7c
// body: available
// range: 0x7698b7c-0x7698d1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x7698d1c to 0x3f5c550 FUN_03f5c550 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
Newtonsoft_Json_Utilities_LateBoundReflectionDelegateFactory__CreateParameterizedConstructor
          (undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  
  if ((DAT_095225cf & 1) == 0) {
    FUN_03f5c2a4(&DAT_09182ac0);
    FUN_03f5c2a4(&DAT_0917dcc8);
    FUN_03f5c2a4(&DAT_091ec1c8);
    FUN_03f5c2a4(&DAT_091ec1d0);
    FUN_03f5c2a4(&DAT_09192108);
    FUN_03f5c2a4(&DAT_0921f5b0);
    DAT_095225cf = 1;
  }
  lVar3 = thunk_FUN_03f9944c(DAT_09192108);
  System_Object___ctor(lVar3,0);
  if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_03f5c550();
  }
  plVar7 = (long *)(lVar3 + 0x18);
  *plVar7 = param_2;
  thunk_FUN_03f5d7b8(plVar7,param_2);
  Newtonsoft_Json_Utilities_ValidationUtils__ArgumentNotNull(*plVar7,DAT_0921f5b0,0);
  lVar6 = DAT_09182ac0;
  plVar7 = (long *)*plVar7;
  if (plVar7 == (long *)0x0) {
    plVar7 = (long *)0x0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  else {
    bVar2 = *(byte *)(DAT_09182ac0 + 0x130);
    if (*(byte *)(*plVar7 + 0x130) < bVar2) {
      plVar5 = (long *)0x0;
    }
    else {
      plVar5 = plVar7;
      if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != DAT_09182ac0) {
        plVar5 = (long *)0x0;
      }
    }
    *(long **)(lVar3 + 0x10) = plVar5;
    if (*(byte *)(*plVar7 + 0x130) < bVar2) {
      plVar7 = (long *)0x0;
    }
    else if (*(long *)(*(long *)(*plVar7 + 200) + (ulong)bVar2 * 8 + -8) != lVar6) {
      plVar7 = (long *)0x0;
    }
  }
  thunk_FUN_03f5d7b8(lVar3 + 0x10,plVar7);
  lVar6 = *(long *)(lVar3 + 0x10);
  uVar4 = thunk_FUN_03f9944c(DAT_0917dcc8);
  puVar1 = &DAT_091ec1d0;
  if (lVar6 != 0) {
    puVar1 = &DAT_091ec1c8;
  }
  FUN_05c68e34(uVar4,lVar3,*puVar1,0);
  return uVar4;
}

