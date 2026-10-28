// rea decompile_all
// name: System.ParameterizedStrings$$Evaluate
// address: 0x760ad54
// body: available
// range: 0x760ad54-0x760aeb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x760aeb4 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_ParameterizedStrings__Evaluate(long param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 local_28;
  
  if ((DAT_0952201c & 1) == 0) {
    FUN_03f5c2a4(&DAT_09193180);
    FUN_03f5c2a4(&DAT_09188e68);
    DAT_0952201c = 1;
  }
  local_28 = 0;
  local_38 = 0;
  local_3c = 0;
  if (param_1 == 0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    puVar3 = &DAT_0921ba70;
  }
  else {
    if (param_2 != 0) {
      plVar1 = (long *)FUN_03f5c2c0(DAT_09188e68);
      lVar5 = *plVar1;
      if (lVar5 == 0) {
        lVar5 = thunk_FUN_03f9944c(DAT_09193180);
        System_ParameterizedStrings_LowLevelStack___ctor();
        plVar1 = (long *)FUN_03f5c2c0(DAT_09188e68);
        *plVar1 = lVar5;
        uVar2 = FUN_03f5c2c0(DAT_09188e68);
        thunk_FUN_03f5d7b8(uVar2,lVar5);
      }
      else {
        System_Array__Clear(*(undefined8 *)(lVar5 + 0x10),0,*(undefined4 *)(lVar5 + 0x18),0);
        *(undefined4 *)(lVar5 + 0x18) = 0;
      }
      local_28 = 0;
      local_38 = 0;
      local_3c = 0;
      System_ParameterizedStrings__EvaluateInternal
                (param_1,&local_3c,param_2,lVar5,&local_28,&local_38);
      return;
    }
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar2 = thunk_FUN_03f9944c();
    puVar3 = &DAT_09217980;
  }
  uVar4 = thunk_FUN_03fc39d4(puVar3);
  System_ArgumentNullException___ctor(uVar2,uVar4,0);
  uVar4 = thunk_FUN_03fc39d4(&DAT_091d5758);
                    /* WARNING: Subroutine does not return */
  FUN_03f5c414(uVar2,uVar4);
}

