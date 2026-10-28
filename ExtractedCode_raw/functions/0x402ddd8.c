// rea decompile_all
// name: FUN_0402ddd8
// address: 0x402ddd8
// body: available
// range: 0x402ddd8-0x402deeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_0402ddd8(char *param_1,char *param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  ulong uVar4;
  undefined4 extraout_var;
  undefined8 extraout_var_00;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  float fVar7;
  char *local_28;
  
  if (param_1 == param_2) {
    uVar4 = 0;
  }
  else {
    piVar3 = (int *)__errno();
    iVar1 = *piVar3;
    *piVar3 = 0;
    if (((bRam000000000974a4b8 & 1) == 0) && (iVar2 = __cxa_guard_acquire(0x974a4b8), iVar2 != 0)) {
      p_Ram000000000974a4b0 = newlocale(0x1fbf,"C",(__locale_t)0x0);
      __cxa_guard_release(0x974a4b8);
    }
    auVar5._0_4_ = strtof(param_1,&local_28);
    auVar5._4_4_ = extraout_var;
    if (*piVar3 == 0) {
      fVar7 = 0.0;
      *piVar3 = iVar1;
      if (local_28 == param_2) goto LAB_0402de54;
    }
    else {
      fVar7 = 0.0;
      if ((local_28 == param_2) && (fVar7 = auVar5._0_4_, *piVar3 != 0x22)) {
LAB_0402de54:
        auVar5._8_8_ = extraout_var_00;
        return auVar5;
      }
    }
    uVar4 = (ulong)(uint)fVar7;
  }
  *param_3 = 4;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = uVar4;
  return auVar6;
}

