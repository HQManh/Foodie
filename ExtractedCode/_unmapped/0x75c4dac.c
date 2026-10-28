// rea decompile_all
// name: FUN_075c4dac
// address: 0x75c4dac
// body: available
// range: 0x75c4dac-0x75c4eb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_075c4dac(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                 long param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  long local_38;
  
  lVar5 = *(long *)(param_5 + 0x38);
  if (lVar5 == 0) {
    FUN_03f95ac8(param_5);
    lVar5 = *(long *)(param_5 + 0x38);
  }
  local_38 = 0;
  uVar2 = FUN_04c0d66c(&local_38,*(undefined8 *)(lVar5 + 0x20));
  iVar6 = (int)param_4;
  if ((uVar2 & 1) == 0) {
    if (iVar6 <= (int)param_2) {
      uVar3 = FUN_04c072b4(param_1,param_2,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x28));
      uVar4 = FUN_04c072b4(param_3,param_4,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x28));
      uVar1 = FUN_04d5cce4(uVar3,uVar4,param_4 & 0xffffffff,
                           *(undefined8 *)(*(long *)(param_5 + 0x38) + 0x38));
      goto LAB_075c4e9c;
    }
  }
  else if (iVar6 <= (int)param_2) {
    uVar3 = FUN_04c072b4(param_1,param_2,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x28));
    uVar4 = FUN_04c072b4(param_3,param_4,*(undefined8 *)(*(long *)(param_5 + 0x38) + 0x28));
    uVar1 = System_SpanHelpers__SequenceEqual(uVar3,uVar4,local_38 * iVar6,0);
    goto LAB_075c4e9c;
  }
  uVar1 = 0;
LAB_075c4e9c:
  return uVar1 & 1;
}

