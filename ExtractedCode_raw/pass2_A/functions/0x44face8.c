// rea decompile_all
// name: Utilities.StringExtension$$SecondToTimeMMSS
// address: 0x44face8
// body: available
// range: 0x44face8-0x44faecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 64e910c91993829e5e724662ba81449dbf792c1cb8314b33f5f163c4d0b382f6
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra analysis was seeded before auto-analysis from /root/work/seeds.json (sha256 9bc4c8d559493c7b7b20677f2c259be4cb73fa7ba09f128838d915f9a12aa69f: 147485 function, 0 code, 0 label entries). Seeded functions, code and names are caller assertions, not Ghidra discoveries.; Seed outcome: 146901 functions created, 584 already present, 0 failed; 0 code seeds decoded, 0 failed; 0 labels applied, 0 failed; 0 seeds outside initialized memory.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 Utilities_StringExtension__SecondToTimeMMSS(float param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  float fVar4;
  int local_44;
  int local_28;
  int local_24;
  
  if ((DAT_09518465 & 1) == 0) {
    FUN_03f5c2a4(&DAT_09225fb8);
    FUN_03f5c2a4(&DAT_09225fc0);
    FUN_03f5c2a4(&DAT_091f96a8);
    DAT_09518465 = 1;
  }
  uVar1 = DAT_091f96a8;
  if (0.0 <= param_1) {
    if (DAT_09516626 == '\0') {
      FUN_03f5c2a4(&DAT_09187e80);
      DAT_09516626 = '\x01';
    }
    fVar4 = param_1 / 60.0;
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
      iVar3 = -0x80000000;
      if ((float)(int)fVar4 != INFINITY) {
        iVar3 = (int)fVar4;
      }
      if (DAT_09516626 == '\0') {
        FUN_03f5c2a4(&DAT_09187e80);
        DAT_09516626 = '\x01';
      }
    }
    else {
      iVar3 = -0x80000000;
      if ((float)(int)fVar4 != INFINITY) {
        iVar3 = (int)fVar4;
      }
    }
    fVar4 = fmodf(param_1,60.0);
    if (*(int *)(DAT_09187e80 + 0xe4) == 0) {
      FUN_03f5c424();
    }
    local_44 = -0x80000000;
    if ((float)(int)fVar4 != INFINITY) {
      local_44 = (int)fVar4;
    }
    if (iVar3 == 0) {
      local_24 = local_44;
      uVar1 = FUN_03f5c42c(DAT_09535420,&local_24);
      uVar1 = System_String__Format(DAT_09225fb8,uVar1,0);
    }
    else {
      local_28 = iVar3;
      uVar1 = FUN_03f5c42c(DAT_09535420,&local_28);
      uVar2 = FUN_03f5c42c(DAT_09535420,&local_44);
      uVar1 = System_String__Format(DAT_09225fc0,uVar1,uVar2,0);
    }
  }
  return uVar1;
}

