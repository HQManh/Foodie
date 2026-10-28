// rea decompile_all
// name: CakeOrder.DataSO.WeatherAudioProfileSO$$DefaultFor
// address: 0x426be54
// body: available
// range: 0x426be54-0x426bf67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long CakeOrder_DataSO_WeatherAudioProfileSO__DefaultFor(int param_1)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09516fee & 1) == 0) {
    FUN_03f5c2a4(&DAT_09195f58);
    DAT_09516fee = 1;
  }
  lVar1 = thunk_FUN_03f9944c(DAT_09195f58);
  *(undefined8 *)(lVar1 + 0x1c) = 0xc1c80000c1f00000;
  *(undefined8 *)(lVar1 + 0x14) = 0x4120000046abe000;
  System_Object___ctor(lVar1,0);
  if (param_1 < 3) {
    if (param_1 == 1) {
      uVar2 = 1;
      uVar3 = 0x41a00000458ca000;
      uVar4 = 0x3ecccccd3e99999a;
    }
    else {
      if (param_1 != 2) goto LAB_0426bf0c;
      uVar2 = 2;
      uVar3 = 0x42c8000046abe000;
      uVar4 = 0x3dcccccd3e19999a;
    }
    *(undefined4 *)(lVar1 + 0x10) = uVar2;
    *(undefined8 *)(lVar1 + 0x14) = uVar3;
    *(undefined8 *)(lVar1 + 0x24) = uVar4;
  }
  else {
    if (param_1 == 3) {
      *(undefined4 *)(lVar1 + 0x10) = 3;
      *(undefined8 *)(lVar1 + 0x14) = 0x4416000046abe000;
      *(undefined4 *)(lVar1 + 0x28) = 0x3f4ccccd;
      return lVar1;
    }
    if (param_1 == 4) {
      *(undefined4 *)(lVar1 + 0x10) = 4;
      *(undefined8 *)(lVar1 + 0x14) = 0x4348000044bb8000;
      *(undefined8 *)(lVar1 + 0x28) = 0x3f0000003f19999a;
      return lVar1;
    }
LAB_0426bf0c:
    *(int *)(lVar1 + 0x10) = param_1;
  }
  return lVar1;
}

