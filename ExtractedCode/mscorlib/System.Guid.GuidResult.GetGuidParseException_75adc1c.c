// rea decompile_all
// name: System.Guid.GuidResult$$GetGuidParseException
// address: 0x75adc1c
// body: available
// range: 0x75adc1c-0x75add9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 System_Guid_GuidResult__GetGuidParseException(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if ((DAT_09521cab & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181550);
    FUN_03f5c2a4(&DAT_09184908);
    FUN_03f5c2a4(&DAT_09212550);
    DAT_09521cab = 1;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 < 3) {
    if (iVar1 == 1) {
      uVar4 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = SR__GetResourceString(*(undefined8 *)(param_1 + 0x18),0);
      uVar3 = thunk_FUN_03f9944c(DAT_09181550);
      System_ArgumentNullException___ctor(uVar3,uVar4,uVar2,0);
      return uVar3;
    }
    if (iVar1 != 2) goto LAB_075add68;
    uVar2 = SR__GetResourceString(*(undefined8 *)(param_1 + 0x18),0);
  }
  else {
    if (iVar1 != 3) {
      if (iVar1 == 4) {
        return *(undefined8 *)(param_1 + 0x30);
      }
      if (iVar1 == 5) {
        uVar2 = SR__GetResourceString(*(undefined8 *)(param_1 + 0x18),0);
        uVar4 = *(undefined8 *)(param_1 + 0x30);
        uVar3 = thunk_FUN_03f9944c(DAT_09184908);
        System_FormatException___ctor(uVar3,uVar2,uVar4,0);
        return uVar3;
      }
LAB_075add68:
      uVar3 = thunk_FUN_03f9944c(DAT_09184908);
      uVar2 = DAT_09212550;
      goto LAB_075add88;
    }
    uVar2 = SR__GetResourceString(*(undefined8 *)(param_1 + 0x18),0);
    uVar2 = SR__Format(uVar2,*(undefined8 *)(param_1 + 0x20),0);
  }
  uVar3 = thunk_FUN_03f9944c(DAT_09184908);
LAB_075add88:
  System_FormatException___ctor(uVar3,uVar2,0);
  return uVar3;
}

