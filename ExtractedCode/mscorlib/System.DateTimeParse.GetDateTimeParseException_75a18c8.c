// rea decompile_all
// name: System.DateTimeParse$$GetDateTimeParseException
// address: 0x75a18c8
// body: available
// range: 0x75a18c8-0x75a1a9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long System_DateTimeParse__GetDateTimeParseException(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  if ((DAT_09521c71 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09181550);
    FUN_03f5c2a4(&DAT_09184908);
    DAT_09521c71 = 1;
  }
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 < 4) {
    if (iVar1 == 1) {
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      uVar3 = SR__GetResourceString(*(undefined8 *)(param_1 + 0x48),0);
      lVar4 = thunk_FUN_03f9944c(DAT_09181550);
      System_ArgumentNullException___ctor(lVar4,uVar2,uVar3,0);
      return lVar4;
    }
    if (iVar1 == 2) {
      uVar3 = SR__GetResourceString(*(undefined8 *)(param_1 + 0x48),0);
      goto LAB_075a1a58;
    }
    if (iVar1 != 3) {
      return 0;
    }
    uVar2 = SR__GetResourceString(*(undefined8 *)(param_1 + 0x48),0);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
  }
  else {
    if (5 < iVar1) {
      if (iVar1 == 6) {
        uVar3 = SR__GetResourceString(*(undefined8 *)(param_1 + 0x48),0);
        uVar2 = System_String__CreateString
                          (0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),0);
        uVar5 = *(undefined8 *)(param_1 + 0x50);
      }
      else {
        if (iVar1 != 7) {
          return 0;
        }
        uVar3 = SR__GetResourceString(*(undefined8 *)(param_1 + 0x48),0);
        uVar2 = System_String__CreateString
                          (0,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68),0);
        uVar5 = *(undefined8 *)(param_1 + 0x30);
      }
      uVar3 = SR__Format(uVar3,uVar2,uVar5,0);
      goto LAB_075a1a58;
    }
    if (iVar1 == 4) {
      uVar2 = SR__GetResourceString(*(undefined8 *)(param_1 + 0x48),0);
      uVar3 = *(undefined8 *)(param_1 + 0x60);
      uVar5 = *(undefined8 *)(param_1 + 0x68);
    }
    else {
      if (iVar1 != 5) {
        return 0;
      }
      uVar2 = SR__GetResourceString(*(undefined8 *)(param_1 + 0x48),0);
      uVar3 = *(undefined8 *)(param_1 + 0x70);
      uVar5 = *(undefined8 *)(param_1 + 0x78);
    }
    uVar3 = System_String__CreateString(0,uVar3,uVar5,0);
  }
  uVar3 = SR__Format(uVar2,uVar3,0);
LAB_075a1a58:
  lVar4 = thunk_FUN_03f9944c(DAT_09184908);
  System_SystemException___ctor(lVar4,uVar3,0);
  *(undefined4 *)(lVar4 + 0x60) = 0x80131537;
  return lVar4;
}

