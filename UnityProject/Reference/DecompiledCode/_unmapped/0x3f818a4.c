// rea decompile_all
// name: FUN_03f818a4
// address: 0x3f818a4
// body: available
// range: 0x3f818a4-0x3f81a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_03f818a4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined1 auStack_18 [8];
  
  if (DAT_095348f8 == '\0') {
    FUN_03f5d894(auStack_18,&DAT_09534900);
    if (DAT_095348f8 == '\0') {
      puVar7 = operator_new(0x288);
      FUN_03f81170();
      DAT_09534880 = puVar7;
      thunk_FUN_03f8d068();
      puVar7 = DAT_09534880;
      *(undefined8 *)(DAT_09534880 + 200) = 0x3ff0000000000000;
      *(undefined8 *)(puVar7 + 0xb0) = 0x2000000004;
      *(undefined8 *)(puVar7 + 0xf0) = 0;
      *(undefined8 *)(puVar7 + 0xbc) = 0x4010000000000000;
      *(undefined8 *)(puVar7 + 0xb8) = 0x4008000000000000;
      *(undefined8 *)(puVar7 + 0xc0) = 0x4034000000000000;
      *(undefined8 *)(puVar7 + 0xc4) = 0xa00000014;
      *(undefined8 *)(puVar7 + 0xb4) = 0x3fc3333333333333;
      *(undefined4 *)(puVar7 + 0xcc) = 200;
      *(undefined8 *)(puVar7 + 0xd4) = 0x4000000000000000;
      *(undefined8 *)(puVar7 + 0xd0) = 0x3f847ae147ae147b;
      *(undefined8 *)(puVar7 + 0xe8) = 0;
      *(undefined4 *)(puVar7 + 0x104) = 0;
      *(undefined8 *)(puVar7 + 0x108) = 0;
      *(undefined8 *)(puVar7 + 0xdc) = 0;
      *(undefined8 *)(puVar7 + 0xe0) = 0;
      *(undefined8 *)(puVar7 + 0xd8) = 0x3fc3333333333333;
      puVar7[0xe4] = 0;
      pvVar8 = calloc(1,0x100);
      *(void **)(puVar7 + 0xf4) = pvVar8;
      pvVar8 = calloc(1,(long)*(int *)(puVar7 + 0xb2) << 3);
      *(void **)(puVar7 + 0xf8) = pvVar8;
      uVar9 = FUN_03fae7a4();
      *(undefined8 *)(puVar7 + 0x100) = uVar9;
      uVar5 = FUN_03fae880(puVar7 + 0x100,*(undefined4 *)(puVar7 + 0xc6),
                           *(undefined4 *)(puVar7 + 0xcc));
      *(undefined4 *)(puVar7 + 0xfc) = uVar5;
      iVar6 = FUN_03f8e900();
      puVar7 = DAT_09534880;
      iVar4 = iVar6 * 100;
      iVar1 = iVar6;
      if (iVar6 < 0xc9) {
        iVar1 = 200;
      }
      iVar2 = iVar6;
      if (199 < iVar6) {
        iVar2 = 200;
      }
      *(int *)(DAT_09534880 + 0x138) = iVar6;
      iVar3 = iVar4;
      if (iVar1 <= iVar4) {
        iVar3 = iVar1;
      }
      *(int *)(puVar7 + 0x134) = iVar6;
      if (iVar2 <= iVar4) {
        iVar2 = iVar3;
      }
      *puVar7 = (short)iVar6;
      *(int *)(puVar7 + 0x13a) = iVar2;
      *(int *)(puVar7 + 0x136) = iVar2;
      DAT_095348f8 = '\x01';
    }
    FUN_03f5d920(auStack_18);
  }
  return;
}

