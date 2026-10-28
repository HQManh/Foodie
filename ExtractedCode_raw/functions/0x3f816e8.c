// rea decompile_all
// name: FUN_03f816e8
// address: 0x3f816e8
// body: available
// range: 0x3f816e8-0x3f818a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03f816e8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar2 = thunk_FUN_03f9944c(DAT_095355c0);
  FUN_03f818a4();
  uVar3 = FUN_03fbf41c(*(undefined8 *)(param_3 + 0x20),DAT_09535488);
  if ((uVar3 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_03fbef44(*(undefined8 *)(param_3 + 0x20),"Invoke",0xffffffff);
  }
  FUN_03faa758();
  lVar5 = thunk_FUN_03f9944c(DAT_09535640);
  if (lVar4 == 0) {
    uVar6 = FUN_03f9adc4(param_3,0);
    FUN_03f697d0(lVar5,uVar6,0);
    uVar3 = (ulong)*(byte *)(param_3 + 0x52);
  }
  else {
    uVar6 = FUN_03f9adc4(lVar4,0);
    FUN_03f697d0(lVar5,uVar6,0);
    uVar3 = (ulong)(*(byte *)(param_3 + 0x52) - 2);
  }
  if ((int)uVar3 < 1) {
    uVar3 = 0;
    if (param_4 == 0) {
      lVar7 = 0;
      lVar4 = 0;
      goto LAB_03f81804;
    }
  }
  else {
    lVar4 = 0;
    do {
      uVar6 = *(undefined8 *)(param_4 + lVar4);
      il2cpp_class_from_type(*(undefined8 *)(*(long *)(param_3 + 0x30) + lVar4));
      *(undefined8 *)(*(long *)(lVar5 + 0x18) + lVar4 + 0x20) = uVar6;
      FUN_03f5d7b8();
      lVar4 = lVar4 + 8;
    } while (uVar3 << 3 != lVar4);
  }
  plVar1 = (long *)(param_4 + uVar3 * 8);
  lVar4 = *plVar1;
  lVar7 = plVar1[1];
LAB_03f81804:
  FUN_03f5ef9c(lVar2 + 0x10,lVar5);
  FUN_03f5ef9c(lVar2 + 0x28,lVar7);
  if (lVar4 != 0) {
    FUN_03f98700(lVar4);
    uVar6 = FUN_03fbcb54();
    FUN_03f5ef9c(lVar2 + 0x18,uVar6);
    FUN_03f5ef9c(lVar2 + 0x20,lVar4);
  }
  lVar4 = thunk_FUN_03f9944c(DAT_09535490);
  FUN_03f5ef9c(lVar4 + 0x20,param_2);
  FUN_03f5ef9c(lVar4 + 0x30,lVar2);
  uVar6 = FUN_03f5ef9c(lVar4 + 0x10,*(undefined8 *)(lVar2 + 0x28));
  FUN_03f812e4(uVar6,lVar4);
  return lVar4;
}

