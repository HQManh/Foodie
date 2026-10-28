// rea decompile_all
// name: System.Threading.SpinWait$$SpinOnceCore
// address: 0x761c404
// body: available
// range: 0x761c404-0x761c5af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void System_Threading_SpinWait__SpinOnceCore(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if ((DAT_095220f6 & 1) == 0) {
    FUN_03f5c2a4(&DAT_091891b0);
    FUN_03f5c2a4(&DAT_0918a3f8);
    DAT_095220f6 = 1;
  }
  uVar6 = *param_1;
  if (((int)uVar6 < 10) || ((uVar6 < param_2 && ((uVar6 & 1) != 0)))) {
    if (*(int *)(DAT_091891b0 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    if (*(char *)(*(long *)(DAT_091891b0 + 0xb8) + 8) == '\0') {
      if (*(int *)(DAT_0918a3f8 + 0xe4) == 0) {
        FUN_03f5c424();
        bVar4 = *(int *)(DAT_0918a3f8 + 0xe4) == 0;
      }
      else {
        bVar4 = false;
      }
      iVar2 = **(int **)(DAT_0918a3f8 + 0xb8);
      iVar3 = 1 << (ulong)(*param_1 & 0x1f);
      if (iVar2 <= iVar3) {
        iVar3 = iVar2;
      }
      if ((int)*param_1 < 0x1f) {
        iVar2 = iVar3;
      }
      if (bVar4) {
        FUN_03f5c424();
      }
      Internal_Runtime_Augments_RuntimeThread__SpinWait(iVar2,0);
      goto LAB_0761c58c;
    }
    uVar6 = *param_1;
  }
  if (((int)param_2 < 0) || ((int)uVar6 < (int)param_2)) {
    uVar1 = uVar6 - 10 >> 1;
    if ((int)uVar6 < 10) {
      uVar1 = uVar6;
    }
    if ((int)uVar1 % 5 != 4) {
      if (*(int *)(DAT_0918a3f8 + 0xe4) == 0) {
        FUN_03f5c424();
      }
      Internal_Runtime_Augments_RuntimeThread__Yield(0);
      goto LAB_0761c58c;
    }
    if (*(int *)(DAT_0918a3f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = 0;
  }
  else {
    if (*(int *)(DAT_0918a3f8 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    uVar5 = 1;
  }
  Internal_Runtime_Augments_RuntimeThread__Sleep(uVar5,0);
LAB_0761c58c:
  uVar6 = 10;
  if (*param_1 != 0x7fffffff) {
    uVar6 = *param_1 + 1;
  }
  *param_1 = uVar6;
  return;
}

