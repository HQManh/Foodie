// rea decompile_all
// name: thunk_FUN_03f66b74
// address: 0x74ecda4
// body: available
// range: 0x74ecda4-0x74ecda7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool thunk_FUN_03f66b74(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *plStack_78;
  undefined8 uStack_70;
  void *pvStack_68;
  long *plStack_60;
  undefined8 uStack_58;
  void *pvStack_50;
  long lStack_48;
  long lStack_40;
  
  FUN_03f66c8c(&lStack_48);
  lVar2 = lStack_40;
  FUN_03f926e8(&plStack_78,param_2 + 0x14);
  if (((ulong)plStack_78 & 1) == 0) {
    uStack_58 = uStack_70;
    plStack_60 = plStack_78;
    pvStack_50 = pvStack_68;
  }
  else {
    FUN_03f5d0a4(&plStack_60,pvStack_68,uStack_70);
  }
  lVar1 = lStack_48;
  for (; lVar4 = lStack_48, lVar1 != lVar2; lVar1 = lVar1 + 0x28) {
    uVar3 = FUN_03f67d24(&plStack_60,lVar1);
    lVar4 = lVar1;
    if ((uVar3 & 1) != 0) break;
    lStack_48 = lVar2;
  }
  if (((ulong)plStack_60 & 1) != 0) {
    operator_delete(pvStack_50);
  }
  if (((byte)plStack_78 & 1) != 0) {
    operator_delete(pvStack_68);
  }
  if (lVar4 != lStack_40) {
    *(undefined4 *)(param_3 + 0x20) = 5;
  }
  plStack_78 = &lStack_48;
  FUN_03f67cac(&plStack_78);
  return lVar4 != lStack_40;
}

