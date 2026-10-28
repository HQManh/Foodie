// rea decompile_all
// name: FUN_03faf950
// address: 0x3faf950
// body: available
// range: 0x3faf950-0x3fafa77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_03faf950(undefined8 param_1,undefined8 param_2,byte param_3,undefined4 param_4)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar2 = operator_new(0x28);
  FUN_03f86b98();
  lVar3 = thunk_FUN_03f9944c(DAT_095354d8);
  FUN_03faea24(lVar3,pvVar2);
  lVar7 = *(long *)(lVar3 + 0x10);
  *(undefined4 *)(lVar7 + 0x38) = 8;
  *(byte *)(lVar7 + 0xa8) = param_3 & 1;
  lVar4 = FUN_03f5da88(0x28,0);
  FUN_03f5ef9c(lVar4,lVar3);
  uVar5 = FUN_03faa758();
  FUN_03f5ef9c(lVar4 + 8,uVar5);
  *(undefined8 *)(lVar4 + 0x10) = param_1;
  *(undefined8 *)(lVar4 + 0x18) = param_2;
  pvVar6 = operator_new(8);
  FUN_03f869fc(pvVar6,0,1);
  *(void **)(lVar4 + 0x20) = pvVar6;
  FUN_03f86f74(pvVar2,param_4);
  FUN_03f5c2c8(pvVar2,*(undefined1 *)(*(long *)(lVar3 + 0x10) + 0xb0));
  iVar1 = FUN_03f87010(pvVar2,FUN_03fafa98,lVar4);
  if (iVar1 == 0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x20);
    *(uint *)(lVar7 + 0x38) = *(uint *)(lVar7 + 0x38) & 0xfffffff7;
    FUN_03f86a58(uVar5,1,0);
  }
  else {
    FUN_03f86cc0(pvVar2);
    operator_delete(pvVar2);
    lVar7 = 0;
  }
  return lVar7;
}

