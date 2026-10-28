// rea decompile_all
// name: FUN_03f848fc
// address: 0x3f848fc
// body: available
// range: 0x3f848fc-0x3f849f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x3f849f0 to 0x3f5fa4c FUN_03f5fa4c (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f848fc(undefined8 *param_1,void *param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  void *pvVar2;
  size_t sVar3;
  ulong uVar4;
  void *__dest;
  
  uVar4 = param_1[2];
  __dest = (void *)*param_1;
  pvVar2 = param_2;
  if ((ulong)((long)(uVar4 - (long)__dest) >> 3) < param_4) {
    if (__dest != (void *)0x0) {
      param_1[1] = __dest;
      operator_delete(__dest);
      uVar4 = 0;
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    if (param_4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_03f5fa4c(param_1);
    }
    uVar1 = (long)uVar4 >> 2;
    if ((ulong)((long)uVar4 >> 2) <= param_4) {
      uVar1 = param_4;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar1 = 0x1fffffffffffffff;
    }
    FUN_03f6a960(param_1,uVar1);
    __dest = (void *)param_1[1];
  }
  else {
    sVar3 = (long)param_1[1] - (long)__dest;
    if (((ulong)((long)sVar3 >> 3) < param_4) &&
       (pvVar2 = (void *)((long)param_2 + sVar3), (void *)param_1[1] != __dest)) {
      memmove(__dest,param_2,sVar3);
      __dest = (void *)param_1[1];
    }
  }
  sVar3 = param_3 - (long)pvVar2;
  if (sVar3 != 0) {
    memmove(__dest,pvVar2,sVar3);
  }
  param_1[1] = (long)__dest + sVar3;
  return;
}

