// rea decompile_all
// name: FUN_042651bc
// address: 0x42651bc
// body: available
// range: 0x42651bc-0x4265313 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x4265310 to 0x3f5c414 FUN_03f5c414 (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_042651bc(long *param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  int *piVar4;
  undefined8 uVar5;
  long lVar6;
  
  if (*(long *)(param_2 + 0x38) == 0) {
    FUN_03f5c2a4(&DAT_09184938);
    if (*(long *)(param_2 + 0x38) == 0) {
      FUN_03f95ac8(param_2);
    }
  }
  if (param_1 == (long *)0x0) {
    thunk_FUN_03fc39d4(&DAT_09181550);
    uVar5 = thunk_FUN_03f9944c();
    uVar1 = thunk_FUN_03fc39d4(&DAT_092219e8);
    System_ArgumentNullException___ctor(uVar5,uVar1,0);
                    /* WARNING: Subroutine does not return */
    FUN_03f5c414(uVar5,param_2);
  }
  lVar2 = *param_1;
  lVar6 = **(long **)(param_2 + 0x38);
  uVar3 = (ulong)*(ushort *)(lVar2 + 0x12e);
  if (uVar3 != 0) {
    piVar4 = (int *)(*(long *)(lVar2 + 0xb0) + 8);
    do {
      if (*(long *)(piVar4 + -2) == *(long *)(lVar6 + 0x20)) {
        lVar2 = lVar2 + (long)(int)(*piVar4 + (uint)*(ushort *)(lVar6 + 0x50)) * 0x10 + 0x138;
        goto LAB_0426524c;
      }
      uVar3 = uVar3 - 1;
      piVar4 = piVar4 + 4;
    } while (uVar3 != 0);
  }
  lVar2 = FUN_03f95da8(param_1);
LAB_0426524c:
  lVar2 = FUN_03f5c420(*(undefined8 *)(lVar2 + 8),lVar6);
  lVar2 = (**(code **)(lVar2 + 8))(param_1);
  if (lVar2 == 0) {
    uVar5 = *(undefined8 *)(*(long *)(param_2 + 0x38) + 0x10);
    if (*(int *)(DAT_095354b8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = System_Type__GetTypeFromHandle(uVar5,0);
    if (*(int *)(DAT_09184938 + 0xe4) == 0) {
      FUN_03f5c424(DAT_09184938);
    }
    MessagePack_FormatterResolverExtensions__Throw(uVar5,param_1,0);
    lVar2 = 0;
  }
  return lVar2;
}

