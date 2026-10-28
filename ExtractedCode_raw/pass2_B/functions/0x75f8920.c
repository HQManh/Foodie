// rea decompile_all
// name: thunk_FUN_03f6f40c
// address: 0x75f8920
// body: available
// range: 0x75f8920-0x75f8923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long thunk_FUN_03f6f40c(long param_1)

{
  undefined8 *puVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  int iVar6;
  undefined8 *puVar7;
  long lStack_58;
  long lStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar3 = FUN_03fbe574(*(undefined8 *)(param_1 + 0x10),1);
  uStack_40 = 0;
  uStack_38 = 0;
  puStack_48 = &uStack_40;
  for (; lVar3 != 0; lVar3 = FUN_03fbf154(lVar3)) {
    lStack_50 = 0;
    while (lStack_58 = FUN_03fbedac(lVar3,&lStack_50), lStack_58 != 0) {
      FUN_03f7240c(&puStack_48,&lStack_58,&lStack_58);
    }
  }
  lVar3 = FUN_03f984c8(DAT_095354b8,uStack_38);
  if (puStack_48 != &uStack_40) {
    iVar6 = 0;
    puVar5 = puStack_48;
    do {
      uVar4 = FUN_03f9ab74(puVar5[4] + 0x20);
      puVar1 = (undefined8 *)(lVar3 + 0x20 + (long)iVar6 * 8);
      *puVar1 = uVar4;
      FUN_03f5d7b8(puVar1);
      puVar1 = (undefined8 *)puVar5[1];
      puVar7 = puVar5;
      if ((undefined8 *)puVar5[1] == (undefined8 *)0x0) {
        do {
          puVar5 = (undefined8 *)puVar7[2];
          bVar2 = (undefined8 *)*puVar5 != puVar7;
          puVar7 = puVar5;
        } while (bVar2);
      }
      else {
        do {
          puVar5 = puVar1;
          puVar1 = (undefined8 *)*puVar5;
        } while ((undefined8 *)*puVar5 != (undefined8 *)0x0);
      }
      iVar6 = iVar6 + 1;
    } while (puVar5 != &uStack_40);
  }
  FUN_03f723d0(&puStack_48,uStack_40);
  return lVar3;
}

